import React, { useEffect } from 'react' 
import '../MapView/index.css' 

// ES6
import ReactMapboxGl, { Layer, Feature } from 'react-mapbox-gl';
import 'mapbox-gl/dist/mapbox-gl.css';

// process.env.REACT_APP_MAPBOX_ACCESS_TOKEN; 

export default function Index({ setCurrentNav }) { 

    useEffect(() => {
        setCurrentNav('maps');
    }, []) 

    const Map = ReactMapboxGl({
        /* accessToken: process.env.REACT_APP_MAPBOX_ACCESS_TOKEN */
        accessToken: "pk.eyJ1IjoidGhlcmVhbGdhYnJ5eCIsImEiOiJja2hmZXdjYmcwN3BmMnlxcTI3M3FlczIzIn0.JHdtdPNZbQmPNRxIO1T0Yw" 
    });

    return (
        <div className="MapView">  
            <Map 
                style="mapbox://styles/mapbox/light-v10"
                containerStyle={{
                    height: '105vh',
                    width: '100vw'
                }} 
                center={[11.1300, 46.0650]}
            />  
        </div> 
    )
}
