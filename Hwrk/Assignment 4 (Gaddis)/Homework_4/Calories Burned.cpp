/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 29 2017, 11:11 a.m.
 * Purpose: Programming Challenges  4 - Calories Burned
*/
//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CPM = 3.6f; //Number of calories burn on a treadmill in one minute
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float CPM = 3.6f; //Number of calories burn on a treadmill in one minute
    cout<<"This program will display the number of calories burned on a treadmill"<<endl;
    //Declare all Variables Here
    int tRun= 30; //Keep track of time running
    float cBurn; // Used to find calories burned 
    for ( int r=5; r<=tRun; r+=5) // "r" represents the number of minutes ran
    {
        cBurn= r * CPM;
        cout<< "In "<< r << " minutes you burn  "<< cBurn <<" calories"<<endl;    
    } 
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
  

    //Exit
    return 0;
}

