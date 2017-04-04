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
    for (int k=1;k<=6;k++)
    {
        int fact=1;
        int n;
        cin>>n;
        for (int i=1;i<=n;i++) {
            fact*=i;
        }
        cout<<n<<<<fact<<endl;
        
    }
    //Exit
    return 0;
}

