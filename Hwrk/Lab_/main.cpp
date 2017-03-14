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
    bool X,Y;
    
    //Input or initialize values Here
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl; 
    //Process/Calculations Here
     X=true;Y=false;
     cout<<(X?'T':'F')<<" ";
     cout<<(Y?'T':'F')<<" " ;
     cout<<(!X?'T':'F')<<" ";
     cout<<(!Y?'T':'F')<<" ";
     cout<<(X||Y?'T':'F')<<" ";
     cout<<(X&&Y?'T':'F')<<" ";
     cout<<(X^Y^Y?'T':'F')<<" ";
     cout<<(X^Y^X?'T':'F')<<" ";
     
 // Row 2
     cout<<(X?'T':'F')<<" ";
     cout<<(Y?'T':'F')<<" ";
     
    //Output Located Here
    

    //Exit
    return 0;
}

