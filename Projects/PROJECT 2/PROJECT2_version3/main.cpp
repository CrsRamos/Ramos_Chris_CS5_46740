/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * CCreated on July 31, 2020, 2:09 PM
 * Purpose:  Project2 version 3
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
void showRules();  // displays the rules of the game
void getbet(float &); // takes the players bet
void startGame(char); // prompts the user to start the game
int rollDice(); // rolls dice, calculates and displays sum
void getResults(string& status, int& point, int& sum); // roll 1 results

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
   
     float bet;         // holds the players bet 
     
             
             
      char start,       // starts game 
          plyAgn;      // allows player to choose if they want to play again
     
      string result;    // determines player status.   
      bool wrt2Fl; // if true write to file
    
    
    
    // show the rules function call
    showRules();
    
    cout << "*********************************************" << endl; 
    
    // Prompt and take the bet function call
        getbet(bet); 
        cout << endl; 
    
    // prompt the user to start the game function call
       startGame(start);
    
    // 1st dice roll
    // call roll dice function   
        sum = rollDice();
        rollNum++; // increments rolls
    
    // determine the results of the first roll
    getResults(result, point, sum);
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
}// --------------- end of main function -------------------------

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


// Get the players bet  
void getbet(float &bet) {
    int pcnt;
    pcnt = 2;
    // prompt
    cout << "The house pays double if you win " << endl;
    cout << "but takes a "<< pcnt << "% cut." << endl;
    cout << "Place your bet: $"; 
    // take the bet
    cin >> bet;
     
}// end of getbet function

void startGame(char start){
        cout <<"Enter a S to start the game ";
        cin >> start;
        cout << endl;

        // validate
        while ( start != 'S' && start != 's') {
            cout <<"You must enter an S to start ";
            cin >> start;
            cout << endl;
        }// end of while loop for validation
} // end of start game function


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


 // get the results of the first role
void getResults(string& result, int& point, int& sum){
    int rollNum;
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
}// end of get results function


