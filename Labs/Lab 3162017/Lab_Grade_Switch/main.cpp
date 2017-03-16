/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
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
    unsigned short score; //Integer scores valid from 0 to 100
    char grade;
    
    //Input or initialize values Here
    cout<< " This program produces a grade form a score input "<<endl;
    cout<<"The data type used is an interger [0 - 100]"<<endl;
    cout<<"Type the score"<<endl;
    cin>>score;
    
    if (!(score>=0&&score<=100)) {
        cout<<"You failed to type in an integer between 0 to 100"<<endl;
        
     return 1; } // Use DeMorgan's Law to make clear
    //Process/Calculations Here
    switch(score/10){
        case 10:
        case 9: grade='A';break;
        case 8: grade='B';break;
        case 7: grade='C';break;
        case 6: grade='D';break;
        default: grade='F';
                
    }
        
    cout<<"For score " <<score<<" your grade is "<<grade<<endl;

    //Exit
    return 0;
}

