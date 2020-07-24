/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 23, 2020, 1:40 PM
 * Purpose:  Use arrays to hold employee id's, hours worked and pay rate
 *           then calculate and display each employees gross pay.
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>  // format library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes


int main(int argc, char** argv) { //Execution of Code Begins Here
    //Set the random number seed here
    
    //Declare all variables for this function
    
    //arrays
    const int NUMEMPS = 7; // number of items in the array
    int empIds[NUMEMPS] { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    
    int hrs [NUMEMPS];          // holds the employees hours
    float payRate [NUMEMPS];    // holds the employees pay rate
    float wages [NUMEMPS];      // holds the employees wages
    
    //Initialize all known variables
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    // for loop to get the employees pay rate and hours
    for (int count =0; count < NUMEMPS; count++) 
    {
        
         // get the pay rate and store it in the array
        cout << "Enter employee " << empIds[count] << "'s pay rate:" <<endl;
        cin >> payRate[count];
        
        // get the hours and store it in the array
        cout << "Enter employee " << empIds[count] << "'s hours work:" <<endl;
        cin >> hrs[count];
    
    }// end of for loop
    
    
    //Display the Inputs/Outputs

    // for loop to calculate and display the gross pay 
    for (int count = 0; count < NUMEMPS; count++)
    {
        // calculate the wages * hours
        wages [count] = hrs[count] * payRate[count];
        
   cout << setprecision(2) << fixed; // two zero after the decimal 
   cout << "Employee " << empIds[count] << "'s gross pay $" << wages[count] << endl;
    
    }// end of for loop
    
    
    
    
    
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

