import React, { useState } from 'react'
import '../styles/globals.scss'

import { UserContext } from '../lib/authContext' 
import { GlobalContext } from '../lib/globalContext'

import { useUserData, useGlobalContext } from '../lib/hooks'

import Navbar from '../components/navbar'

function MyApp({ Component, pageProps }) {

  const userData = useUserData()
  const globalContext = useGlobalContext()

  return (
    <GlobalContext.Provider value={globalContext}>
      <UserContext.Provider value={userData}> 
        <Component {...pageProps} /> 
        <Navbar/>  
      </UserContext.Provider> 
    </GlobalContext.Provider> 
  ) 
}

export default MyApp
