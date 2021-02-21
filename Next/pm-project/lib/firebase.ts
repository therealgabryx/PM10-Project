import firebase from 'firebase/app' 
import 'firebase/auth'
import 'firebase/firestore'
import 'firebase/storage' 

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

if (!firebase.apps.length) {
    firebase.initializeApp(firebaseConfig) 
}

export const auth = firebase.auth() 
export const googleAuthProvider = new firebase.auth.GoogleAuthProvider()

export const firestore = firebase.firestore() 
export const storage = firebase.storage()  