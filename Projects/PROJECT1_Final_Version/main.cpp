/* 
 * File:   main.cpp
 * Author: Chris Ramos 
 * Created on July 19, 2020, 3:42 PM
 * Purpose: Craps final version
 *           
 */

//System Libraries

#include <iostream>     // I/O Library
#include <cstdlib>      // library for rand and srand
#include <ctime>        // library for the time function
#include <iomanip>      // library for formatting
#include <string>       // string library
#include <fstream>      // input from file / output to file library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

int main(int argc, char** argv) { //Execution of Code Begins Here

    
    
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
     
     float bet,         // holds the players bet 
           houPcnt,     // calculates and displays the house percentage  
           houWins,     // calculates and displays how much the house gets
           usrWins,     // calculates and displays how much the player wins 
           totUwns;     // calculates and displays how much the player takes home 
     
     bool wrt2Fl; // if true write to file
     
     //Initialize all known variables
     
     pcnt = 2;  //houPcnt = 0.02;
     
         //Process Inputs to Outputs -> Mapping Process
       //Maps known values to the unknown objectives

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
    
    
    // do while loop to give the option of playing again
     do  // do while loop to allow the user to run the program again
    {
        rollNum = 0; // reset the number of rolls 
        
          // place a bet
        cout << "The house pays double if you win " << endl;
        cout << "but takes a "<< pcnt << "% cut." << endl;
        cout << "Place your bet: $";
        cin >> bet;
        cout << endl;       


        // start the game
        cout <<"Enter a S to start the game ";
        cin >> start;
        cout << endl;

        // validate
        while ( start != 'S' && start != 's') {
            cout <<"You must enter an S to start ";
            cin >> start;
            cout << endl;
        }// end of while loop for validation

       // start the rolling
            dice1 = (rand() + time(0)) % 6 + 1;
            dice2 = (rand() + time(0)) % 6 + 1;
            sum = (dice1 + dice2);

         cout << "*********************************************" << endl; 
         cout <<"you rolled a " << dice1 << " and " << dice2 << 
                " = " << sum << endl;
            
            
    
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
     
    
    //Display the Inputs/Outputs

     // while loop to keep rolling 
        while (result == "point") {
            cout <<"your point is " << point << endl;
                    
                // Roll again
                dice1 = (rand() + time(0)) % 6 + 1;
                dice2 = (rand() + time(0)) % 6 + 1;
                sum = (dice1 + dice2);
                rollNum++;

                cout <<"you rolled a " << dice1 << " and " << dice2 << 
                " = " << sum << endl;
                cout << endl;
        
                if (sum == point)
                    result = "win";
                else if (sum == 7)
                    result = "lose";
                else 
                    result = "point";

        }// end of while loop
    
           
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
        
        houPcnt = static_cast<float>(pcnt);   
        usrWins = bet * 2;
        houWins = houPcnt / 100 * usrWins;
        totUwns = usrWins - houWins;

            // determine winnings
            if (result == "win") {
                cout << setprecision(2) << fixed;
                cout << endl;
                cout << "\tWINNINGS" << endl;
                

                for (int i = 0; i < 24; i++){ //create + pattern
                 cout << "+";  
                }// end of for loop

                cout << endl;
                cout << "You bet: $" << bet << endl;
                cout << "You won: $" << usrWins << endl;
                cout << "House gets: $" << houWins << endl;
                cout << "You take home: $" << totUwns << endl;

            } else {
                cout << endl;
                cout << "\tLOSSES" << endl;
                wrt2Fl = false;

                for (int i = 0; i < 24; i++){ //create - pattern
                 cout << "-";  
                }// end of for loop

                cout << endl;
                cout << "You bet: $" << bet << endl;
                cout << "You lost: $" << bet << endl;
                }// end of if
    
    
          
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

       cout << endl;
    return 0;
}



