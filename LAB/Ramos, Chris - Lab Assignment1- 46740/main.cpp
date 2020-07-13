/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on June 23, 2020, 2:00 PM
 * Purpose: to calculate the percentage that the military budget 
 * is of the federal budget.
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    
    float miltBdgt,fedBdgt,mlPcrcnt;
    
    //Initialize all known variables
    miltBdgt = 7.0e11f; // military budget = 700 billion
    fedBdgt = 4.1e12f; // federal budget = 4.1 trillion
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    mlPcrcnt = miltBdgt / fedBdgt * 100; // calculate the percentage
    
    
    //Display the Inputs/Outputs
    cout << "The military budget: 700 billion " << endl;
    cout << "The Federal budget: 4.1 trillion " << endl;
    cout << "The military budget is " << mlPcrcnt <<"% of the federal budget";
    
     //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}