/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 9, 2020, 4:56 PM
 * Purpose:  calculate miles per gallon for 2 cars from amount of liter and miles
 *           traveled that is entered by the user. liters must be converted
 *           to gallons. A message should say which car is more fuel efficient  
 * Sav9EdC4P2
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
          c1Mpg,      // calculates and holds car 1s miles per gallon
          c2Mpg;      // calculates and holds car 2s miles per gallon
    
    char again;  // to hold Y or N to run the program again
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
     
    do  // do while loop to allow the user to run the program again
    {
        
        // car 1
        cout << "Car 1" << endl;
        cout << "Enter number of liters of gasoline:"<< endl;
        cin >> liters;
        
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles;
        
    
        // calculate the miles per gallon for car 1
        c1Mpg = miles / (liters * LIT2GLS);
        
       cout << setprecision(2) << fixed; 
       cout << "miles per gallon: " << c1Mpg << endl;
       cout << endl;
       
       
        // car 2
        cout << "Car 2" << endl;
        cout << "Enter number of liters of gasoline:"<< endl;
        cin >> liters;
        
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles;
        
    
        // calculate the miles per gallon for car 2
        c2Mpg = miles / (liters * LIT2GLS);
        
       cout << setprecision(2) << fixed; 
       cout << "miles per gallon: " << c2Mpg << endl;
        
        
        
    // determine which car is more fuel efficient 
       
       if (c1Mpg > c2Mpg ) {
        cout << endl;
        cout << "Car 1 is more fuel efficient" << endl;   
        
       } else {
       cout << endl;
       cout << "Car 2 is more fuel efficient" << endl;
           
       }// end of if
       
       
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



