import React, { useContext } from 'react'
import Link from 'next/link'

import styles from '../styles/Navbar.module.css'

import { FontAwesomeIcon } from '@fortawesome/react-fontawesome' 
import { faChartPie, faUser, faMapMarkerAlt } from '@fortawesome/free-solid-svg-icons' 
import { GlobalContext } from '../lib/globalContext' 

export default function navbar() { 

    let { navState: currentNav, setNavState: setCurrentNav } = useContext(GlobalContext) 

    return (
        <div className={styles.container}> 
            <Link href={{ pathname: '/charts' }}> 
                <div onClick={() => { setCurrentNav('charts') }} className={currentNav === 'charts' ? styles.navbarIconActive : '' }> 
                    <FontAwesomeIcon icon={faChartPie}/> 
                </div> 
            </Link> 

            <Link href={{ pathname: '/' }}> 
                <div onClick={() => { setCurrentNav('maps') }} className={currentNav === 'maps' ? styles.navbarIconActive : ''}> 
                    <FontAwesomeIcon icon={faMapMarkerAlt} style={{ fontSize: "1.25rem" }}/> 
                </div> 
            </Link> 

            <Link href={{ pathname: '/account' }}> 
                <div onClick={() => { setCurrentNav('account') }} className={currentNav === 'account' ? styles.navbarIconActive : ''}> 
                        <FontAwesomeIcon icon={faUser} /> 
                </div> 
            </Link>  
        </div> 
    ) 
}
