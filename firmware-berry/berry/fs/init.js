// Import used library
load('api_config.js');
load('api_gpio.js');
load('api_dht.js');
load('api_timer.js');
load('api_mqtt.js');
load('api_adc.js');
load('api_sys.js');
load('api_gps.js');


// Telemetry topic must have this name:
let topic = '/devices/' + Cfg.get('device.id') + '/events';

// Status led config (on when arduino is take data from sensors)
let ledPin = 2;
print("[log] Status led:\t", GPIO.set_mode(ledPin, GPIO.MODE_OUTPUT));

// DHT22 (temperature, humidity) config
let dhtPin = 15;
let dht = DHT.create(dhtPin, DHT.DHT22);

// PM2.5 (dust) config
let ledPm10Pin = 13;    // Cleaning PM2.5 sensor led (on when sensor isn't reading)
print("[log] pm10 led:\t", GPIO.set_mode(ledPm10Pin, GPIO.MODE_OUTPUT));

let pm10Pin = 34;
print("[log] pm10:\t", ADC.enable(pm10Pin));

// Void loop kinda like
Timer.set(10000, true, function () { // Timer period is in ms (now 10 secs)
  GPIO.write(ledPin, 1);              // Turn on status led

  GPIO.write(ledPm10Pin, 0);          // Turn off cleaning led
  Sys.usleep(280);                    // Whait for dust
  let dustVal = ADC.read(pm10Pin);    // Read dust data
  Sys.usleep(40);
  GPIO.write(ledPm10Pin, 1);          // Turn on cleaning led
  dustVal = (dustVal / 4096 - 0.0356) * 120000 * 0.035;     // Calculate PM2.5 data

  // Format all data into JSON message and publish it on GCP
  let msg = JSON.stringify([{ timestamp: Timer.fmt("%c", Timer.now()), gps: GPS.getLocation(), temperature: dht.getTemp(), humidity: dht.getHumidity(), Pm10: dustVal }]);
  //let ok = MQTT.pub(topic, msg, 1);
  //print(ok, msg);
  print(msg);

  GPIO.toggle(ledPin);                // Turn on status led
}, null);