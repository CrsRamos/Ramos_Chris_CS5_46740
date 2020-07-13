/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 2, 2020, 2:46 PM
 * Purpose:  Calculates the limit of soda pop a person can drink without dying
 * Savitch_9thEd_Chap2_Prob1_DietCoke          
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants
const float THOFONE = 0.001f; // 1/10th of 1%



int main(int argc, char** argv) { //Execution of Code Begins Here
    
   //Declare all variables for this function
    float msGms,       // number of grams of the mouse
          mklGms,      // number of gram needed to kill the mouse
          hunPrsn,     // number of grams of a hundred pound person
          sodaGms,     // number of grams in a soda
          usrWght;     // weight entered by the user in pounds
      int maxSoda;     // calculates and holds the maximum number of cans
    
    
  //Initialize all known variables
    
          msGms = 35;         // mouse is 35 grams
          mklGms = 5;         // 5 grams of artificial sweetener kills mouse 
          hunPrsn = 45359.2;  // a hundred pound person is 45359.2 grams
          sodaGms = 350;      // a can of soda is 350 grams
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
          
          cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
          cout << "Input the desired dieters weight in lbs." << endl ;
          cin >> usrWght;
         
     // calculate 
          maxSoda = usrWght / 100 * hunPrsn / msGms * mklGms / THOFONE / sodaGms;
          
    //Display the Inputs/Outputs
          cout << "The maximum number of soda pop cans" << endl;
          cout <<"which can be consumed is " << maxSoda << " cans";
         
         
         
     //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

