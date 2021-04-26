import React, { useContext } from 'react'
import { UserContext } from '../lib/authContext'; 
import { auth, googleAuthProvider, firestore } from '../lib/firebase'

import AccountStyles from '../styles/Account.module.scss'

export default function account() {

    const { user } = useContext(UserContext);
    // const user = true;

    return (
        <div className='main'>
            { user ? <h1>Account</h1> : <h1>Login</h1> }
            { user ? <AccountInfo 
                        img={user.providerData[0].photoURL} 
                        displayName={user.providerData[0].displayName}
                        email={user.providerData[0].email}
                    /> 
            : <SignInForm /> }
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

function AccountInfo({ img, displayName, email }) {

    const fullname = displayName.split(' ')

    return(
        <div> 
            <div className={AccountStyles.profile_head}>
                <div className={AccountStyles.profileImage} >
                    <img src={img} className={AccountStyles.profile} /> 
                </div>  
                <div className={AccountStyles.fullname}> 
                    <span>{ fullname[0] }</span>
                    <span>{ fullname[1] }</span>
                </div> 
            </div> 
            <div className={AccountStyles.profile_info}> 
            { email } 
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
