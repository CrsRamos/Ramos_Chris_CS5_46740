/* 
 * File: main.cpp
 * Author: Chris Ramos
 * Created on June 23, 2020, 4:42 PM
 * Purpose: Calculate the average of 5 numbers
 */

//System Libraries
#include <iostream>

using namespace std;


int main() { //Execution of Code Begins Here

    //Declare all variables for this function
    int value1;
    int value2;
    int value3;
    int value4;
    int value5;
    int sum;          // calculates and holds the sum of the 5 values
    int average;      // calculates and holds the average of the 5 values 
    
    
    //Initialize all known variables
    value1 = 28;
    value2 = 32;
    value3 = 37;
    value4 = 24;
    value5 = 33;
    
   //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    sum = value1 + value2 + value3 + value4 + value5;
    average = sum / 5;
    
    
    //Display the Inputs/Outputs
    
    cout << "The sum of the five values is " << sum <<endl;
    cout << "The average of the five values is " << average;
    
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right

    
    return 0;
}

