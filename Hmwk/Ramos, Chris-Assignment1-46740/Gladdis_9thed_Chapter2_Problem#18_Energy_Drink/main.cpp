/* 
 * File: main.cpp
 * Author: Chris Ramos
 * Created on June 24, 2020, 7:00 PM
 * Purpose: calculate the number of surveyed customers that
 * purchase one or more energy drinks per week and customers who 
 * prefer citrus-flavored energy drinks
 */

//System Libraries
#include <iostream>
using namespace std;


int main(int argc, char** argv) { //Execution of Code Begins Here

    // //Declare all variables for this function
    float surveyed,       // number customers surveyed
          oneOMor,        // % of purchased one or more per week
          cPrefer,        // % who preferred citrus-flavored
          custCit,        // holds the citrus preferred customers total
          custOne;        // holds the one or more purchased customers total   
    
    
    //Initialize all known variables
    
    surveyed = 16500;       // 16,500 people surveyed
    oneOMor = 0.15;         // 15% purchased one or more per week
    cPrefer = 0.58;         // 58% preferred citrus-flavored
    
    
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives

    custOne = oneOMor * surveyed;
    custCit = cPrefer * surveyed;
    
    
    
    //Display the Inputs/Outputs
    cout << "Out of " << surveyed << " people surveyed:";
    cout << endl;
    cout << "The approximate number of customers in the survey\n";
    cout << "who purchase one or more energy drinks per week is" << endl;
    cout << custOne << endl;
    cout << endl;
    cout << "The approximate number of customers in the survey\n";
    cout << "who prefer citrus-flavored energy drinks is" << endl;
    cout << custCit << endl;
    
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right

    
    return 0;
}

