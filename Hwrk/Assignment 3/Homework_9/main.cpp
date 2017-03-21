/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 18, 2017, 6:25 p.m.
 * Purpose:  Change for a Dollar Game
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PENNY=.01; //Amount of a penny
const float NICKEL=.05; //Amount of a nickel
const float DIME=.1; //Amount of a dime
const float QUARTER=.25; //Amount of a quarter
const float DOLLAR=1.0; //Amount of a dollar
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Pen,Nic,Dime,Quar;
    float tMon;
    
    //Initialize variables
    
    //Input data
    
 
    //Map inputs to outputs or process the data
cout<<"This program will count change and see if it adds to a dollar."<<endl;
cout<<"Please enter the amount of pennies you have."<<endl;
cin>>Pen;
cout<<"Please enter the amount of nickels you have."<<endl;
cin>>Nic;
cout<<"Please enter the amount of dimes you have."<<endl;
cin>>Dime;
cout<<"Please enter the amount of quarters you have."<<endl;
cin>>Quar;
tMon= (Pen*PENNY)+ (Nic*NICKEL) + (Dime*DIME) + (Quar*QUARTER);


    //Output the transformed data
if (tMon==DOLLAR) 
    cout<<"Congratulations you have a dollar!"<<endl;

else if (tMon>DOLLAR)

    cout<<"You have more than a dollar."<<endl;

else  
    cout<<"You have less than a dollar"<<endl;

    //Exit stage right!
    return 0;
}

