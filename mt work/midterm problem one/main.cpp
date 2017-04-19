/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on April 19, 2017, 12:24 p.m.
 * Purpose:  Input the number than make an X in the following way,
for instance, when you input a 5 you output.
Note:  Instructor will not type in a number <1 or >50

5   1
 4 2
  3
 4 2
5   1

when you input a 7 you output

7     1
 6   2
  5 3
   4
  5 3
 6   2
7     1

if you input an even number

1  4
 23
 23
1  4

Use for-loops, and Flowchart this solution.
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int a;
 
    //Input or initialize values Here
    cout<<"Input a number and the program will create a X.\n";
    cin>>a;
    cout<<endl;
   // Construct a for loop to generate output
    for(int x=1;x<=a;x++){ 
        
       cout<<setw(2)<<(a-x)+1<<endl;//nth-1
       cout<<setw(3)<<x<<endl;//1-nth
       
    }
   
   
   

    //Exit
    return 0;
}

