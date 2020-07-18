/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 8, 2020, 3:57 PM
 * Purpose:  calculates how much a person would earn over a 
 * period of time if his or her salary is one penny the 
 * 
 * Gaddis_9thEd_Chap5_Prob7_PayInPennies       
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

int main(int argc, char** argv) { //Execution of Code Begins Here
   
    //Declare all variables for this function
        int days,         // holds the number of days entered by the user
            dlySal,       // daily salary of one penny per day 
            totSal;       // total salary     
   
    
    //Initialize all known variables
        cin >> days;
        dlySal = 1; // 1 cent
        totSal = dlySal;
        
     //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
        // get number of days from the user
       
        
        // for loop
        for (int i = 2; i <= days; i++)
        {
            dlySal*= 2;
            totSal+= dlySal; // add each increment
            
        }
    
        
        //Display the Inputs/Outputs
        int dollars = totSal/100;   // convert dollars  
        int pennies = totSal%100;   // convert pennies   
       cout << "Pay = $" << dollars << "."<<(pennies<10?"0":"")<< pennies;
    
        
        
        
     //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}
