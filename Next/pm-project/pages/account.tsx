import React, { useContext } from 'react'
import { UserContext } from '../lib/authContext'; 
import { auth, googleAuthProvider, firestore } from '../lib/firebase'

export default function account() {

    const { user } = useContext(UserContext);

    return (
        <div className='main'>
            { user ? <h1>Account</h1> : <h1>Login</h1> }
            { user ? <SignOutButton /> : <SignInButton />}
        </div>
    )
}

function SignInForm() {

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
