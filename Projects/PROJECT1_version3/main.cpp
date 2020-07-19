/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 18, 2020, 7:52 PM
 * Purpose: Craps version 3 testing
 *           
 */

//System Libraries

#include <iostream>     // I/O Library
#include <cstdlib>      // library for rand and srand
#include <ctime>        // library for the time function
#include <iomanip>      // library for formatting
#include <string>       // string library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

int main(int argc, char** argv) { //Execution of Code Begins Here

    //Set the random number seed here
    
    //Declare all variables for this function
     int dice1, dice2, sum, point, newSum, rollNum, pcnt;
     char start, plyAgn; // start game
     string result; 
     float bet, houPcnt, houWins, usrWins, totUwns;
     
         //Initialize all known variables
     //houPcnt = 0.02;
     pcnt = 2;
     
    
     
     
     //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives

    cout << " \t\tRULES OF CRAPS" << endl;
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
     do  
    {
    
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

        cout <<"you rolled a " << dice1 << " and " << dice2 << 
                " your point is " << sum << endl;
    
    
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
    cout << "*********************************************" << endl;    
    
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
            cout << endl;
            } // end of if
        
        houPcnt = static_cast<float>(pcnt);   
        usrWins = bet * 2;
        houWins = houPcnt / 100 * usrWins;
        totUwns = usrWins - houWins;
    
    
    
    
    
    
    
    return 0;
}

