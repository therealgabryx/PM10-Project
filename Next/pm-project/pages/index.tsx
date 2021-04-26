import React, { useEffect, useState } from 'react'
import Head from 'next/head'
import styles from '../styles/Home.module.scss'

const mapboxgl = require('mapbox-gl/dist/mapbox-gl.js');

export default function Home() { 
  const [pageIsMounted, setPageIsMounted] = useState(false) 
  /* const [mapboxStyles, setMapboxStyles] = useState(null) */

  /* useEffect(() => { 
    fetch('http://api.mapbox.com/mapbox-gl-js/v1.12.0/mapbox-gl.css').then((res) => {
      JSON.stringify(res);
      console.log(res);
    }).then((data) => {
      setMapboxStyles(data);
      console.log(data);
    }); 
  }, []);  */

  return (
    <React.Fragment>
      <Head> 
        {/* <link href='https://api.mapbox.com/mapbox-gl-js/v1.12.0/mapbox-gl.css' rel='stylesheet' /> */}
      </Head> 
      <MapboxMap pageIsMounted={pageIsMounted} setPageIsMounted={setPageIsMounted}/> 
    </React.Fragment> 
  ) 
} 

function MapboxMap({ pageIsMounted, setPageIsMounted }) { 

  // default Trento state-View 
  let [lng, setLng] = useState(11.1300); 
  let [lat, setLat] = useState(46.0650); 
  let [zoom, setZoom] = useState(12); 

  var bounds = [
    [10.847135, 45.861335], // Southwest coordinates
    [11.500217, 46.308461] // Northeast coordinates 
  ]; 

  useEffect(() => { 
    
    setPageIsMounted(true); 

    mapboxgl.accessToken = 'pk.eyJ1IjoidGhlcmVhbGdhYnJ5eCIsImEiOiJja2p6bDM0eGgwOHFtMndsaXg3ZXdjbDAwIn0.JG_P2ErrrShMZelU_HQ_vg';

    const map = new mapboxgl.Map({
      container: 'my-map',
      style: 'mapbox://styles/mapbox/streets-v11',
      center: [lng, lat], 
      zoom: zoom,
      maxBounds: bounds 
    });

  }, []);

  return ( 
    <>
    <div className="data-selectors">
      <div>H%</div> 
      <div>PM10</div> 
      <div>°C</div> 
    </div>
    <div id="my-map" style={{ height: '100vh' }} /> 
    </>
  ) 
} 
