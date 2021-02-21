import { createContext } from 'react'

let globalContext = {
  navState: null,
} 

export const GlobalContext = createContext(globalContext) 