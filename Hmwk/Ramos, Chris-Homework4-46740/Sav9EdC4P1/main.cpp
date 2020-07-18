/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 9, 2020, 3:50 PM
 * Purpose:  calculate miles per gallon from amount of liter and miles
 *           traveled that is entered by the user. liters must be converted
 *           to gallons. 
 * Sav9EdC4P1
 * 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip> // formating library
using namespace std;

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

const float LIT2GLS = 0.264179; // liters = 0.264179 gallons

int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    float liters,   // holds the number of liters entered by the user
          miles,    // holds the number of miles entered by the user
          mpg;      // calculates and hold the miles per gallon
    
    char again;  // to hold Y or N to run the program again
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
     
    do  // do while loop to allow the user to run the program again
    {
        cout << "Enter number of liters of gasoline:" << endl;
        cout << endl;
        cin >> liters;
    
        cout << "Enter number of miles traveled:" << endl;
        cout << endl;
        cin >> miles;
    
    
        //Display the Inputs/Outputs
        
       // calculate the miles per gallon
        mpg = miles / (liters * LIT2GLS);
        
       cout << setprecision(2) << fixed; 
       cout << "miles per gallon:" << endl;
       cout << mpg;
    
    
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


