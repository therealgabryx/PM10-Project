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

// Status led config
let ledPin = 2;
print("status led:     ", GPIO.set_mode(ledPin, GPIO.MODE_OUTPUT));

// DHT22 (temperature, humidity) config
let dhtPin = 15;
let dht = DHT.create(dhtPin, DHT.DHT22);

// pm2.5 (dust) config
let ledPm10Pin = 13;
print("pm10 led:     ", GPIO.set_mode(ledPm10Pin, GPIO.MODE_OUTPUT));

let pm10Pin = 34;
print("pm10     ", ADC.enable(pm10Pin));

// Void loop kinda like
Timer.set(10000, true, function () { // timer period is in ms
  GPIO.write(ledPin, 1);

  GPIO.write(ledPm10Pin, 0);
  Sys.usleep(280);
  let dustVal = ADC.read(pm10Pin);
  Sys.usleep(40);
  GPIO.write(ledPm10Pin, 1);

  dustVal = (dustVal / 4096 - 0.0356) * 120000 * 0.035;

  let msg = JSON.stringify([{ timestamp: Timer.fmt("%c", Timer.now()), gps: GPS.getLocation(), temperature: dht.getTemp(), humidity: dht.getHumidity(), Pm10: dustVal }]);
  //let ok = MQTT.pub(topic, msg, 1);
  //print(ok, msg);
  print(msg);
  GPIO.toggle(ledPin);
}, null);