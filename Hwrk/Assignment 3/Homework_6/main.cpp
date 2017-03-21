/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on MArch 18 2017, 6:25 a.m.
 * Purpose: Programming Challenges 6 - Mass and weight
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
    int mass;
    float nTons;
    //Initialize variables
    cout<<"This program with calculate the weight of an object in newtons."<<endl;
    cout<<"Enter the mass of the object.\n";
    cin>>mass;
    
    //Input data
    nTons=mass*9.8;
    
    //Map inputs to outputs or process the data
    if (nTons>1000)
        cout<<"The object is too heavy."<<endl;
    else if (nTons<10)
        cout<<"The object is too light."<<endl;
    else
        cout<<"The object's weight is fine."<<endl;
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

