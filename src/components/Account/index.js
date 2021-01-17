import React, { useEffect } from 'react'
import './index.css'

export default function Index({ setCurrentNav }) {

    useEffect(() => {
        setCurrentNav('account');
    }, []) 

    return (
        <div className='Account'>
            Account
        </div> 
    )
}
