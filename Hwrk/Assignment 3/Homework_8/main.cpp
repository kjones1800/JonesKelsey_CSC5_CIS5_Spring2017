/* 
 * File:   main.cpp
 * Author: Jones,Kelsey 
 * Created on March 18, 2017, 6:25 p.m.
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib> // For rand and srand
#include <ctime> //For the time fuction
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int MIN_VALUE=1;
const int MAX_VALUE=500;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int num1,num2,answer, A2;
    unsigned seed= time(0);
    //Initialize variables
    srand(seed);
    //Input data
    cout<<"This program is to help young students learn to add"<<endl;
    cout<<"Can you add this?"<<endl;
    num1=(rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;// Equation for int
    num2=(rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;// Equation for int
    cout<<num1<<"+"<<num2<<endl;
    cin>>answer;
    A2=num1+num2;
    //Map inputs to outputs or process the data
    if (answer==A2)
        cout<<"Congratulations!!"<<endl;
    else
        cout<<"Sorry that is incorrect the correct answer is "<<A2<<endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

