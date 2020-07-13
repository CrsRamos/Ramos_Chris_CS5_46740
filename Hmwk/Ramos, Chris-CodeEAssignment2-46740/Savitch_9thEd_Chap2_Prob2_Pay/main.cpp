/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 1, 2020, 11:55 PM
 * Purpose: Determine a retroactive pay amount, new annual
 *           salary and new monthly salary
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;



int main(int argc, char** argv) { //Execution of Code Begins Here
    
 //Declare all variables for this function
    float prevPay;  // previous annual salary input by user
    float retPay;   // calculates and holds amount of retroactive pay
    float newPay;   // calculates and holds new annual salary
    float nMonPay;  // calculates and holds new monthly pay

    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    cout << "Input previous annual salary."<< endl;
    cin >> prevPay;
    // Calculations 
    newPay = prevPay * 0.076 + prevPay; // 7.6% increase = 0.076
    nMonPay = newPay / 12;
    retPay = prevPay * 0.076 / 12 *6;

    //Display the Inputs/Outputs

    cout <<fixed<<setprecision(2)<<showpoint; 
    cout << "Retroactive pay" << setw(7) <<    "= $" << setw(7)<<  retPay <<endl;
    cout << "New annual salary" << setw(5) <<  "= $"<< setw(7) <<  newPay <<endl;
    cout << "New monthly salary" << setw(5) << "= $ "<< setw(6)<< nMonPay;
    

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

