/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 26, 2020, 5:45 PM
 * Purpose:  Project2 version 1
 *           
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>      // input from file / output to file library
#include <ctime>        // library for the time function
using namespace std;


//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
void showRules();
int rollDice(); // rolls dice, calculates and displays sum

//Execution of Code Begins Here
int main(int argc, char** argv) {
// variables
    //Declare all variables for this function
     int dice1,         // holds the value for the first die
         dice2,         // holds the value for the second die 
         sum,           // holds and calculates the sum of the dice 
         point,         // holds the players point 
         rollNum,       // counts the number of rolls 
         pcnt;          // percent that house gets if the player wins
   
    
     char start,       // starts game 
          plyAgn;      // allows player to choose if they want to play again
     
      string result;    // determines player status.   
      bool wrt2Fl; // if true write to file
    
    
    
    // show the rules function call
    showRules();
    
    cout << "*********************************************" << endl; 
    
     // place a bet
    
    
    // start the game
    
    
    
    
    
    
    // 1st dice roll
    // call roll dice function   
    sum = rollDice();
    
    
  // determine roll results
    switch (sum)
            {
            // if you roll a 2, 3, 12 you lose
            case 2:
            case 3:
            case 12:
                result = "lose";
                rollNum++; // increments number of rolls
                    break;
            //if you roll 7 or 11 you win
            case 7:
            case 11:
                    result = "win";
                    rollNum++; // increments number of rolls
                    break;

            // if you roll a 4, 5, 6, 8, 9, 10 set the point
            // and roll again
            default:
                    result = "point";
                    rollNum++; // increments number of rolls
                    point = sum;
                    break;
            }
        point = sum;
        cout << endl;
 
     
    
     // while loop to keep rolling 
        while (result == "point") {
            cout <<"your point is " << point << endl;
                    
            // Roll again
            // call roll dice function    
            sum = rollDice();
            rollNum++;

               
        
                if (sum == point)
                    result = "win";
                else if (sum == 7)
                    result = "lose";
                else 
                    result = "point";

        }// end of while loop
    
        cout << endl;
     // determine if its a win or craps 
        if (result == "lose"){
            cout <<"CRAPS! YOU LOSE" << endl;
            cout << "You lost in " << rollNum << " roll(s)";
            cout << endl;
            }// end of if
        
        if (result == "win") {
            cout << "CONGRATULATIONS! YOU WIN!" << endl;
            cout << "You won in " << rollNum << " roll(s)";
            wrt2Fl = true;
            cout << endl;
            } // end of if
    
    
    
    
    
    
    return 0;
}// end of main

// function definitions

// display the rules
void showRules(){
    
    // Read from file
      ifstream inputFile;
      string rules;
      inputFile.open("rules.txt");

      inputFile >> rules;
      cout << "\t\t"  << rules << " ";

      inputFile >> rules;
      cout << rules << " ";

      inputFile >> rules;
      cout << rules << " ";
      cout << endl;

      inputFile.close(); // close the file
     
       
       cout << "*********************************************";  
       cout << endl; 
    
    
    // display the rules
       cout << setw(30) << "On the first roll" << endl;
       cout << "7 or 11" << setw(34) << "You win" <<endl;
       cout << "2, 3, 12" << setw(33) << "You lose"<<endl;
       cout << "4, 5, 6, 8, 9, 10" << setw(24) << "Roll again"<<endl;
       cout << endl;
       cout << setw(30) << "On the second roll" << endl;
       cout << setw(43) << "If you rolled a number from the roll \n";
       cout << setw(43) << "again row get it again before a 7 to win.";
       cout << endl;
       cout << endl;
 } // end of show rules function



// roll dice, calculate sum and display results
 int rollDice()
{
   // pick random die values
   int dice1 = (rand() + time(0)) % 6 + 1;
   int dice2 = (rand() + time(0)) % 6 + 1;
   int sum = dice1 + dice2; // compute sum of die values

   // display results of this roll
    cout <<"you rolled a " << dice1 << " and " << dice2 << 
    " = " << sum << endl;
   
  return sum; // return sum of dice
} // end of rollDice function

