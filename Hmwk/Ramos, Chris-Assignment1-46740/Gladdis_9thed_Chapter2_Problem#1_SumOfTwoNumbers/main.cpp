/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on June 23, 2020, 2:00 PM
 * 
 * Purpose:  Calculates the sum of two numbers
 */

 //System Libraries
#include <iostream>
using namespace std;



int main(int argc, char** argv) { //Execution of Code Begins Here

    //Declare all variables for this function
    int num1;
    int num2;
    int total; // calculates and holds the sum of num1 and num2
    
//Initialize all known variables
num1 = 50;
num2 = 100;

    
//Process Inputs to Outputs -> Mapping Process
//Maps known values to the unknown objectives

    total = num1 + num2;
    
//Display the Inputs/Outputs
cout << num1 << " + " << num2 << " = " << total;
    
    
    
//Clean up the code, close files, deallocate memory, etc....
//Exit stage right

    
    return 0;
}

