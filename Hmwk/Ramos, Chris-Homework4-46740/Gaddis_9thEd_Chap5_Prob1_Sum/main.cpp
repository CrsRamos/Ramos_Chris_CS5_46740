/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 8, 2020, 3:18 PM
 * Purpose:  Calculate the sum of 
 *           Homework, Labs, Projects, Test, etc...
 *
 *  Gaddis_9thEd_Chap5_Prob1_Sum
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes


int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
        int num, // gets the number from the user
          total; // gets the sum
   
    //Initialize all known variables
         total = 0;
 
        
 //Process Inputs to Outputs -> Mapping Process
 //Maps known values to the unknown objectives
       
        cin >> num;
        
    // for loop to add the sum
    for (int i = 1; i <= num; i++) {
      total += i;
       } // end of for loop
    
   //Display the Inputs/Outputs
        
     cout << "Sum"  << " = "<< total;
        
  //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

