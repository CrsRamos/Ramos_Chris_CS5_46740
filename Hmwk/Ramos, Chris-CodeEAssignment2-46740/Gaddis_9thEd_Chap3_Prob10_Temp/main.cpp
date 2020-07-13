/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 1, 2020, 5:34 PM
 * Purpose:  This program asks the user to input degrees Celsius 
 * and converts them to degrees Fahrenheit.
 * 
 *  Gaddis_9thEd_Chap3_Prob10_Temp          
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;


int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    
    
    float degrsC; // Degrees Celsius
    float degrsF; // Degrees Fahrenheit

   //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl; 
    //input
    cout << setprecision(1) << fixed;
    cin >> degrsF;

    
   // Convert Farenheit to Celsius 
    degrsC = (degrsF - 32) * 5/9;

    //Display the Inputs/Outputs
cout << degrsF <<  " Degrees Fahrenheit = " << degrsC << " Degrees Centigrade";
    
//Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

