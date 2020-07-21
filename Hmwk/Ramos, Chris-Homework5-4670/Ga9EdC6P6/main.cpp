/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 21, 2020, 1:57 PM
 * Purpose:  Calculate the kinetic energy of an object using the mass and
 *           velocity in seconds ebtered by the user
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   // format library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes

float kineticEnergy(float, float);


int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    float mass,     // holds the mass in kilograms
          vlcty,    // holds the velocity in seconds
          kinNrg;   // holds the kinetic energy
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    
    // get the mass in kilograms
    cout << "Enter the object's mass:" << endl;
    cin >> mass;
    
     // get the velocity in seconds
    cout << "Enter the object's velocity:" << endl;
    cin >> vlcty;
    
 
    // calculate the kinetic energy
    kinNrg = kineticEnergy(mass, vlcty);
    
    //Display the Inputs/Outputs
    cout << fixed << setprecision(1); // format one zero after decimal
    cout << "The object has " << kinNrg << " Joules of energy.";
    
    
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
} // end of main


// function definitions

float kineticEnergy(float mass, float vlcty){
    return (mass/2 * vlcty * vlcty);
}



