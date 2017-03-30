/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 30, 2017, 11:27 a.m.
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cstdlib> // set the random number
#include <ctime> //Set the random number seed
#include <iomanip> // formating
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand (static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int op1, op2, result, answer;
    char choice;
    
    
    
    
    //Input or initialize values Here
    do{
        cout<<"Math Tutor"<<endl;
        cout<<"Choose the operation * / + -"<<endl;
        cin>>choice;
        cout<<endl<<endl;
        if ( ! (choice=='+' || choice== '-' || choice== '*' || choice== '/'));
        cout<<"Exit Math Tutor"<<endl;
        

        //Process/Calculations Here
        switch (choice){
            case '+':{
                op1=rand()%900+100; //[100-999]
                op2=rand()%900+100; //{100-999]
                answer=op1+op2; // [3 to 4 digit result]
                break;
            }
            case '-':{
                op1=rand()%900+100; //[100-999]
                op2=rand()%900+100; //{100-999]
                answer=op1-op2; // [3 to 4 digit result]
                break;
            }
            case '*':{
                op1=rand()%900+10; //[10-99]
                op2=rand()%90+10; //{10-99]
                answer=op1+op2; // [2 to 4 digit result]
                break;
            }
            case '/':{
                op1=rand()%90+10; //[10-99]
                op2=rand()%90+10; //{10-99]
                op1=answer*op2; // [2 to 3 digit result]
               break;
            }
            default: {

                cout<<"Bad operator"<<endl;
                return 1;
            }
        }

        //Output Located Here
        cout<<setw(8)<<op1<<endl;
        cout<<choice<<setw(7)<<op2<<endl;
        cout<<"_________\n";
        cin>>result;

        // Compare the Answer
        cout<<endl;
        cout<<((result==answer)?"Correct":"Incorrect")<<endl;
        cout<<"The correct answer = "<<answer<<endl;       
    }while ( choice=='+' || choice== '-' || choice== '*' || choice== '/');

    //Exit
    return 0;
}

