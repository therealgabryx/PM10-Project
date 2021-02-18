// Firebase App (the core Firebase SDK) is always required and must be listed first
import firebase from "firebase/app/dist/index.cjs.js";

// Add the Firebase products that you want to use
import "firebase/auth/dist/index.cjs.js";
import "firebase/firestore/dist/index.cjs.js";

// For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
    apiKey: "AIzaSyBWxRBtHjBlT_1V6uRNVzeMSz5Fy850N38",
    authDomain: "pm-10-project.firebaseapp.com",
    projectId: "pm-10-project",
    storageBucket: "pm-10-project.appspot.com",
    messagingSenderId: "768323285715",
    appId: "1:768323285715:web:50412588dd992f6f8e9a26",
    measurementId: "G-ZQNGQSM8GB"
};

// Initialize Firebase
firebase.initializeApp(firebaseConfig);
const db = firebase.firestore(); 


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
//\\\\\\\\\\\\\  BUS 3 \\\\\\\\\\\\\//
//////////////////////////////////////

export function runBusLine3(timeInterval, way, timesExec, busLineData){ 
    
    let i = 0; 
    let j = 0; 
    let featureinterval = setInterval(()=> { 
        
        console.log(busLineData[i]); 
        console.log("\n"); 

        db.collection('sampledata').add(busLineData[i]); 

        if(i === busLineData.length){ 
        i = 0 
        } 
    
        if(j === timesExec){ 
            clearInterval(featureinterval);
        
        } 

        i++;
        j++;
    }, timeInterval); // for how many millisec it rest (milliseconds of delay)

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

