/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 28,2017 , 11:11 a.m.
 * Purpose:  Programming Challenges 3 - Ocean Levels
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float ORLEVEL=1.5f;// The Rate at which the ocean rises ever year in millimeters

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    // Describe what the program is about
    cout<<"This program will display the number of millimeters the ocean will rise"
            "each year over the next 25 years"<<endl;
    cout<<"Years                 Millimeters"<<endl;
    cout<<"--------------------------------------"<<endl;
  
        
    int year, mYear=25;
    float tRise;
    
              for ( int year=1; year <= mYear; year++)
                 {
                     cout<<year
                         << "               "<< (year*ORLEVEL)<<endl;
                     
                 }
    
    tRise= mYear * ORLEVEL;
    cout<<"The total number of millimeters the ocean will rise in 25 years: "<< tRise<<endl;
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    
  
    //Exit
    return 0;
}

