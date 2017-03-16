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
    float paycheck;
    int hrswrk;
     float  PAYRATE = 10.0; // Payrate in dollars
    //Input or initialize values Here
    cout<<"This program will determine your payrate for the month"<<endl;
    cout<<"Please Input your hours work"<<endl;
    cin>>hrswrk;
    if (hrswrk>40) paycheck= 2 * PAYRATE * hrswrk + (PAYRATE*( hrswrk-40));
    else if (hrswrk<=40) paycheck= PAYRATE*hrswrk;
    
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Your paycheck this month is "<<paycheck<<endl;

    //Exit
    return 0;
}

