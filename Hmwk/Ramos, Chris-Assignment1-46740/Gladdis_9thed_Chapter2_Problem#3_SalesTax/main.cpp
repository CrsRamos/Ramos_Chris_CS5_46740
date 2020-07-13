/* 
 * File: main.cpp
 * Author: Chris Ramos
 * Created on June 23, 2020, 4:42 PM
 * Purpose: Calculate the total sales tax on a $95 purchase
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main() { //Execution of Code Begins Here

    //Declare all variables for this function
    float purch;                  // purchase
    float sTax;                   // sales tax percent
    float cTax;                   // count tax percent
    float sTaxTot;                // holds sales tax total        
    float cTaxTot;                // holds county tax total
    float totalPP;                // holds total purchase price    
    
//Initialize all known variables
    
    purch = 95.00;         // purchase price
    sTax = .04;            // sales tax 4%
    cTax = .02;            // county tax 2%
    
    
    //Process Inputs to Outputs -> Mapping Process
//Maps known values to the unknown objectives

    sTaxTot = purch * sTax;
    cTaxTot = purch * cTax;
    totalPP = purch + sTaxTot + cTaxTot;
    
//Display the Inputs/Outputs
    cout << setprecision(2) << fixed;
    cout << "The sales tax of a $95 purchase is $" << sTaxTot <<endl;
    cout << "The county tax of a $95 purchase is is $" << cTaxTot <<endl;
    cout << "The total purchase price is $" << totalPP;
    
//Clean up the code, close files, deallocate memory, etc....
//Exit stage right

    return 0;
}

