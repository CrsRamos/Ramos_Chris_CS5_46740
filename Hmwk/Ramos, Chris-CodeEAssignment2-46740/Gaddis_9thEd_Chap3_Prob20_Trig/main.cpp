/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 1, 2020, 5:23 PM
 * Purpose:  Calculates the sine, cos, and tan of an angle entered 
 * in degrees by the user*
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants


const float PI = 3.14159;

int main(int argc, char** argv) { //Execution of Code Begins Here
    
    
    //Declare all variables for this function
    float degrees, radians, c, s, t;

    //Initialize all known variables
    
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    // prompt
    cout <<"Calculate trig functions" << endl;
    cout << "Input the angle in degrees." << endl;
    cin >> degrees;

    // calculate
   
    radians = degrees * PI / 180;
    c = cos(radians); 
    s = sin(radians);
    t = tan(radians);

      
    
    //Display the Inputs/Outputs
    
    cout << "sin("<< static_cast<int>(degrees) <<") = " << setprecision(4) << fixed << s << endl;
    cout << "cos("<< static_cast<int>(degrees) <<") = " << setprecision(4) << fixed << c << endl;
    cout << "tan("<< static_cast<int>(degrees) <<") = " << setprecision(4) << fixed << t;
    

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}


