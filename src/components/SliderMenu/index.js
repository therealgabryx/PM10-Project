import React from 'react' 
import './index.css'

import { Button, ButtonGroup } from "shards-react"; 

export default function index() { 
    return ( 
        <div className='SliderMenu'> 
            <ButtonGroup className='buttons'>
                <Button>Left</Button>
                <Button>Middle</Button>
                <Button>Right</Button>
            </ButtonGroup> 
        </div> 
    ) 
} 





