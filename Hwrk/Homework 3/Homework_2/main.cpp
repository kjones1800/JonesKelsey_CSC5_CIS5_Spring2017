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
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int num;
    char rom;
    //Initialize variables
    cout<<"This program will convert numbers to the Roman Numeral version!"<<endl;
    cout<<"Enter an integer 1 through 10 to get the Roman numeral version of that number. "<<endl;
    cin>>num; 
    if (!(num>=1&&num<=10)) // Used to get and integer
    {
        cout<<"You failed to enter a integer 1 through 10 "<<endl;
        return 1;
    }
    
            
    //Input caculated and printed
    switch (num) 
    {
        case 10: cout<<"The Roman numeral for "<<num<< " is X";break;
        case 9: cout<<"The Roman numeral for "<<num<< " is IX";break;
        case 8: cout<<"The Roman numeral for "<<num<< " is VIII";break;
        case 7: cout<<"The Roman numeral for "<<num<< " is VII";break;
        case 6: cout<<"The Roman numeral for "<<num<< " is VI";break;
        case 5:cout<<"The Roman numeral for "<<num<< " is V";break; 
        case 4:cout<<"The Roman numeral for "<<num<< " is IV";break;
        case 3:cout<<"The Roman numeral for "<<num<< " is III";break;
        case 2:cout<<"The Roman numeral for "<<num<< " is II";break;
        default :cout<<"The Roman numeral for "<<num<< " is I";break;
    }
     
       
    
            
    
       
    //Map inputs to outputs or process the data
    
    //Output the transformed data
   
    //Exit stage right!
    return 0;
}


