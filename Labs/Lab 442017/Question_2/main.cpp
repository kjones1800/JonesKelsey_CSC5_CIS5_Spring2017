/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x;
    for (int k=1;k<=14;k++)
    {
       
        cout<<"Type in N/n";
        cin>>x;
        float nAnsw=1;
        for (int n=1;n<=13;n++){
            int fact=1;
        }
        for (int i=1;i<=n;i++) {
            fact*=i;
          
        }
        nAnsw+=pow(x,n)/fact;
    }
        cout<<"e^"<<x<<" = "<<nAnsw<<endl;
        
    
    //Exit
    return 0;
}

