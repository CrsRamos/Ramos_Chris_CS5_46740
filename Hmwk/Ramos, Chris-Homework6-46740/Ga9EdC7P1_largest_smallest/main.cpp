/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 22, 2020, 1:46 PM
 * Purpose:  Accept ten numbers and determine which is smallest
 *           and which is largest
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes


int main(int argc, char** argv) { //Execution of Code Begins Here
  
    //Declare all variables for this function
    const int  ARSIZE = 10;  // number of items in the array
    int nums[ARSIZE];        // numbers entered by the users to the array
    
    int lrgstN,         // largest number
        smlstN;         // smallest number
        
    //Initialize all known variables
     //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
     
    
    cout << "Enter 10 integers:" << endl;
     
     // for loop to get the ten numbers
    for (int count = 0; count < ARSIZE; count++){
        cin >> nums[count];
    
    }// end of for loop
    
     
    // for loop to find the largest number
        lrgstN = nums[0];
        for (int count = 1; count < ARSIZE; count++) {
            if (nums[count] > lrgstN) {
                lrgstN = nums[count];
            } // end of if
            } // end of for loop
            
                                                     
    
     // for loop to find the smallest number
        smlstN = nums[0];
        for (int count = 1; count < ARSIZE; count++) {
            if (nums[count] < smlstN) {
                smlstN = nums[count];
            } // end of if
            } // end of for loop
   
    
   //Display the Inputs/Outputs
        cout << lrgstN <<  " is the highest number." << endl;
        cout << smlstN <<  " is the lowest number.";
        
        
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

