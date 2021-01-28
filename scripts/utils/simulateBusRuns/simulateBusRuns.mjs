//////////////////////////////////////
//\\\\\\\\\\\\\  BUS 3 \\\\\\\\\\\\\//
//////////////////////////////////////

export function runBusLine3(timeInterval, way, timesExec, busLineData){
    
    let i = 0; 
    let j = 0; 
    let featureinterval = setInterval(()=> {
        
        console.log(busLineData[i]); 
        console.log("\n"); 

        if(i===busLineData.length){
        i = 0 
        }
        

        if(j===timesExec){
            clearInterval(featureinterval);
        
        }
        i++;
        j++;
    }, timeInterval); // for how many millisec it rest (milliseconds of delay)

}


//////////////////////////////////////
//\\\\\\\\\\\\\  BUS 1 \\\\\\\\\\\\\//
////////////////////////////////////// 
export function runBusLine1(timeInterval, way, timesExec, busLineData){

    let i = 0; 
    let j = 0; 
    let featureinterval = setInterval(()=> {
        
        console.log(busLineData[i]); 
        console.log("\n"); 

        if(i===busLineData.length){
            i = 0 
        }
        

        if(j===timesExec){
            clearInterval(featureinterval);
        
        }
        i++;
        j++;
    }, timeInterval);// for how many millisec it rest (milliseconds of delay)

}


//////////////////////////////////////
//\\\\\\\\\\\\\  BUS 7 \\\\\\\\\\\\\//
//////////////////////////////////////
export function runBusLine7(timeInterval, way, timesExec, busLineData){

    let i = 0; 
    let j = 0; 
    let featureinterval = setInterval(()=> {
        
        console.log(busLineData[i]); 
        console.log("\n"); 

        if(i===busLineData.length){
        i = 0 
        }
        

        if(j===timesExec){
            clearInterval(featureinterval);
        
        }
        i++;
        j++;
    }, timeInterval);// for how many millisec it rest (milliseconds of delay)
} 

