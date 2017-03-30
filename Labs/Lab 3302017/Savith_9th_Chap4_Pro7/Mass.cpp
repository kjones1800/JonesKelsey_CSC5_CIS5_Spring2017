/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 30, 2017  12:20 AM
 * Purpose:  Calculate your weight
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float MSSERTH=5.972e27f; // Mass of Earth in grams
const float GCONST= 6.673E-8f; // Gravitational Constant cm^3/gm sec^2
const float CNVFTCM= 1.0f/30.48f; // Conversion form FT to CM
const float CNVMFT= 5280.0f; // Conversion form miles to feet
const float RADERTH= 3959; // Radius of the Earth in miles
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float myMass = 4; // Units of slugs
    float myWeight; // Result in lbs 
    //Input or initialize values Here
    myWeight=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass
            /(RADERTH*RADERTH*CNVMFT*CNVMFT);
    //Process/Calculations Here
    cout<<"You weigh "<<myWeight<<" in lbs."<<endl;
    //Output Located Here
    

    //Exit
    return 0;
}

