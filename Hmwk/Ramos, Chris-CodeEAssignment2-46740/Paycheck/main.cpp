/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 1, 2020, 11:22 PM
 * Purpose:  Calculate the gross pay using a pay rate and hours worked
 *           entered by the user
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

int main(int argc, char** argv) { //Execution of Code Begins Here
    
    
    //Declare all variables for this function
    float rate;         // pay rate
    float hours;        // hours worked
    float grsPay;       // gross pay
    
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    cout << "This program calculates the gross paycheck.\n";
    cout << "Input the pay rate in $'s/hr and the number of hours.\n"; 
    cin >> rate;
    cin >> hours;

    
    //Display the Inputs/Outputs
    if (hours > 40)
        grsPay =  rate * 40 + 2 * rate * (hours - 40);
    
    else grsPay= rate * hours;
    
    cout <<fixed<<setprecision(2)<<showpoint; 
    cout << "Paycheck = $"<< setw(7) << grsPay;


    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

