import React, { useState } from 'react';

import {
  BrowserRouter as Router,
  Switch,
  Route 
} from "react-router-dom";

// components 
import Header from './components/Header' 
import MapView from './components/MapView' 
import Navbar from './components/Navbar' 
import ComingSoonPage from './components/ComingSoonPage' 
import Charts from './components/Charts' 
import Account from './components/Account' 
import SliderMenu from './components/SliderMenu' 

function App() { 

  let [currentNav, setCurrentNav] = useState('maps'); 

  return ( 
    <Router>
      <div className="App"> 

        <Header/> 

          <Switch>  
          <Route exact path="/charts">
              {/* <Charts setCurrentNav={setCurrentNav}/>  */} 
              <ComingSoonPage setCurrentNav={setCurrentNav}/> 
            </Route> 

            <Route exact path="/account"> 
              {/* <Account setCurrentNav={setCurrentNav}/>  */}
              <ComingSoonPage setCurrentNav={setCurrentNav}/> 
            </Route> 

            <Route path="/ComingSoonPage">
              <ComingSoonPage setCurrentNav={setCurrentNav}/> 
            </Route> 

            <Route path="/"> 
              <SliderMenu/> 
              <MapView setCurrentNav={setCurrentNav}/> 
            </Route> 
          </Switch> 

        <Navbar currentNav={currentNav} setCurrentNav={setCurrentNav}/> 

      </div> 
    </Router> 
  ); 
} 

export default App;
