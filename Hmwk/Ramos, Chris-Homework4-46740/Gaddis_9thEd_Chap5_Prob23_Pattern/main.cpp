/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 8, 2020, 7:35 PM
 * Purpose:  Template which is to be copied for all future
 *           Homework, Labs, Projects, Test, etc...
 *
 * Gaddis_9thEd_Chap5_Prob23_Pattern
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;



int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    
    char plus_symbol = '+';
    int num; // number entered

    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cin >> num;
    
    
    
    // main for loop
    for(int i = 0; i < num; i++) // creates 10 rows
    {
        // nested for loop. starts at 0 then increments each row by 1
        for(int x = 0; x <= i; x++ ) 
        {
        cout << plus_symbol;
        }// end of nested for loop
        cout << endl;
        cout << endl;
     }// end of main for loop
    
    // main loop
     for (int i = 0; i < num; i++) // creates 10 rows
     {
         // nested loop starts at 10 then decrements each row by 1
         for (int x = num; x > i; x--) 
         {
            cout << plus_symbol;  
            
         }
        if (i == num-1){
             break;
         }
         cout << endl;
          
         cout << endl;
     }

    //Display the Inputs/Outputs

    
    
    
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}


