/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 7, 2020, 2:42 PM
 * Purpose:  Calculate the back charges of an account then display
 *           the charges and the new ballance
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;


int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    
    const float TEN_CS = .10,         // $.10 each for fewer than 20 checks   
                 EIGHT_CS = .08,      // $.08 each for 20–39 checks
                 SIX_CS = .06,        // $.06 each for 40–59 checks
                 FOUR_CS = .04;      // $.04 each for 60 or more checks
                      
    
    float mnthlyC,       // monthly charge
          bgnBal,        // user input for the begining bank ballance
          chkFee,       // holds the check fee
          xChrg,        // hold extra charge
          newBal;       // calculates and holds the new ballance
    
    int numChks;          // user input for number of checks 
    
    //Initialize all known variables
    mnthlyC = 10.00;   // $10.00 monthly charge
     
                 
     //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
                 
       // prompt 
      cout << "Monthly Bank Fees" << endl;
      cout << "Input Current Bank Balance and Number of Checks" << endl;
     
      // get the beginning ballance from the user
      cin >> bgnBal;
      
        // validate the ballance. Check for negative number
            if (bgnBal < 0)
                cout << "urgent! Your account is overdrawn";      
          
       // add $15 extra charge if balance is below $400
            if (bgnBal < 400)
                xChrg = 15.00;
      
      
      
      // get the number of checks from the user
      cin >> numChks;  
       // validate the number of checks. No negative numbers
      if (numChks < 0) {
          cout << "You must enter a number greater than zero;";
      
      } else {
          cout << setprecision(2) << fixed;
          if (numChks >= 0 && numChks < 20) // fewer than 20 checks = $.10 each  
                {
              chkFee = numChks * TEN_CS;
                }
      
          else if (numChks >= 20 && numChks <= 39) // 20–39 checks = $.08 each    
                {
              chkFee = numChks * EIGHT_CS;
                }
      
          else if (numChks >= 40 && numChks <= 59) // 40–59 checks = $.06 each    
                {
              chkFee = numChks *SIX_CS;
                }
          
          else if (numChks >= 60) // 60 or more checks = $.04 each    
                {
              chkFee = numChks * FOUR_CS;
          }
  
      }// end of if
          
    newBal = bgnBal - chkFee - mnthlyC - xChrg;
      
    //Display the Inputs/Outputs
    
     cout << setprecision(2) << fixed; // 

    cout << "Balance"  << setw(6) << "$" << setw(9) << bgnBal << endl;
    cout << "Check Fee" << setw(4) << "$" << setw(9) << chkFee << endl;
    cout << "Monthly Fee" << setw(2) << "$" << setw(9)<< mnthlyC << endl;
    cout << "Low Balance" << setw(2) << "$" << setw(9)<< xChrg << endl;
    cout << "New Balance" << setw(2) << "$" << setw(9)<< newBal;
                 
     //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}


