/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:Brute force sum compare to multiplication.
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
    int nLoop=10000000;
    float sum=0.0f,frac=0.1f;
    
    //Input or initialize values Here
    for (int i=1;i<=nLoop;i++) 
    {
        sum+=frac;
    }
    //Process/Calculations Here
    cout<<"The sum of "
            <<frac<<" -> "<<nLoop<<" times = "<<sum<<endl;
    cout<<"Simple multiplication of "
            <<frac<<" x "<<nLoop<<" = "<<frac*nLoop<<endl;
    cout<<"Error = "<<(frac*nLoop-sum)/(frac*nLoop)*100
            <<"%"<<endl;
    //Output Located Here
   

    //Exit
    return 0;
}

