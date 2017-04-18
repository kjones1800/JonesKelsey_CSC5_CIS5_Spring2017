/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Displays progress on project 1
 *            *Reading and Writing to a file.
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <string>  //String Library
#include <cstdlib> //Rand and Srand library
#include <ctime>  //Time library
#include <iomanip> //Formating library
#include <fstream> // File library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int MAXVAL = 30; //Max value
const int MINVAL = 1; //Min value
const float PERCENT=100.0f;// Convert to a percent
//Function prototypes
void convert(string &);
//Execution begins here
int main(int argc, char** argv) {
   
  //Variables
   int nFlips=0, nGames=0; //Number of flips/max number of games 
   string g1; //The user's pick
   convert(g1); // Change the input to correct format
   char winFlip, cChoice; //Decides who wins
   int win=0,lose=0,draw=0;//Keeps track of wins, losses, and draws of the match
   int cWins=0,cLose=0; // Keep track of wins and loses
   int uHeads=0,uTails=0,uDraw=0;//Keep track of what the users picks
   int cheads=0,ctails=0,cdraw=0; //Keeps tracks of what THE CHUMP picks
   string winFip,cPick;//Used to determine heads,tails,or draw
   string inFname; //File name in
   string oFname; //File name out
   ifstream in;
   ofstream out;
   //Execute opening files
   inFname="ChumpChangeTheGame.Breakdown";
   oFname="ChumpChangeTheGame.Stats";
   in.open(inFname.c_str());
   out.open(oFname);       
  //Welcome the user
    cout<<"Welcome to Chump Change!\n";
    cout<<"You must battle THE CHUMP in a coin flip guessing game."
            "The first one to guess wrong 3 times losses. Enjoy!\n";
       //Ask the user for input
   
    do//start of a do-while loop
    {
        { 
        cout<<"Enter your guess you can choose Heads, Tails or Draw.\n";
        cin>>g1;
        convert(g1);
         nFlips++;
         {
             if(g1=="Heads"){
                 uHeads++;
             }
             else if (g1=="Tails"){
                 uTails++;
                 }
             else if (g1=="Draw"){
                 uDraw++;
             }
         } //End of nested if 
  //Make sure input is valid
   if (!(g1=="Heads"||g1=="Tails"||g1=="Draw")){
       cout<<"Invalid input try again"<<endl;
       cout<<"Enter your guess you can choose Heads, Tails or Draw.\n";
       cin>>g1;
       convert(g1);
       
   }
    //For loop
       for (int c=1;c<=nFlips;c++)
           if (c>=nFlips){
        cout<<"Round "<<c<<"."<<endl<<endl;}
           else{
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
      //Implement a switch to determine THE CHUMPS's picks
      switch(cChoice){
             case '<=33': cPick="Heads";
                 cheads++;
                break;
             case '<=34&&>=66)':cPick="Tails";
                ctails++;
                break;
             default: cPick="Draw";
                cdraw++;
        } //End of switch
    //Determines the winners
       { if (g1 == winFip && cPick==winFip){ // Both guessed correctly.
             draw++;
           cout<<"You and THE CHUMP had a Draw.\n";
           cout<<"You have "<<lose<<" losses and "<<win<<" wins."<<endl;
           cout<<"There has been "<<draw<<" draws."<<endl<<endl;
       }
       else if (g1==winFip||cPick!=winFip){ // User guessed correctly.
              win++;
              cLose++;
           cout<<"You Beat THE CHUMP!"<<endl;
           cout<<"You have "<<lose<<" losses and "<<win<<" wins."<<endl;
           cout<<"There has been "<<draw<<" draws."<<endl<<endl;
      }
      
       else if ( !(g1==winFip||cPick==winFip)){ //Nobody guessed correctly
            draw++;
            cout<<"You and THE CHUMP had a draw.";
            cout<<"You have "<<lose<<" losses and "<<win<<" wins."<<endl;
            cout<<"There has been "<<draw<<" draws."<<endl<<endl;
       }
       
        else if (g1!=winFip && cPick==winFip){ // THE CHUMP guessed correctly
               cWins++;
               lose++;
               cout<<"The CHUMP won!";
               cout<<"You have "<<lose<<" losses and "<<win<<" wins."<<endl;
               cout<<"There has been "<<draw<<" draws."<<endl<<endl;;
           }                
        }   
       }
         
    }while (lose<=3 && cLose<=3);// End of do while
    if (cLose==4)
        cout<<"Congrats you beat THE CHUMP.\n";
    else if (lose==4)
        cout<<"THE CHUMP beat you.\n";
  //Display the results.
    float uTpicks =(uHeads+uTails+uDraw);//Total picks for user.
    float cTpicks = (cheads+ctails+cdraw);//Total picks for THE CHUMP.
    cout<<"GAME SUMMARY\n";
    cout<<"---------------\n" ;
    cout<<setprecision(2)<<fixed;
    cout<<"THE CHUMP had "<<cWins<< " wins and "<<cLose<<" loses."<<endl;
    cout<<"You had "<<win<<" wins and "<<lose<<" loses."<<endl;       
    cout<<"The total number of rounds played: "<<nFlips<<endl;
    cout<<"Total number of times heads was chosen: "<<uHeads+cheads<<endl;
    cout<<"Total number of time tails was chosen: "<<uTails+ctails<<endl;
    cout<<"Total number of times a draw was chosen: "<<uDraw+cdraw<<endl;
    //Player breakdown User
    cout<<"PLAYER BREAKDOWN (YOU)\n";
    cout<<"--------------------\n";
    cout<<"Times heads was chosen: "<<uHeads<<"  "<<(static_cast<float>(uHeads)/uTpicks)*PERCENT<<"%"<<endl;
    cout<<"Times tails was chosen: "<<uTails<<"  "<<(static_cast<float>(uTails)/uTpicks)*PERCENT<<"%"<<endl;
    cout<<"Times draw was chosen: "<<uDraw<<"  "<<(static_cast<float>(uDraw)/uTpicks)*PERCENT<<"%"<<endl;
    //Player breakdown THE CHUMP
    cout<<"PLAYER BREAKDOWN (THE CHUMP)\n";
    cout<<"--------------------\n";
    cout<<"Times heads was chosen: "<<cheads<<"  "<<(static_cast<float>(cheads)/cTpicks)*PERCENT<<"%"<<endl;
    cout<<"Times tails was chosen: "<<ctails<<"  "<<(static_cast<float>(ctails)/cTpicks)*PERCENT<<"%"<<endl;
    cout<<"Times draw was chosen: "<<cdraw<<"  "<<(static_cast<float>(cdraw)/cTpicks)*PERCENT<<"%"<<endl;
    //Output to file
    out<<setprecision(2)<<fixed;
    out<<"THE CHUMP had "<<cWins<< " wins and "<<cLose<<" loses."<<endl;
    out<<"You had "<<win<<" wins and "<<lose<<" loses."<<endl;       
    out<<"The total number of rounds played: "<<nFlips<<endl;
    out<<"Total number of times heads was chosen: "<<uHeads+cheads<<endl;
    out<<"Total number of time tails was chosen: "<<uTails+ctails<<endl;
    out<<"Total number of times a draw was chosen: "<<uDraw+cdraw<<endl;
     //Close files
    in.close();
    out.close();
    
 return 0;
}
//Converts the right input regardless of spelling 
void convert(string &guess){
    if(guess[0]>=97)guess[0]-=32;//If first letter not capitalized
    for(int cnt=1;cnt<guess.length();cnt++){
        if(guess[cnt]<97)guess[cnt]+=32;//Lower case all other letters
    }
}