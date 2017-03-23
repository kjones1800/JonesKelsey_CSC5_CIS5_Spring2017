/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Sum 1 to N
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
    int n=50000,sum=0;
    
    //Input or initialize values Here
    for (int i=1;i<=n;i++) 
    {
        sum+=i;
    }
    //Process/Calculations Here
    cout<<"The sum of 1 to "<<n<<" = "<<sum<<endl;
    cout<<" and "<<n<<"*("<<n<<"+1)/2="<<n*(n+1)/2<<endl;
    //Output Located Here
   

    //Exit
    return 0;
}

