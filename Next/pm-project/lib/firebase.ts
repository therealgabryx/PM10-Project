import firebase from 'firebase/app' 
import 'firebase/auth'
import 'firebase/firestore'
import 'firebase/storage' 

// For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
  apiKey: "AIzaSyBuI-xSC14GRFU9CTqTYkbBS1PxXkyaWf4",
  authDomain: "lghx-pm10-project.firebaseapp.com",
  projectId: "lghx-pm10-project",
  storageBucket: "lghx-pm10-project.appspot.com",
  messagingSenderId: "60742978308",
  appId: "1:60742978308:web:c2ca70c27d79078ebade51"
};

if (!firebase.apps.length) {
    firebase.initializeApp(firebaseConfig) 
}

export const auth = firebase.auth() 
export const googleAuthProvider = new firebase.auth.GoogleAuthProvider()

export const firestore = firebase.firestore() 
export const storage = firebase.storage()  