/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 14, 2017, 11:32 AM
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
    bool x,y;
            
    //Initialize variables
     cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    //Determine the first row.
     x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"       ";
    cout<<(x^y^y?'T':'F')<<"       ";
    cout<<(x^y^x?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"          ";
    cout<<(!(x&&y)?'T':'F')<<"          ";
    cout<<(!x||!y?'T':'F')<<"             ";
    cout<<endl;
    
    // Determine the second row
     x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"       ";
    cout<<(x^y^y?'T':'F')<<"       ";
    cout<<(x^y^x?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"          ";
    cout<<(!(x&&y)?'T':'F')<<"          ";
    cout<<(!x||!y?'T':'F')<<"             ";
    cout<<endl;
    //Determine the third row
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"       ";
    cout<<(x^y^y?'T':'F')<<"       ";
    cout<<(x^y^x?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"          ";
    cout<<(!(x&&y)?'T':'F')<<"          ";
    cout<<(!x||!y?'T':'F')<<"             ";
    cout<<endl;
    
    //Determine the fourth row
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"       ";
    cout<<(x^y^y?'T':'F')<<"       ";
    cout<<(x^y^x?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"          ";
    cout<<(!(x&&y)?'T':'F')<<"          ";
    cout<<(!x||!y?'T':'F')<<"             ";
    cout<<endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

