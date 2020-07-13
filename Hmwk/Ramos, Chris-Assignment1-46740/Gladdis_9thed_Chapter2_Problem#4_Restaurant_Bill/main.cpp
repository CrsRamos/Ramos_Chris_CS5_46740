/* 
 * File: main.cpp
 * Author: Chris Ramos
 * Created on June 23, 2020, 3:30 PM
 * Purpose: Calculate the tax and tip of a restaurant bill of $88.67
 * tax is 6% and the tip is 20%
 */         

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    float mCharge;              // meal charge
    float tax;                  // tax percent
    float tip;                  // tip percent
    float taxTot;               // holds the total tax
    float tipTot;               // holds the total tip
    float billTot;              // holds the total bill
    
    
    //Initialize all known variables
    mCharge = 88.67;     // $88.67 meal charge
    tax = 0.0675;           // 6% tax
    tip = 0.20;             // 20% tip
    
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    taxTot = mCharge * tax;
    tipTot = (mCharge + taxTot) * tip;
    billTot = mCharge + tipTot + taxTot;
    
    
    
    //Display the Inputs/Outputs
    cout << setprecision(2) << fixed;
    cout << "The cost of the meal is: $" << mCharge << endl;
    cout << "The tax of the meal is: $" << taxTot << endl;
    cout << "The tip of the meal is: $" << tipTot << endl;
    cout << "The total cost of the meal is: $" << billTot << endl;
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right

    return 0;
}

