/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 7, 2020, 8:26 PM
 * Purpose:  Calculate the total charges of an ISP subscription
 *           based on the users package choice
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;




int main(int argc, char** argv) { //Execution of Code Begins Here
    
   //Declare all variables for this function
   //Initialize all known variables
    const float  PACK_A = 9.95,     // $9.95 per month
                 PACK_B = 14.95,    // $14.95 per month
                 PACK_C = 19.95,    // $19.95 per month

                 A_ADDCHRG = 2.00,  // $2 for additional hours over 10
                 B_ADDCHRG = 1.00;  // $1 for additional hours over 20
    
    
      const int  PACK_A_HRS = 10,   // 10 hours of access 
                 PACK_B_HRS = 20;   // 20 hours of access 
    
    
    
      char uChoice;    // user choice
      int hours;       // numbers of hours entered by the user
      float totChrg;   // holds and calculates the monthly total charges
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
      // prompt
        cout << "ISP Bill" << endl;
        cout << "Input Package and Hours" << endl;
        cin >> uChoice;
        cin >> hours;
      
      // validate the hours 
        if (hours > 744 )
            cout << "You cannot exceed 744 hours";
      
      // choice
        
      
        if ( uChoice == 'a' || uChoice == 'A') {
            if (hours > PACK_A_HRS )
            
            totChrg =  (hours - PACK_A_HRS) *  A_ADDCHRG + PACK_A ;
                else 
                totChrg = PACK_A; 
      
        
            
        } else if ( uChoice == 'b' || uChoice == 'B') {
            
             if (hours > PACK_B_HRS )
            totChrg =  (hours - PACK_B_HRS) *  B_ADDCHRG + PACK_B ;
             else 
                totChrg = PACK_B; 
        
            
        } else if ( uChoice == 'c' || uChoice == 'C') {
            totChrg = PACK_C;
      
        } else { 
            cout << "ALERT! Menu choice must be A, a, B, b, C, c";
            cout << "Run the program again";
        } // end of if
        
        
        
        //Display the Inputs/Outputs
        
        cout << "Bill" << setw(5) << "= $ " << setw(2) << totChrg;
        
        
        //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}



