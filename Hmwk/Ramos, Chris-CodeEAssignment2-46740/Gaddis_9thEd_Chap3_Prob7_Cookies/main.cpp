/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 1, 2020, 3:34 PM
 * Purpose:  This program asks the user to input the numbers of cookies 
 * they ate and calculates the number of calories.
 * 
 *         
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    int numCks;         // number of cookies entered by the user
    int ckieCal;        // number of calories for each cookie
    int totCals;      // holds and calculate the total number of calories
    
    //Initialize all known variables
    
    ckieCal = 75; // 1 cookie = 75 calories
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout << "Calorie Counter" << endl; 
    cout << "How many cookies did you eat?"<< endl;  
    cin >> numCks;
    
    
    // calculate calories 
     totCals = numCks * ckieCal;

    
    //Display the Inputs/Outputs
    cout << "You consumed " << totCals << " calories." ;
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

