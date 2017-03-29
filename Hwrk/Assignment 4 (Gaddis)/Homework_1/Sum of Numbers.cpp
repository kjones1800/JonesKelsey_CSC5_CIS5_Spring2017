/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 27, 2017, 9:53 p.m
 * Purpose:  Programming Challenges 1 Sum of the Numbers
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
   //Ask the user for a positive integer value
        int pNum, tSum;
        cout<<"This program will show the sum of the number entered."<<endl;
        do
        {
            cout<<"Enter a positive integer number."<<endl;
            cin>>pNum;
        }while(pNum<=0);
   //Use a loop to get the sum of all integers
        for ( int i=0; i < pNum; i++)
        {
            tSum += pNum + 1; // Same as tSum = tSum + pNum + 1
            i++;
           
             
        }
   // Output the results
        cout<<"The sum of numbers 1 - "<< pNum << " is "<< tSum <<endl;
    return 0;
}

