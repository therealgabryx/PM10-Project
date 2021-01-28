import React from 'react'
import '../Header/index.css' 

import { FontAwesomeIcon } from '@fortawesome/react-fontawesome'
import { faPencilRuler } from '@fortawesome/free-solid-svg-icons'

export default function index() {
    return (
        <div className="Header">
            <h2 className='title'> <FontAwesomeIcon icon={faPencilRuler}/> <span>PM10 Project</span> </h2> 
        </div> 
    )
}
