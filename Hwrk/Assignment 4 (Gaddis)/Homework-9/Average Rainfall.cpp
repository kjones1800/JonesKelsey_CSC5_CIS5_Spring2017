/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 30, 2017, 11:32 AM
 * Purpose:  Use a nested loop to collect data and calculate the average
 *            rainfall over a period of years
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip> //Use for Formatting
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int numYrs, numMths;
    float amtInc; // Number of inches rainfall increase.
    float tavgRain=0; // Accumulate the total increase in rainfall.
    float avgPmth=0;
            
            
    //Gather input data
            cout<<"This program will collect and calculate the average"
                    "rainfall over a number of years\n";
            cout<<"Enter the number of years.\n";
            cin>>numYrs;
            cout<<endl;
            while (numYrs<=0)
            {
                cout<<"You may not enter less than 1 year. Try again\n";
                cout<<"Enter the number of years.\n";
                cin>>numYrs;
                cout<<endl;
                
            }
    //The first loop is used to iterate each month
            numMths= numYrs * 12;
            for (int i=1; i<=numYrs;i++)
            {
   //The second loop will iterate 12 times(one for each month) 
    //ask for rainfall in inches
             for (int m=1; m<=numMths; m++)
             {
                 float avgRain;
                 cout<<"Enter the inches of rainfall for month " << m <<".\n";
                 cin>>amtInc;
                 while (amtInc<0)
                 {
                     cout<<"You must enter a positive number.\n\n";
                     cout<<"Enter the inches of rainfall for month " << m <<".\n";
                     cin>>amtInc;
                     cout<<endl<<endl;
                 }
                 tavgRain += amtInc;
                 
             }
             cout<<fixed<<showpoint<<setprecision(2);
             avgPmth= tavgRain / numMths;
             cout<<"The total number months: " << numMths <<endl;
             cout<<"The total inches of rainfall: " << tavgRain <<"inches"<<endl;
             cout<<"The average rainfall per month:  " << avgPmth << "inches"<<endl;
            }
    
    
    //Display the number of months, total inches of rainfall, and average rainfall
    //per month for the entire period
    
    //Exit stage right!
    return 0;
}

