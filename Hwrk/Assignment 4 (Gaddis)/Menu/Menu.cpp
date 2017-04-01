/* 
 * File:   main.cpp
 * Author: Jones, Kelsey
 * Created on March 1, 2017, 12:45 p.m.
 * Purpose:  Create a menu
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib> // set the random number
#include <ctime> //Set the random number seed
#include <iomanip> // formating
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
            
    //Show a menu utilizing a loop.
   do{
        //Display Menu
        cout<<endl<<endl<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for Problem 1."<<endl;
        cout<<"Type 2 for Problem 2"<<endl;
        cout<<"Type 3 for Problem 3"<<endl;
        cout<<"Type 4 for Problem 4"<<endl;
        cout<<"Type 5 for Problem 5"<<endl;
        cout<<"Type 6 for Problem 6"<<endl;
        cout<<"Type 7 for Problem 7"<<endl;
        cout<<"Type 8 for Problem 8"<<endl;
        cout<<"Type 9 for Problem 9"<<endl<<endl;
        
        // Ask which Problem the user want to view.
        cout<<"Choose a problem to view."<<endl;
        cin>>choice;
        
        //Use a switch to change between problems.
        switch (choice)
        {
            case '1': 
            {
                 //Ask the user for a positive integer value
        int pNum, tSum;
        cout<<"This program will show the sum of the number entered."<<endl;
        do
        {
            cout<<"Enter a positive integer number."<<endl;
            cin>>pNum;
        }while(pNum<=0);
   //Use a loop to get the sum of all integers
        for ( int i=0; i < pNum; i++)
        {
            tSum += pNum + 1; // Same as tSum = tSum + pNum + 1
            i++;
           
             
        }
   // Output the results
        cout<<"The sum of numbers 1 - "<< pNum << " is "<< tSum <<endl;
    return 0;
                break;
            }
            case '2':
            {
      //Declare the ascii limit
    int limit=127;
    
    //Map inputs to outputs or process the data
    for(int i=0;i<=limit;i++){
        cout<<static_cast<char>(i);
        if(i%16==15)cout<<endl;
    }
                break;
            }
            case '3': 
            {
                //Declare Variables
    float ORLEVEL=1.5f;// The Rate at which the ocean rises ever year in millimeters
    // Describe what the program is about
    cout<<"This program will display the number of millimeters the ocean will rise"
            "each year over the next 25 years"<<endl;
    cout<<"Years                 Millimeters"<<endl;
    cout<<"--------------------------------------"<<endl;
  
        
    int year, mYear=25;
    float tRise;
    
              for ( int year=1; year <= mYear; year++)
                 {
                     cout<<year
                         << "               "<< (year*ORLEVEL)<<endl;
                     
                 }
    
    tRise= mYear * ORLEVEL;
    cout<<"The total number of millimeters the ocean will rise in 25 years: "<< tRise<<endl;
                break;
            }
            case '4':
            {
                //Declare Variables
                float CPM = 3.6f; //Number of calories burn on a treadmill in one minute
                cout<<"This program will display the number of calories burned on a treadmill"<<endl;
                //Declare all Variables Here
                int tRun= 30; //Keep track of time running
                float cBurn; // Used to find calories burned 
                for ( int r=5; r<=tRun; r+=5) // "r" represents the number of minutes ran
                {
                    cBurn= r * CPM;
                    cout<< "In "<< r << " minutes you burn  "<< cBurn <<" calories"<<endl;    
                } 
                break;
            }
            case '5':
            {
    float INCREASE = 0.04f; // The increase in membership.
    int YEARS = 6; // Number of Years the membership will increase for.
    // The loop for the next 6 years
    cout<<"This program will calculate the membership increase of 4%"
            " over 6 years.\n";
    float nMemb= 2500;
    for ( int m=1; m <= YEARS; m++)
    {
        nMemb = nMemb + (nMemb * INCREASE);
        // Output data
        cout<<"The year membership cost after year " << m << " is $  "<< nMemb <<endl;
    }
                break;
            }
            case '6': 
            {
                  //What the program is about
        cout<<"This program will display the distance traveled by a vehicle.\n ";
    // The input data
        float tSpeed, tMiles;
        float time;
        cout<<"How fast did the vehicle travel?\n";
        cin>>tSpeed;
        while ( tSpeed <= 0)
        {
            cout<<"Speed must be more that zero. Please enter the speed again\n";
            cin>>tSpeed;
        }
        cout<<"How much time did it take (in hours)?\n";
        cin>>time;
        while ( time < 1)
        {
            cout<< "Time must be greater than zero. Please enter the amount of time again"<<endl;
            cin>>time;
        }
    //The loop
        
        cout<<"Hour\tDistanced Traveled( in miles per hour) \n";
        cout<<"--------------------------------------------------\n";
        for (int m=1; m<=time; m++)
        {
            tMiles = tSpeed * m;
            cout<< m <<"\t\t"<<(tSpeed * m )<< endl;
        }
                break;
            }
            case '7':
            {
                 //Describe what the program is doing
    cout<<"This program will covert a penny salary into a dollars.\n";
    
    //Get the inputs
    float nDayswk;
    float PENNY=0.01f; //THe amount of a penny
        cout<<"Please enter the number of days worked.\n";
        cin>>nDayswk;
    while ( nDayswk < 1)
     {
        cout<<"The number of days worked must be at least 1. "
                "Please enter the number of days worked again\n ";
        cin>> nDayswk;
     }
   //The loop
      cout<<"Salary for the Period\tTotal Earnings for that day\n";
      cout<<"---------------------------------\n";
      float tPay = 0.0f, dPay = 0.0f;
      
      for ( int p=1; p<=nDayswk;p++)
      {
          PENNY *= 2;
          dPay = PENNY / 100;
          tPay += dPay;
          cout<<"Day " << p <<"\t\t"<< dPay <<endl; 
          
      }
            
     cout<<"Total earnings for the period $" << tPay <<endl;
 
                break;
            }
            case '8': 
            {
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
                answer=op1*op2; // [2 to 4 digit result]
                break;
            }
            case '/':{
                op1=rand()%900+10; //[10-99]
                op2=rand()%90+10; //{10-99]
                answer=op1/op2; // [2 to 3 digit result]
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
                
                break;
            }
            case '9':
            {
                  //Declare variables
    int numYrs, numMths;
    float amtInc; // Number of inches rainfall increase.
    float tavgRain=0; // Accumulate the total increase in rainfall.
    float avgPmth=0;
            
            
    //Gather input data
            cout<<"This program will collect and calculate the average"
                    "rainfall over a number of years\n";
            cout<<"Enter the number of years.\n";
            cin>>numYrs;
            cout<<endl;
            while (numYrs<=0)
            {
                cout<<"You may not enter less than 1 year. Try again\n";
                cout<<"Enter the number of years.\n";
                cin>>numYrs;
                cout<<endl;
                
            }
    //The first loop is used to iterate each month
            numMths= numYrs * 12;
            for (int i=1; i<=numYrs;i++)
            {
   //The second loop will iterate 12 times(one for each month) 
    //ask for rainfall in inches
             for (int m=1; m<=numMths; m++)
             {
                 float avgRain;
                 cout<<"Enter the inches of rainfall for month " << m <<".\n";
                 cin>>amtInc;
                 while (amtInc<0)
                 {
                     cout<<"You must enter a positive number.\n\n";
                     cout<<"Enter the inches of rainfall for month " << m <<".\n";
                     cin>>amtInc;
                     cout<<endl<<endl;
                 }
                 tavgRain += amtInc;
                 
             }
             cout<<fixed<<showpoint<<setprecision(2);
             avgPmth= tavgRain / numMths;
             cout<<"The total number months: " << numMths <<endl;
             cout<<"The total inches of rainfall: " << tavgRain <<"inches"<<endl;
             cout<<"The average rainfall per month:  " << avgPmth << "inches"<<endl;
            }
                break;
            }
            default:
            {
                cout<<"Exit the program."<<endl;
                break;
            }
        }
                
        }while(choice>='1'&&choice<='9');    
    
   
    
    
   return 0;
}

