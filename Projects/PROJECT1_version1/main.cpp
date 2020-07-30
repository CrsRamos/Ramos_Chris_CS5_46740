/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * * Created on July 17, 2020, 8:56 PM
 * Purpose:  Craps game
 *         
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>  // library for rand and srand
#include <ctime>    // library for the time function
#include <iomanip> // library for formatting
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) { 

    //Set the random number seed here
    
    //Declare all variaVVbles for this function
     int dice1, dice2, sum, point, newSum;
     char start;
    
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
    
    // start the game
    cout <<"Enter a S to start the game ";
    cin >> start;
    
    // validate
    while ( start != 'S' && start != 's') {
        cout <<"You must enter an S to start ";
        cin >> start;
        cout << endl;
    }// end of while loop for validation
    
   // start the rolling
    
    cout << "Enter the first dice number: ";
   cin >> dice1;
    
    cout << "Enter the second dice number: ";
    cin >> dice2;
    cout << endl;
    
    sum = dice1 + dice2;
    point = sum;
    
    cout << "*********************************************" << endl;    
    
    //Display the Inputs/Outputs

    
    // you win
    if (sum == 7 || sum == 11) {
        cout << "CONGRATULATIONS! YOU WIN!";
       
    
    // you lose
    } else if (sum == 2 || sum == 3 || sum == 12 ) {
        cout << "CRAPS! YOU LOSE";
       
    // roll again to find your point
    } else if (sum == 4 || sum == 5 || sum == 6 || sum == 8 
            || sum == 9 || sum == 10 ) {
    
    } // end of if
          
    // Display the point
        cout << "Roll Again to get the point" << endl;
        cout << "Your point is " << point << endl;
        cout << endl;
        point = sum;
        
    // keep rolling till you get the point and win or crap out
        cout << "Enter the first dice number: ";
        cin >> dice1;
    
        cout << "Enter the second dice number: ";
        cin >> dice2;
        cout << endl;
    
        sum = dice1 + dice2;
        
        // while loop to keep rolling 
        while (sum != point && sum != 7) {
           
        cout << "Enter the first dice number: ";
        cin >> dice1;
    
        cout << "Enter the second dice number: ";
        cin >> dice2;
        cout << endl;
        sum = dice1 + dice2; // initialize sum again
   
       }// end of while loop
    
        // determine if its a win or craps after leaving the loop
        if (sum == 7)
            cout <<"CRAPS! YOU LOSE";
            else cout << "CONGRATULATIONS! YOU WIN!";
    
     //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right

    
    return 0;
}



