import populateArrays from './utils/populateArrays/populateArrays.mjs' 
import { runBusLine1, runBusLine3, runBusLine7 } from './utils/simulateBusRuns/simulateBusRuns.mjs' 

//let iterativeTimes =  10 //choose how many dots you want in your map  
let defaultTimeDelay = 250; //chooose how many milliseconds wait between a stamp and another  
//[i]  implement tha wae 

let timeInterval = 250; 

let { busLine1, busLine3, busLine7 } = populateArrays(); //populing tha array baby 
 
// console.log(busLine7) 

/* runBusLine1(defaultTimeDelay, "way", 5, busLine1);  */ // issue 

runBusLine3(defaultTimeDelay, "way", 5, busLine3);  
/* runBusLine7(defaultTimeDelay, "way", 5, busLine7);  */ 



















 




