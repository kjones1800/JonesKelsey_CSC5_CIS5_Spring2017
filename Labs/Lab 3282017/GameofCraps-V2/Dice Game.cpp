/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
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
int main(int argc, char** argv){ 
 //Set the random number seed
    srand (static_cast<unsigned int> (time (0)));
    //Declare all Variables Here
    fstream in;
    int nGames,wins=0,losses=0;
    
    //Loop and throw the dice
    for(int thrw=1;thrw<=nGames;thrw++);
    //Number of Games
    in.open("GameInfo.dat");
    while ( in>>nGames);
    
            
    //Play the game
    for (int game=1; game <= nGames; game++ )
    {
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum1=die1+die2;
        //Determine wins and losses
        if (sum1==7 || sum1==11)wins++;
        else if (sum1==2 || sum1==3 || sum1==12)losses++;
        else    
        {
            //Loop until a 7 ot previous some is thrown
            bool thrAgn=true;
            do
            {
               char die1=rand()%6+1;
               char die2=rand()%6+1;
               char sum2=die1+die2; 
               if (sum1==7)
               {
                   losses++;
                   thrAgn=false;
                   
               }else if ( sum1==sum2)
               {
                   wins++;
                 thrAgn=false;
               }
           
            }while(thrAgn);
        }
    }
    
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Total number of games: "<< nGames <<endl;
    cout<<"The number of games won: "<< wins<<endl;
    cout <<"The Number of games lost: "<<losses<<endl;
    cout<<"The Number of games won and lost: "<<(wins+losses)<<endl;
  
    //Exit
    return 0;
}



