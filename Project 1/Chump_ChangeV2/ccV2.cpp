/* 
 * File:   main.cpp
 * Author: Jones,Kelsey
 * Created on  April 17, 2017 8:30 p.m.
 * Purpose:  Progress on Project 1
 *                  *Need to include a for loop 
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
   int winFlip, cChoice; //Decides who wins
   int win=0, lose=0,draw=0 ,cWins=0,cLose=0; // Keep track of wins and loses
   string winFip,cPick;
    
  //Welcome the user
    cout<<"Welcome to Chump Change!\n";
    cout<<"You must battle THE CHUMP in a coin flip guessing game."
            "The first one to guess wrong 3 times losses. Enjoy!\n";
       //Ask the user for input
    do
    {
        cout<<"Enter your guess you can choose Heads, Tails or Draw.\n";
        cin>>g1;
        convert(g1);
  //Make sure input is valid
   if (!(g1=="Heads"||g1=="Tails"||g1=="Draw")){
       cout<<"Invalid input try again"<<endl;
       cout<<"Enter your guess you can choose Heads, Tails or Draw.\n";
       cin>>g1;
       convert(g1);     
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
   
     //Creation of the Chump A.I
      cChoice = (rand () % (100-1 + 1))+ 1;
      //Implenment a switch to determine THE CHUMPS's picks
      switch(cChoice){
             case '<=33': cPick="Heads";
                break;
             case '<=34&&>=66)':cPick="Tails";
                break;
             default: cPick="Draw";
        } 
       //Start of nested if
        //Determines the winners
       { if (g1 == winFip && cPick==winFip){ // Both guessed correctly.
           cout<<"You and THE CHUMP had a Draw.\n";
                draw++;
            cout<<"You have "<<lose<<" losses and "<<win<<" wins.\n"<<endl;    
       }
       else if (g1==winFip||cPick!=winFip){ // User guessed correctly.
           cout<<"You Won that round"<<endl;
           win++;
           cLose++;
           cout<<cLose<<endl;
           cout<<"You have "<<lose<<" losses and "<<win<<" wins.\n"<<endl;
      }
      
       else if ( !(g1==winFip||cPick==winFip)){ //Nobody guessed correctly
            draw++;
            cout<<"You and THE CHUMP had a draw";
            cout<<"You have "<<lose<<" losses and "<<win<<" wins. \n"<<endl;
       }
       
        else if (g1!=winFip && cPick==winFip){ // THE CHUMP guessed correctly
               cWins++;
               lose++;
               cout<<"You lost that round to THE CHUMP2\n";
               cout<<"You have "<<lose<<" losses and "<<win<<" wins.\n"<<endl;
           }
       {
         
       }
           
       }
     
    }while (lose<=3 && cLose<=3);// End of do while
    if (cLose==4)
        cout<<"Congrats you beat THE CHUMP.\n";
    else if (lose==4)
        cout<<"THE CHUMP beat you.\n";
  //Determine the results  
 return 0;
}
//Converts the right input regardless of spelling 
void convert(string &guess){
    if(guess[0]>=97)guess[0]-=32;//If first letter not capitalized
    for(int cnt=1;cnt<guess.length();cnt++){
        if(guess[cnt]<97)guess[cnt]+=32;//Lower case all other letters
    }
}