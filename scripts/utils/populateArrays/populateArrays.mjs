function populateArrays() { 
    let arrObj3 = []; //busLine3
    let arrObj1 = []; //busLine1
    let arrObj7 = []; //busLine7

    ///////////////////////////////BUS LINE 3///////////////////////////////

    let latArr3 = [11.134270, 11.136398, 11.133963, 11.133766, 11.132461, 11.129163, 11.127686, 11.121607, 11.119453, 11.112632, 11.118756, 11.119774, 11.120580, 11.120878, 11.121672, 11.119911, 11.119760, 11.121322, 11.127914, 11.126340, 11.123158, 11.122489, 11.120796, 11.119536, 11.119222, 11.134195, 11.137778, 11.141228, 11.140885]; //busLine 3
    let lonArr3 = [46.123271, 46.129754, 46.131871, 46.133122, 46.133539, 46.128577, 46.130437, 46.130782, 46.128317, 46.124509, 46.100263, 46.097203, 46.094632, 46.090011, 46.084491, 46.083702, 46.071809, 46.071681, 46.069748, 46.066923, 46.065253, 46.064812, 46.064602, 46.063761, 46.058376, 46.037895, 46.039720, 46.040069,  46.041076]; // busLine3
    let stopArr3 =["Cortesano", "Vigo Meano Gorghe", "Vigo Meano Piazza Stainer",  "Vigo Meano Don Perugini", "Vigo Meano Rio Papa", "Gazzadina Al Molar", "Gazzadina Strada Vecchia", "Sp 76", "Meano", "Sp 76 Dos di Lamar", "Melta Centro", "Parco Melta", "Centochiavi Dalla Fior", "Solteri Largaiolli", "Marconi Solteri", "Brennero Marconi", "Piazza Dante Stazione Fs", "Piazza Dante Pal. Regione", "Trento Port'aquila", "Via S. Francesco/ Porta Nuova", "Piazza di Fiera", "Travai Piazza Fiera", "Travai Al Nuoto / Muse",  "Rosmini Cimitero", "Bezzi Filzi", "Menguzzato Al Casteller", "Conci Ferrovia", "Conci De Riccabona", "Conci Villazzano 3" ];//busLine3


    ///////////////////////////////BUS LINE 1///////////////////////////////
    let latArr1 = [11.098129, 11.069222, 11.057041, 11.062334]; //busLine 1
    let lonArr1 = [46.080432, 46.085404, 46.069170, 46.068335]; // busLine1
    let stopArr1 =["Montevideo", "Bivio Sopramonte", "Sopramonte Bunaga", "Maso Banal"];//busLine1


    ///////////////////////////////BUS LINE 7///////////////////////////////
    let latArr7 = [11.121727, 11.119925, 11.124100, 11.126310, 11.128477, 11.128065, 11.124100, 11.131430, 11.133001, 11.132368]; //busLine7
    let lonArr7 = [46.086217, 46.083754, 46.075843, 46.066866, 46.065650, 46.062382, 46.075843, 46.059896, 46.059896, 46.057511]; // busLine7
    let stopArr7 =["Solteri", "Brennero Marconi", "Centa Brennero", "San Francesco Porta Nuova", "Via Brigata Acqui", "Villa Igea", "Centa Brennero", "Adamello Gorizia", "Gerola Ospedale Santa Chiara", "Ospedale Santa Chiara"];//busLine7

    //START BUSLINE3 MANIPULATION//
    for(let i=0; i<latArr3.length; i++){

        let tempObj =  {

            type: "Feature",
            properties: {
                id: "00461",
                pm10level: 0, //0 to 5
                time: "00012",
                busStop: "placeholder",
                busLine: 3
            },
            geometry: {
                type: "Point",
                coordinates: [
                    11.134270,
                    46.123271
                ]
            }
        
        }
        
    //assign values to a temp array 
        tempObj.coordinates = [lonArr3[i], latArr3[i]];
        tempObj.properties.busStop = stopArr3[i];
        tempObj.properties.time = new Date(); 
        tempObj.pm10level = Math.random() * (5 - 2.5) + 2.5; // RND 2.5-5 PM10 

        //assign the obj to an array position 
        arrObj3[i] = tempObj; 
    } 
    //END BUSLINE3 MANIPULATION// 

    //START BUSLINE1 MANIPULATION// 
    for(let i=0; i<latArr1.length; i++){

        let tempObj =  {

            type: "Feature",
            properties: {
                id: "00461",
                pm10level: 0, //0 to 5
                time: "00012",
                busStop: "placeholder",
                busLine: 1
            },
            geometry: {
                type: "Point",
                coordinates: [
                    11.134270,
                    46.123271
                ]
            }
        
        }
        
    //assign values to a temp array 
        tempObj.coordinates = [lonArr1[i], latArr1[i]];
        tempObj.properties.busStop = stopArr1[i];
        tempObj.properties.time = new Date(); 
        tempObj.pm10level = Math.random() * (5 - 2.5) + 2.5; // RND 2.5-5 PM10 

        //assign the obj to an array position 
        arrObj1[i] = tempObj; 
    } 
    //END BUSLINE1 MANIPULATION//

    //START BUSLINE7 MANIPULATION//
    for(let i=0; i<latArr7.length; i++){

        let tempObj =  {

            type: "Feature",
            properties: {
                id: "00461",
                pm10level: 0, //0 to 5
                time: "00012",
                busStop: "placeholder",
                busLine: 7
            },
            geometry: {
                type: "Point",
                coordinates: [
                    11.134270,
                    46.123271
                ]
            }
        
        }
        
    //assign values to a temp array 
        tempObj.coordinates = [lonArr7[i], latArr7[i]];
        tempObj.properties.busStop = stopArr7[i];
        tempObj.properties.time = new Date(); 
        tempObj.pm10level = Math.random() * (5 - 2.5) + 2.5; // RND 2.5-5 PM10 

        //assign the obj to an array position 
        arrObj7[i] = tempObj; 
    } 
    //END BUSLINE7 MANIPULATION//

    console.log('Populated Arrays') 

    return { busLine1: arrObj1, busLine3: arrObj3, busLine7: arrObj7  }
} 

export default populateArrays; 