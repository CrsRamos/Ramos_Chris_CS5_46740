/* 
 * File: main.cpp
 * Author: Chris Ramos
 * Created on June 23, 2020, 4:42 PM
 * Purpose: Calculate an employees annual pay
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    
    float payAmnt;      // pay amount   
    int payPrds;        // pay periods      
    float anlPay;       // calculates and holds the employee's total annual pay
    
    
    //Initialize all known variables
    
    payAmnt = 2200;        // employee earnings per pay period
    payPrds = 26;          // number of pay periods in a year
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives

    anlPay = payAmnt * payPrds;
   
    
    //Display the Inputs/Outputs
    cout << "The employees earnings for each pay period: $" << payAmnt << endl;
    cout << "number of pay periods per year: " << payPrds << endl;
    cout << "The employees total annual pay: $" << anlPay;
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right

    return 0;
}

