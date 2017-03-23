/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 23, 2017, 12:08 p.m.
 * Purpose:  Menu to utilized 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Show menu and loop
    do {
        //Display Menu
        cout<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for the sum 1 to n problem"<<endl;
        cout<<"Type 2 for sum 0.1 error Problem"<<endl;
        cout<<"Type 3 for Problem 3"<<endl;
        cout<<"Type 4 for Problem 4"<<endl;
        cout<<"Type 5 for Problem 5"<<endl;
        cout<<"Type 6 for Problem 6"<<endl;
        cout<<"Type 7 for Problem 7"<<endl;
        cout<<"Type 8 for Problem 8"<<endl;
        cout<<"Type 9 for Problem 9"<<endl;
         //input the choice
        cin>>choice;
        
    
    //Place the solutions to the problems in the switch statement
    switch (choice){
        case '1':{
            break;
              }
        
        case '2':{
            break;
                }
        
        case '3':{
            break;
              }
        
        case '4':{
            break;
             }
        
        case '5':{
           break;
             }
        
        case '6':{
            break;
             }
        case '7':{
            break;
             }
        
        case '8':{
            break;
             }
        
        case '9':{
            break;
          }
        default:  {
            cout<<"Exit Program"<<endl;
       
        }
                 
          }
    }while(choice>='1' && choice<='9');
    
    
   
    
    //Exit
    return 0;
}

