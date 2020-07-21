/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 21, 2020, 1:07 PM
 * Purpose:  Template which is to be copied for all future
 *           Homework, Labs, Projects, Test, etc...
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
float calculateRetail(float, float);

int main(int argc, char** argv) { //Execution of Code Begins Here
   
    //Declare all variables for this function
    float wsCost,       // get the whole sale cost
          mUpPcnt,      // get the markup percent
          mrkUp,        // display the markup amount
          rtlPrc;       // display the retail price
    
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    // get the wholesale cost
    cout << "Enter the wholesale cost:" << endl;
    cin >> wsCost;
    
    
    // get the markup percentage
    cout << "Enter the markup percentage:" << endl;
    cin >> mUpPcnt;
    
    
    // calculate the retail price  
    rtlPrc = calculateRetail(wsCost, mUpPcnt);
    
    //Display the Inputs/Outputs
    cout << fixed << setprecision(2); 
    cout << "The retail price is $" << rtlPrc;
    
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
} // end of main


// function definitions

float calculateRetail(float wsCost, float mUpPcnt){
    
    return (wsCost * mUpPcnt / 100) + wsCost;
}
