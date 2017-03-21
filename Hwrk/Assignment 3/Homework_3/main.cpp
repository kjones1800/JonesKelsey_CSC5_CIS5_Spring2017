/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 14, 2017, 11:32 AM
 * Purpose: Programming challenges 3- Magic dates
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
    int mth,day,yr;
    float mdy, cdy,yr2;
    //Initialize variables
    cout<<"This program will determine if the day you entered is magic!!"<<endl;
    cout<<"Please enter the Month."<<endl;
    cin>>mth;
    cout<<"Please enter the Day."<<endl;
    cin>>day;
    cout<<"Please enter the Year.(For 1980 you would just enter 80)"<<endl;
    cin>>yr;
    //Input data
    cdy=mth*day; // Cacaulate if its a magic
    yr2=yr*1;
  //Determine if or else
    if (yr2==cdy)
        cout<<"You have found a magic date.\n";
    else 
        cout<<"You have not found a magic date.\n";
    
    
        
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

