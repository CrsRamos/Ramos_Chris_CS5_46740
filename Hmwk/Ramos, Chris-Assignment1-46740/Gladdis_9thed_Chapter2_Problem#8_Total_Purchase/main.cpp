/* 
 * File: main.cpp
 * Author: Chris Ramos
 * Created on June 11, 2020, 4:42 PM
 * Purpose: Calculate the total purchase price of five items
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main() { //Execution of Code Begins Here
 
    //Declare all variables for this function
    float item1,     
          item2,     
          item3,      
          item4,     
          item5,      
          subTotal,        //  calculates and holds the subtotal
          taxPercent,   
          taxAmount,      // calculates and  sales tax total
          total;          // calculates and  total of purchase
    
    
    //Initialize all known variables

          item1 = 15.95,     // price of item 1
          item2 = 24.95,     // price of item 2
          item3 = 6.95,      // price of item 3
          item4 = 12.95,     // price of item 4
          item5 = 3.95,      // price of item 5
          taxPercent = 0.07;  // sales tax percent
    
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives

    subTotal = item1 + item2 + item3 + item4 + item5;
    taxAmount = subTotal * taxPercent;
    total = subTotal + taxAmount;
    
    
    //Display the Inputs/Outputs
    cout << "The total purchase for five items\n";
    cout << setprecision(2) <<fixed;
    cout << "Item 1 = $" << item1 << endl;
    cout << "Item 2 = $" << item2 << endl;
    cout << "Item 3 = $" << item3 << endl;
    cout << "Item 4 = $" << item4 << endl;
    cout << "Item 5 = $" << item5 << endl;
    cout << "subtotal = $" << subTotal << endl;
    cout << "sales tax = $" << taxAmount << endl;
    cout << "total = $" << total << endl;
    
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right

    
    return 0;
}

