/* 
 * File: main.cpp
 * Author: Chris Ramos
 * Created on June 24, 2020, 4:42 PM
 * Purpose: Calculate ocean rise levels for 5, 7, and 10 years
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    float yearlyR;          // yearly rise
    float fiveYr;           // 5 year rise
    float sevenYr;          // 7 year rise
    float tenYr;            // 10 year rise
 
    //Initialize all known variables
    
    yearlyR = 1.5;   // rise of 1.5 millimeters
    
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives

    fiveYr = yearlyR * 5;
    sevenYr = yearlyR * 7;
    tenYr = yearlyR * 10;

    
    //Display the Inputs/Outputs
    cout << "If ocean levels rise 1.5 millimeters per year:" <<endl;
    cout << "In 5 years they will rise " << fiveYr << " millimeters" <<endl;
    cout << "In 7 years they will rise " << sevenYr << " millimeters" <<endl;
    cout << "In 10 years they will rise " << tenYr << " millimeters";
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right

    
    return 0;
}

