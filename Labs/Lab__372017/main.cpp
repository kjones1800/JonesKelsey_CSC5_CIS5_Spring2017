/* 
 * File:   Lab
 * Author: Jones, Kelsey
 * Created on March 7, 201, 12.00 AM
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
    //Declare and initializes Variables Here
    char sex; // M or F
    unsigned short ht,wt,age;// height(in), weight(lbs), age(yrs)
    unsigned char cdyCals=230;//Candy bar calories
    float bmr;//Basic Metabolic Rate (calories)
    int ncdyBrs;
    
    //Input or initialize values Here
    cout<<"This program calculates the number of";
    cout<<"candy bars allowed per day based upon your BMR"<<endl;
    cout<<"Type in your Sex (M/F), Wt(lbs), Age(yrs)"<<endl;
    cin>>sex>>ht>>wt>>age;
    
    //Process/Calculations Here
    bmr= (sex=='M')?
          66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
         655 + 4.3f*wt + 4.7f*ht - 4.7f*age;
    ncdyBrs=static_cast <int> (bmr/cdyCals);        
    //Output Located Here
    cout<<"The number of candy bars you can eat = "<<ncdyBrs<<endl;

    //Exit
    return 0;
}

