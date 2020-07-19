/* 
 * File:   main.cpp
 * Author: Created on July 10, 2020, 3:37 PM
 * Created on July 18, 2020, 4:38 PM
 * Purpose: Craps version 2 testing
 *           
 */

//System Libraries

#include <iostream>     //I/O Library
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
     int dice1, dice2, sum, point, newSum, rollNum;
     char start; // start game
     string result; 
     float wager;
     
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
                    
        cout << "Enter the first dice number: ";
        cin >> dice1;
    
        cout << "Enter the second dice number: ";
        cin >> dice2;
        cout << endl;
        sum = dice1 + dice2; // initialize sum again
        rollNum++;
        
        if (sum == point)
            result = "win";
        else if (sum == 7)
            result = "lose";
        else 
            result = "point";
        
        }// end of while loop
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

