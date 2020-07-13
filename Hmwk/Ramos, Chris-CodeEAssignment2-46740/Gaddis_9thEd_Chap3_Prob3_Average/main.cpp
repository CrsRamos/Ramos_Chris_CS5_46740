/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 1, 2020, 3:00 PM
 * Purpose: Calculates the average of five test scores 
 * Gaddis_9thEd_Chap3_Prob3_Average
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Declare all variables for this function
    float score1, score2, score3,score4, score5, scAvg;
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives

    
    cout << "Input 5 numbers to average." <<endl;
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    
    
  // calculations
     scAvg = (score1 + score2 + score3 + score4 + score5) / 5 ;
    
    
  //Display the Inputs/Outputs
    cout << setprecision(1) << fixed; // format
    cout << "The average = " << scAvg;
    
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right

    
    return 0;
}

