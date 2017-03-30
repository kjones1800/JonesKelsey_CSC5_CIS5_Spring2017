/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 29, 2017, 11:11 a.am
 * Purpose:  Programming Challenges 5- Membership Fees Increase
 */


//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float INCREASE = 0.04f; // The increase in membership.
const int YEARS = 6; // Number of Years the membership will increase for.
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    // The loop for the next 6 years
    cout<<"This program will calculate the membership increase of 4%"
            " over 6 years.\n";
    float nMemb= 2500;
    for ( int m=1; m <= YEARS; m++)
    {
        nMemb = nMemb + (nMemb * INCREASE);
        // Output data
        cout<<"The year membership cost after year " << m << " is $  "<< nMemb <<endl;
    }
 
            
   
    //Exit stage right!
    return 0;
}

