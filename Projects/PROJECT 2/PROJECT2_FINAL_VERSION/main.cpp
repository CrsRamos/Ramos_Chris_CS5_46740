/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 31, 2020, 6:12 PM
 * Purpose:  Project2 final version
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
void showRules(); // displays the rules of the game
void getbet(float &); // takes the players bet
void startGame(char); // prompts the user to start the game
int rollDice(); // rolls dice, calculates and displays sum
void getResults(string& status, int& point, int& sum); // roll 1 results
void CalcDispWin(float, float, float, float, float); // calculates winnings
void DisplayLosses(float); // displays the losses

//Execution of Code Begins Here
int main(int argc, char** argv) {

    //Declare all variables for this function
     int dice1,         // holds the value for the first die
         dice2,         // holds the value for the second die 
         sum,           // holds and calculates the sum of the dice 
         point,         // holds the players point 
         rollNum,       // counts the number of rolls 
         pcnt;          // percent that house gets if the player wins
   
      float bet,         // holds the players bet 
           houPcnt,     // calculates and displays the house percentage  
           houWins,     // calculates and displays how much the house gets
           usrWins,     // calculates and displays how much the player wins 
           totUwns;     // calculates and displays how much the player takes home 
          
     
     
     
     char start,       // starts game 
          plyAgn;      // allows player to choose if they want to play again
     
      string result;    // determines player status.   
      bool wrt2Fl; // if true write to file
    
     pcnt = 2;  //houPcnt = 0.02;
    
      
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives

     // show the rules function call
    showRules();
    
    // do while loop to give the option of playing again
     do  // do while loop to allow the user to run the program again
    {
    
    cout << "*********************************************" << endl; 
    
   
    rollNum = 0; // reset the number of rolls 
         
    // Prompt and take the bet function call
        getbet(bet); 
        cout << endl; 
    
    
    // prompt the user to start the game function call
        startGame(start);
    
    
    // 1st dice roll
    // call roll dice function   
        sum = rollDice();
        rollNum++; // increments rolls
    
    
  // determine roll results
    getResults(result, point, sum);
        point = sum;
        cout << endl;
 
     
        // while loop to keep rolling 
        while (result == "point") {
            cout <<"your point is " << point << endl;
                    
            // Roll again
            // call roll dice function again    
            sum = rollDice();
            rollNum++; // increments rolls

      
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
    
        
        // determine winnings
            if (result == "win") {
                cout << setprecision(2) << fixed;
                cout << endl;
                cout << "\tWINNINGS" << endl;
                
                for (int i = 0; i < 24; i++){ //create + pattern
                 cout << "+";  
                }// end of for loop
                cout << endl;
         
            // function call to calculate and display the winnings 
           CalcDispWin(bet, houPcnt, usrWins, houWins, totUwns);

            } else {
                cout << endl;
                cout << "\tLOSSES" << endl;
                wrt2Fl = false;

                for (int i = 0; i < 24; i++){ //create - pattern
                 cout << "-";  
                }// end of for loop

                cout << endl;
                // display losses
        
            // function call to display the players losses 
            DisplayLosses(bet);
                
                }// end of if
    
     // WRITE TO FILE 
         // if wrt2Fl true write the results to a file
                if (wrt2Fl == true) {
                cout << "Your results will be written to an " << endl;
                cout << "external text file for you." << endl;

               ofstream outputFile;
               outputFile.open("result.txt");

               // write win results the file
               outputFile << "You bet: $" << bet << endl;
               outputFile << "You won: $" << usrWins << endl;
               outputFile << "House gets: $" << houWins << endl;
               outputFile << "You take home: $" << totUwns << endl;

               // close the file 
               outputFile.close();
              } // end of if
        
        
        // ask user if the would like to play again
            cout << endl;
            cout << endl;
            cout <<"Would you like to play again? (Y/N)";
            cin >> plyAgn;
            cout << endl;
    
        } while ( plyAgn == 'Y' || plyAgn == 'y'); // end of do while loop

       //Clean up the code, close files, deallocate memory, etc....
       //Exit stage right 
        
        
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
        cout <<"Enter a S to start the game: ";
        cin >> start;
        cout << endl;

        // validate
        while ( start != 'S' && start != 's') {
            cout <<"You must enter an S to start: ";
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
 
// Calculate and display the player winnings
void CalcDispWin(float bet, float houPcnt, float usrWins, float houWins, float totUwns ){
    
    // calculate winnings
    int pcnt = 2;
    houPcnt = static_cast<float>(pcnt);   
        usrWins = bet * 2;
        houWins = houPcnt / 100 * usrWins;
        totUwns = usrWins - houWins;
    
     // display winnings  
        cout << "You bet: $" << bet << endl;
        cout << "You won: $" << usrWins << endl;
        cout << "House gets: $" << houWins << endl;
        cout << "You take home: $" << totUwns << endl;
} // end of calculate and display winnings function


// Display the player losses
void DisplayLosses(float bet){
        // display losses
      cout << "You bet: $" << bet << endl;
      cout << "You lost: $" << bet << endl;
}// end of display player losses function

