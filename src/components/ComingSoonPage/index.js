import React from 'react'
import './index.css'

import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faUserLock } from '@fortawesome/free-solid-svg-icons'

export default function index() {
    return (
        <div className='ComingSoonPage'>
            <div className='text'>
                <FontAwesomeIcon icon={faUserLock} size='2x'/> 
            </div>
            <div className='text'>
                <span>this functionality seems to be<br/> locked for now..</span> 
                <h4>Coming Soon!</h4>
            </div>
        </div> 
    )
}
