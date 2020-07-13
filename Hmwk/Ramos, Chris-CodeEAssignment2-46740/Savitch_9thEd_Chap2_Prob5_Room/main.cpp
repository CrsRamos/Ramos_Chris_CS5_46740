/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 2, 2020, 12:29 AM
 * Purpose:  determine whether a meeting room is in violation
 * of fire law regulation based on the room capacity and number of
 * people attending the meeting          
 *  
 * Savitch_9thEd_Chap2_Prob5_Room
 */



//System Libraries
#include <iostream>  //I/O Library
using namespace std;


int main(int argc, char** argv) { //Execution of Code Begins Here
    //Set the random number seed here
    
    //Declare all variables for this function
    float maxCap,      // max room capacity
          numPepl,     // number of people
          reduce,      // number of people that must be excluded
          add;         // number of people that need to be added
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin >> maxCap >> numPepl;
    
    //Display the Inputs/Outputs

    if (numPepl > maxCap) {
        // subtract the room capacity from the number of people 
        reduce = numPepl - maxCap; 
        cout << "Meeting cannot be held." << endl;
        cout <<"Reduce number of people by " << reduce << 
                " to avoid fire violation.";
        
 } else {
        // subtract the number of people from the room capacity
        add = maxCap - numPepl; 
        cout << "Meeting can be held." << endl;
        cout <<"Increase number of people by " << add << 
                " will be allowed without violation.";
  } // end of if
    
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

 