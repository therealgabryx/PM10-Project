import '../styles/globals.css'

import Navbar from '../components/navbar'

function MyApp({ Component, pageProps }) {
  return (
    <> 
      <Component {...pageProps} /> 
      <Navbar/>  
    </> 
  ) 
}

export default MyApp
