/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 18, 2017, 6:25 p.m.
 * Purpose:  Programming Challenges 5 - Body Mass Index
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int wgth,hgth;
    float BMI;
    //Initialize variables
    cout<<"This program will calculate body mass index(BMI)\n";
    cout<<"Please enter you weight in pounds and height in inches\n";
    cin>>wgth>>hgth;
    
    
    //Input data
    
    //Map inputs to outputs or process the data
      BMI=wgth*703/pow(hgth,2.0);
    //Output the transformed data
      if (BMI<=18.5 && BMI<= 25)
          cout<<"Congratulations your BMI is at optimal levels.\n";
      else if (BMI<18.5)
          cout<<"According to your BMI you are underweight.\n";
      else if (BMI>25)
          cout<<"According to your BMI you are overweight.\n";
    //Exit stage right!
    return 0;
}

