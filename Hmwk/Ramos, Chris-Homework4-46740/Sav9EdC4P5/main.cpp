/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on Created on July 9, 2020, 2:14 PM
 * Purpose:  calculate the rates of inflation for the past 2 years
 *           and show their new prices
 *
 * Sav9EdC4P5
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;




int main(int argc, char** argv) { //Execution of Code Begins Here
  
    //Declare all variables for this function
    
    float curPrc,      // input for current cost
          yrAgoP,       // input for year ago cost
          inRate,       // inflation rate
          pOneYr,       // price in one year
          twoIrt,       // two year interest rate
          pTwoYr;       // price in one year
    char again;  // to hold Y or N to run the program again
 
  //Process Inputs to Outputs -> Mapping Process
  //Maps known values to the unknown objectives
    
       
    do  // do while loop to allow the user to run the program again
    {
    
    // get the current price
         cout << "Enter current price:" << endl;
         cin >> curPrc;
         
         // get the year ago price
         cout << "Enter year-ago price:" << endl;
         cin >>  yrAgoP;
         
         
         inRate = (curPrc - yrAgoP) / yrAgoP * 100; // interest rate for 1 yr
         pOneYr = inRate / 100 * curPrc + curPrc;   // price after 1 year
         twoIrt = (pOneYr - curPrc) / curPrc * 100; // interest rate for 1 yr
         pTwoYr = twoIrt  / 100 * pOneYr + pOneYr;  // price after 2 year
                    
         //Display the Inputs/Outputs
         
         cout << setprecision(2) << fixed;
         cout << "Inflation rate: " << inRate << "%" << endl;
         
         cout << endl;
         cout << "Price in one year: $" << pOneYr << endl;
         cout << "Price in two year: $" << pTwoYr << endl;

         
   
         
     // ask the user if they want to calculate another area 
    cout << endl;
    cout << "Again:" << endl;
    cin >> again;
     if (again == 'n' || again == 'N'){
             break;
         }
    cout << endl;
    
    
    
    
    } while ( again == 'Y' || again == 'y'); // end of do while loop    
     
         
         
     //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}


