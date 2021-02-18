import React from 'react'
import Link from 'next/link'

import styles from '../styles/Navbar.module.css'

import { FontAwesomeIcon } from '@fortawesome/react-fontawesome' 
import { faChartPie, faUser, faMapMarkerAlt } from '@fortawesome/free-solid-svg-icons' 

export default function navbar({ currentNav, setCurrentNav }) {
    return (
        <div className={styles.container}> 
            <Link href='/charts'> 
                <div onClick={() => { console.log('charts') }}> 
                    <FontAwesomeIcon icon={faChartPie} className={currentNav === 'charts' ? 'navbarIconActive' : '' }/> 
                </div> 
            </Link> 

            <Link href='/'> 
                <div onClick={() => {  console.log('maps')}}> 
                    <FontAwesomeIcon icon={faMapMarkerAlt} style={{ fontSize: "1.25rem" }} className={currentNav === 'maps' ? 'navbarIconActive' : ''}/>
                </div> 
            </Link> 

            <Link href='/account'> 
                <div onClick={() => {  console.log('account') }}> 
                        <FontAwesomeIcon icon={faUser} className={currentNav === 'account' ? 'navbarIconActive' : ''}/> 
                </div> 
            </Link>  
        </div> 
    )
}
