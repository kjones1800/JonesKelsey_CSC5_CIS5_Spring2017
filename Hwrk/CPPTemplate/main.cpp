/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 17, 2017, 11:16 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int MINUTE=60;      //Number of seconds in a minute
const int HOUR=60*MINUTE; //Number of minutes in a hours
const int DAY=24*HOUR;    //Number of seconds in a day
const int WEEK=7*DAY;     //Number of seconds in a week
const int YEAR=52*WEEK;   //Number of seconds in a year
const int MONTH=YEAR/12;  //Number of seconds in an average month

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nSecs;//NUmber of seconds to convert
    int nYrs,nMths,nWks,nDays,nHrs,nMin;
    //Input or initialize values Here
    cout<<"This program converts to Years/Months/Weeks/Days/Hours"<<endl;
    cout<<"Input the number of seconds for the conversion/equivalence"<<endl;
    cin>>nSecs;
    
    //Process/Calculations Here
    
    //Output Located Here
    nYrs=nSecs/YEAR;
    cout<<nSecs/YEAR<<"Years ";
    nSecs-=nYrs+YEAR;
    nMths=nYrs/12;
    cout<<nMths<<" Months ";
    nWks=nSecs/WEEK;
    cout<<nWks<<" Weeks ";
    nSecs-=nWks*WEEK;
    nDays=nSecs/DAY;
    cout<<nDays<<" Days ";
    nSecs=nDays*DAY;
    nHrs=nSecs/HOUR;
    cout<<nHrs<<" Hours ";
    nSecs-=nHrs*HOUR;
    nMin=nSecs/MINUTE;
    cout<<nMin<<" Minutes ";
    nSecs=nMin*MINUTE;
    cout<<nSecs<<" Seconds "<<endl;
    
    
     

    //Exit
    return 0;
}

