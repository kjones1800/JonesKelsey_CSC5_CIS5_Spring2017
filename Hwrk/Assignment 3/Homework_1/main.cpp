/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 18, 2017, 6:25 p.m.
 * Purpose: Programming Challenges 1
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int num1, num2 , fnum; // Variable definition
    
    //Initialize variables
    cout<<"Enter two numbers to find which one is smaller."<<endl;
    cout<<"Enter the first number ";
    cin>>num1;
    cout<<"Enter the second number ";
    cin>>num2;
            
    
        
    //Input data
     
    //Map inputs to outputs or process the data
    
    fnum=( num1>num2) ? (num1) : (num2);
    //Output the transformed data
    cout<<"The bigger number is "<<fnum<<endl;
    //Exit stage right!
    return 0;
}


