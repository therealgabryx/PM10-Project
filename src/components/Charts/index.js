import React, { useEffect } from 'react'
import './index.css'

export default function Index({ setCurrentNav }) {

    useEffect(() => {
        setCurrentNav('charts');
    }, []) 

    return (
        <div className='Charts'>
            Charts
        </div>
    )
}
