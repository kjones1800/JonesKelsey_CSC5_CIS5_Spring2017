/* 
 * File:   main.cpp
 * Author:Jones Kelsey
 * Created on March 18, 2017, 6:25 p.m.
 * Purpose:  Programming Challenges 4 - Area of Rectangles
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
    int Lth1,Wth1,Lth2,Wth2;// Definining variables
    float A1, A2;
    
    
    //Initialize variables
    cout<<"This program will determine which of the two rectangles has a bigger area\n";
    cout<<"Enter the length and width of the first rectangle."<<endl;
    cin>>Lth1>>Wth1;
    cout<<"Enter the length and width of the second rectangle."<<endl;
    cin>>Lth2>>Wth2;
    //Input data
    A1= Lth1*Wth1;
    A2= Lth2*Wth2;
    
    //Map inputs to outputs or process the data
    if (A1>A2)
        cout<<"The first rectangle has the bigger area.\n";
    else if (A1<A2)
        cout<<"The second rectangle has the bigger area.\n";
    else if (A1==A2)
        cout<<"Both rectangles have the same area.\n";
                
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

