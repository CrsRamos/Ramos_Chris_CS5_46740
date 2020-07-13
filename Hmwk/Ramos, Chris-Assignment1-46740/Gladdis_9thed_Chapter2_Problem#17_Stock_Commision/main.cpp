/* 
 * File: main.cpp
 * Author: Chris Ramos
 * Created on June 23, 2020, 4:42 PM
 * Purpose: calculate the commission of a stock
 */

//System Libraries
#include <iostream>
using namespace std;


int main() { //Execution of Code Begins Here

    
    //Declare all variables for this function
    float sPrice,       
    shares,             
    cPcnt,     
    sTotal,        // calculates and holds the stock total without commission
    commiss,       // calculates and holds the commission total
    total;         // calculates and holds the total of stock and commission
    
    
   //Initialize all known variables 
    
    sPrice = 35.00;       // stock price per share
    shares = 750;        // number of shares
    cPcnt = 0.02;    // percentage of the commission 
    
    
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives

    sTotal = sPrice * shares;
    commiss = sTotal * cPcnt;
    total = sTotal + commiss;
    
    
   //Display the Inputs/Outputs
    
    
    cout << "Stock price per share: $" << sPrice << endl;
    cout << "Number of shares: " << shares << endl;
    cout << "Total amount of the stock: $" << sTotal << endl;
    cout << "Total amount of the commission at 2%: $" << commiss << endl;
    cout << "Total amount of the stock plus commission: $" <<  total << endl;
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right

    
return 0;
}

