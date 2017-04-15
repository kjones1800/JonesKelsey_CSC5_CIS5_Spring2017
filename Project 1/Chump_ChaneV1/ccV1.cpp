/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>    //String Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
void convert(string &);
//Execution begins here
int main(int argc, char** argv) {
   
  //Variables
   string g1; //The user's pick
   convert(g1); // Change the input to correct format
    
  //Welcome the user
    cout<<"Welcome to Chump Change!\n";
    cout<<"You must correctly guess the coin flip if"
            "you guess wrong 3 times GAMEOVER.\n";
       //Ask the user for input
        cout<<"Enter you guess you can choose Heads, Tails or Draw.\n";
        cin>>g1;
        convert(g1);
  //Make sure input is valid
   if (!(g1=="Heads"||g1=="Tails"||g1=="Draw")){
       cout<<"Invalid input try again"<<endl;
        return 1;
   }
  //Implement the Test case and execute the game
        
  //Output stats   
    
            
  //Set 
       //Create the "Chump" ( the user will be playing against it).
  //cont.  
  return 0;
}
void convert(string &guess){
    if(guess[0]>=97)guess[0]-=32;//If first letter not capitalized
    for(int cnt=1;cnt<guess.length();cnt++){
        if(guess[cnt]<97)guess[cnt]+=32;//Lower case all other letters
    }
}