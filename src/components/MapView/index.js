import React, { useState, useEffect, useRef } from 'react' 
import '../MapView/index.css' 

// Mapbox GL JS Api 
import mapboxgl from 'mapbox-gl'; 

mapboxgl.accessToken = 'pk.eyJ1IjoidGhlcmVhbGdhYnJ5eCIsImEiOiJja2hmZXdjYmcwN3BmMnlxcTI3M3FlczIzIn0.JHdtdPNZbQmPNRxIO1T0Yw';


export default function Index({ setCurrentNav }) { 

    // default Trento state-View 
    let [lng, setLng] = useState(11.1300); 
    let [lat, setLat] = useState(46.0650); 
    let [zoom, setZoom] = useState(12); 

    let pmHeatmapData = null; 

    var bounds = [
      [10.847135, 45.861335], // Southwest coordinates
      [11.500217, 46.308461] // Northeast coordinates 
    ]; 

    const mapContainer = useRef(); 

    useEffect(() => { 
        setCurrentNav('maps');
        // console.log(lat, lng); 

        const map = new mapboxgl.Map({ 
            container: mapContainer.current, 
            style: 'mapbox://styles/mapbox/streets-v11', 
            center: [lng, lat], 
            zoom: zoom,
            maxBounds: bounds 
        }); 

        map.on('load', () => { 
            // Add a geojson point source. 
            map.addSource( 
                'pm-heatmap-data', { 
                    'type': 'geojson', 
                    'data': {}}
            );  // label: 'string', object: {'type': 'geojson', 'data':'data.geojson'} 

            map.addLayer({
                'id': 'pm-heatmap',
                'type': 'heatmap',
                'source': 'pm-heatmap-data',
                'maxzoom': 16,
                paint: {
                    // increase weight as diameter breast height increases
                    'heatmap-weight': {
                      property: 'pm10Level',
                      type: 'exponential',
                      stops: [
                        [0.0, 0],
                        [5.0, 1] 
                      ]
                    },
                    // increase intensity as zoom level increases
                    'heatmap-intensity': {
                      stops: [
                        [11, 1],
                        [15, 3]
                      ]
                    },
                    // assign color values be applied to points depending on their density
                    'heatmap-color': [
                      'interpolate',
                      ['linear'],
                      ['heatmap-density'],
                      0, 'rgba(236,222,239,0)',
                      0.2, 'rgb(208,209,230)',
                      0.4, 'rgb(166,189,219)',
                      0.6, 'rgb(103,169,207)',
                      0.8, 'rgb(28,144,153)'
                    ],
                    // increase radius as zoom increases
                    'heatmap-radius': {
                      stops: [
                        [11, 15],
                        [15, 20]
                      ]
                    },
                    // decrease opacity to transition into the circle layer
                    'heatmap-opacity': {
                      default: 1,
                      stops: [
                        [14, 1],
                        [15, 0]
                      ]
                    },
                }
            }, 'waterway-label'); 

            map.addLayer({
                id: 'pm-heat-datapoints',
                type: 'circle',
                source: 'pm-heatmap-data',
                minzoom: 14,
                paint: {
                  // increase the radius of the circle as the zoom level and dbh value increases
                  'circle-radius': {
                    property: 'pm10Level',
                    type: 'exponential',
                    stops: [
                      [{ zoom: 15, value: 1 }, 5],
                      [{ zoom: 15, value: 62 }, 10],
                      [{ zoom: 22, value: 1 }, 20],
                      [{ zoom: 22, value: 62 }, 50],
                    ]
                  },
                  'circle-color': {
                    property: 'pm10Level',
                    type: 'exponential',
                    stops: [
                      [0, 'rgba(236,222,239,0)'],
                      [10, 'rgb(236,222,239)'],
                      [20, 'rgb(208,209,230)'],
                      [30, 'rgb(166,189,219)'],
                      [40, 'rgb(103,169,207)'],
                      [50, 'rgb(28,144,153)'],
                      [60, 'rgb(1,108,89)']
                    ]
                  },
                  'circle-stroke-color': 'white',
                  'circle-stroke-width': 1,
                  'circle-opacity': {
                    stops: [
                      [14, 0],
                      [15, 1]
                    ]
                  }
                } }, 'waterway-label'); 

        }) 

        
        
    }, []); 
    

    return ( 
        <div className="MapView" ref={mapContainer}>  
           
        </div> 
    ) 
} 


