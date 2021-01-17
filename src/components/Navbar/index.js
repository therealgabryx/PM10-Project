import React, { useState } from 'react' 
import './index.css' 

import { Link } from "react-router-dom"; 

import { FontAwesomeIcon } from '@fortawesome/react-fontawesome' 
import { faChartPie, faUser, faMapMarkerAlt } from '@fortawesome/free-solid-svg-icons' 

export default function Index({ currentNav, setCurrentNav }) { 

    return ( 
        <div className="Navbar"> 

            <Link to='/charts'> 
                <div onClick={() => { setCurrentNav('charts') }}> 
                    <FontAwesomeIcon icon={faChartPie} className={currentNav === 'charts' ? 'navbarIconActive' : '' }/> 
                </div> 
            </Link> 

            <Link to='/'> 
                <div onClick={() => { setCurrentNav('maps')}}> 
                    <FontAwesomeIcon icon={faMapMarkerAlt} style={{ fontSize: "1.25rem" }} className={currentNav === 'maps' ? 'navbarIconActive' : ''}/>
                </div> 
            </Link> 

            <Link to='/account'> 
                <div onClick={() => { setCurrentNav('account') }}> 
                        <FontAwesomeIcon icon={faUser} className={currentNav === 'account' ? 'navbarIconActive' : ''}/> 
                </div> 
            </Link>  

        </div> 
    ) 
} 
