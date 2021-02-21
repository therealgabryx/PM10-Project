import { auth, firestore } from '../lib/firebase';
import { useEffect, useState } from 'react';
import { useAuthState } from 'react-firebase-hooks/auth';
import { useRouter } from 'next/router'

// Custom hook to read auth record and user profile doc
export function useUserData() {
  const [user] = useAuthState(auth);
  // const [username, setUsername] = useState(null);

  useEffect(() => {
    // turn off realtime subscription
    let unsubscribe;

    if (user) {
      const ref = firestore.collection('users').doc(user.uid);
      unsubscribe = ref.onSnapshot((doc) => {
        // setUsername(doc.data()?.username);
      });
    } else {
      // setUsername(null);
    } 

    return unsubscribe;
  }, [user]); 

  return { user };
  // return { user, username };
}


// Custom hook to read/use global context 
export function useGlobalContext() {
  const router = useRouter()
  const query = router.pathname
  let initState = undefined

  switch (query) {
    case '/':
      initState = 'maps';
      break;
    case '/account':
      initState = 'account';
      break;
    case '/charts':
      initState = 'charts';
      break;
    default:
      initState = null
      break;
  }

  let [navState, setNavstate] = useState(initState)

  let globalContext = {
    navState,
    setNavstate
  }
  
  return globalContext
}

