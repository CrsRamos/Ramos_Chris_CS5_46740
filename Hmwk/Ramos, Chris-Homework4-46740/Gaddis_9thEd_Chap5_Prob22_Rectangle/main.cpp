/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 8, 2020, 5:27 PM
 * Purpose:  Create a rectangle pattern from and integer entered by the user
 *           Homework, Labs, Projects, Test, etc...
 *
 *Gaddis_9thEd_Chap5_Prob22_Rectangle
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;



//Execution of Code Begins Here
int main(int argc, char** argv) {
    
    //Declare all variables for this function
    int num; // positive integer entered by user
    char ltr; // letter for the pattern
    
    
     //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    cin >> num; cin >> ltr;
    
    
   //Display the Inputs/Outputs

    for (int i = 0; i < num; i++){ // creates the row
       
        for (int j = 0; j < num; j++) { // increments the row
             cout << ltr; 
        }
          
         
         if (i == num-1){
             break;
         }
         cout << endl;
    } // end of for loop
        
    
    
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}


