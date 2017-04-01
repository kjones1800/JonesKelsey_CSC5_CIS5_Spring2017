/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 29, 2017, 11:11 a.m.
 * Purpose:  Programming Challenges 7 - Pennies for Pay
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
 float PENNY= 0.01f; // The amount of a penny

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Describe what the program is doing
    cout<<"This program will covert a penny salary into a dollars.\n";
    
    //Get the inputs
    float nDayswk;
    float PENNY=0.01f; //THe amount of a penny
        cout<<"Please enter the number of days worked.\n";
        cin>>nDayswk;
    while ( nDayswk < 1)
     {
        cout<<"The number of days worked must be at least 1. "
                "Please enter the number of days worked again\n ";
        cin>> nDayswk;
     }
   //The loop
      cout<<"Salary for the Period\tTotal Earnings for that day\n";
      cout<<"---------------------------------\n";
      float tPay = 0.0f, dPay = 0.0f;
      
      for ( int p=1; p<=nDayswk;p++)
      {
          PENNY *= 2;
          dPay = PENNY / 100;
          tPay += dPay;
          cout<<"Day " << p <<"\t\t"<< dPay <<endl; 
          
      }
            
     cout<<"Total earnings for the period $" << tPay <<endl;
 
            
    //Initialize variables
   
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

