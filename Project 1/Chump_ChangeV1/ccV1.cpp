/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <string>  //String Library
#include <cstdlib> //Rand and Srand library
#include <ctime>  //Time library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int MAXVAL = 30; //Max value
const int MINVAL = 1; //Min value
//Function prototypes
void convert(string &);
//Execution begins here
int main(int argc, char** argv) {
   
  //Variables
   int nFlips=10; //Number of flips 
   string g1; //The user's pick
   convert(g1); // Change the input to correct format
   int winFlip; //Decides who wins
   int win=0, lose=0; // Keep track of wins and loses
   string winFip;
    
  //Welcome the user
   do
   {
    cout<<"Welcome to Chump Change!\n";
    cout<<"In ten chances, you must correctly guess the coin flip if"
          "you guess wrong three times GAMEOVER!\n";
       //Ask the user for input
        cout<<"Enter your guess you can choose Heads, Tails or Draw.\n";
        cin>>g1;
        convert(g1);
  //Make sure input is valid
   if (!(g1=="Heads"||g1=="Tails"||g1=="Draw")){
       cout<<"Invalid input try again"<<endl;
        return 1;
   }
  //Set the time
     unsigned seed =time(0);
  //Generate a random number
     srand (seed); 
  //Generate the Test case 
    winFlip = (rand() % (MAXVAL - MINVAL + 1))+ MINVAL;
    
        if (winFlip >=10){
                winFip="Heads";
                }       
          else if (winFlip<=11&&winFlip>=20){
                    winFip="Tails";
                    }
           else {
                winFip="Draw";
            }
           { if (g1 == winFip){
               cout<<"You won\n";
                    win++;
           }
          else {
               cout<<"You lose"<<endl;
               lose++;}
            }
               
   
   cout<<winFip<<endl;
   cout<<lose<<endl;
                  
  //Determine the results
  
 
    }while (lose>=3);
 return 0;
}
//Converts the right input regardless of spelling 
void convert(string &guess){
    if(guess[0]>=97)guess[0]-=32;//If first letter not capitalized
    for(int cnt=1;cnt<guess.length();cnt++){
        if(guess[cnt]<97)guess[cnt]+=32;//Lower case all other letters
    }
}