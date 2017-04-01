/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 28, 2017, 11:11 a.m.
 * Purpose:  Programming Challenges 6 - Distance Traveled
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //What the program is about
        cout<<"This program will display the distance traveled by a vehicle.\n ";
    // The input data
        float tSpeed, tMiles;
        float time;
        cout<<"How fast did the vehicle travel?\n";
        cin>>tSpeed;
        while ( tSpeed <= 0)
        {
            cout<<"Speed must be more that zero. Please enter the speed again\n";
            cin>>tSpeed;
        }
        cout<<"How much time did it take (in hours)?\n";
        cin>>time;
        while ( time < 1)
        {
            cout<< "Time must be greater than zero. Please enter the amount of time again"<<endl;
            cin>>time;
        }
    //The loop
        
        cout<<"Hour\tDistanced Traveled( in miles per hour) \n";
        cout<<"--------------------------------------------------\n";
        for (int m=1; m<=time; m++)
        {
            tMiles = tSpeed * m;
            cout<< m <<"\t\t"<<(tSpeed * m )<< endl;
        }
      
 
            
 
    //Exit stage right!
    return 0;
}

