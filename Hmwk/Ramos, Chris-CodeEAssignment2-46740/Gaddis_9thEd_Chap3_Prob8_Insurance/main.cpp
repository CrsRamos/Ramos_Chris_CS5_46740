/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 1, 2020, 4:00 PM
 * Purpose: Calculates the minimum amount of insurance needed for 
 * a building or home cost that is entered by the user
 * Gaddis_9thEd_Chap3_Prob8_Insurance
 * 
 */

//System Libraries
#include <iostream>

using namespace std;

int main() { //Execution of Code Begins Here

 //Declare all variables for this function
    float hWorth,       // holds the house worth
          insAmnt,      // calculates and holds the insurance amount
          inPcnt;       // insurance percent
    
   //Initialize all known variables
   inPcnt = 0.8;      // 80% insurance
   
   //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives

    // prompt
   cout << "Insurance Calculator" << endl;
    cout << "How much is your house worth?" <<endl;
    cin >> hWorth;
    
    // calculate how much the house is worth * the insurance percent
    insAmnt = hWorth * inPcnt;
    
  //Display the Inputs/Outputs
    cout << "You need $" << insAmnt << " of insurance.";

    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right

    return 0;
}

