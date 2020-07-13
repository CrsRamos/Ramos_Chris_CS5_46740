/* 
 * File: main.cpp
 * Author: Chris Ramos
 * Created on June 23, 2020, 4:42 PM
 * Purpose: Calculate the number of acres in a plot of land
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants
const int ONE_ACRE = 43560;   // one acre is 43,560 square feet


int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    
    int tract;           
    int tAcres;   // calculates and holds the number of acres in the tract
    
    
    //Initialize all known variables
    
     tract = 391876; // tract of land is 391,876 square feet
    
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives

    tAcres = tract / ONE_ACRE;
    
    
    //Display the Inputs/Outputs
    cout << "A tract of land that is 391,876 square feet is "  
         << tAcres << " acres"; 
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    
    return 0;
}

