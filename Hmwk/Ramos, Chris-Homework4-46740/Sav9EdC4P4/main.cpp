/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 8, 2020, 9:50 PM
 * Purpose:  calculate the rate of inflation for the past year
 *           from user input
 *
 * Sav9EdC4P4
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;




int main(int argc, char** argv) { //Execution of Code Begins Here
  
    //Declare all variables for this function
    
    float curPrc,      // input for current cost
          yrAgoP,       // input for year ago cost
          inRate;       // inflation rate
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
         
         
         inRate = (curPrc - yrAgoP) / yrAgoP * 100;
         
   //Display the Inputs/Outputs
         
         cout << setprecision(2) << fixed;
         cout << "Inflation rate: " << inRate << "%" << endl;
   
         
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


