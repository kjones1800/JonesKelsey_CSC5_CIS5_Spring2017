/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 17, 2017, 9:53 p.m.
 * Purpose:  Programming Challenges 2 Characters fir the ASCII Codes
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstring>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
  // Using a string to get a number
    char aCh=0;
        cout<<"This program uses a loop to display "
            "the ASCII code up to 16 characters"<<endl;
        cout<<"Enter a character."<<endl;
        cin>>aCh;
        for (int i=0; i <= 127; i++)
        {
            if (i % 16 ==0)
                    cout<<endl;
                    
                    cout<<aCh<< " ";
                    aCh++;  
        }
        
                
                
    
    
    return 0;
}

