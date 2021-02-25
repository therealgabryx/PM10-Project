import React, { useContext } from 'react'
import { UserContext } from '../lib/authContext'; 
import { auth, googleAuthProvider, firestore } from '../lib/firebase'

import AccountStyles from '../styles/Account.module.css'

export default function account() {

    // const { user } = useContext(UserContext);
    const user = true;

    return (
        <div className='main'>
            { user ? <h1>Account</h1> : <h1>Login</h1> }
            { user ? <AccountInfo /> : <SignInForm />}
        </div>
    )
}

function SignInForm() {
    return(
        <div> 
            <SignInButton />
        </div>
    )
}

function AccountInfo() {
    return(
        <div> 
            <div className={AccountStyles.profileImage}></div> 
            <div>
                <p>Welcome back, <b>Gabryx</b>!</p> 
            </div>
            <SignOutButton />
        </div>
    )
}


// Sign in with Google Button 
function SignInButton() {
    const signInWithGoogle = async () => {
        await auth.signInWithPopup(googleAuthProvider);
    }

    return (
        <button className="btn-google flex-x" onClick={signInWithGoogle}>
            <img src={'/google.png'} alt="Sign in with Google" />
        Sign in with Google
        </button>
    )
}

// Sign out Button 
function SignOutButton() {
    return (
        <button onClick={() => auth.signOut()}>
            SignOut
        </button> 
    )
}
