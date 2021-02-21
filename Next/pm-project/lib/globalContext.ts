import { createContext, useState } from 'react'

interface context {
  navState: string,
  setNavState: Function
}

let globalContext = {
  navState: null,
  setNavState: (state) => {}
} 

export const GlobalContext = createContext(globalContext) 