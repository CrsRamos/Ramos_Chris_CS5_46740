/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 8, 2020, 4:46 PM
 * Purpose:  Ask the user to input a series of numbers and loop
 *           to determine which is the largest and smallest in the series
 *
 *Gaddis_9thEd_Chap5_Prob13_MinMax
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;



int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    const int QUIT_NUM = -99; // ends the series of numbers entered by the user
    
        int num,        // number entered by the user
            smlstNm,    // smallest number
            lrgstNm;    // largest number
        
     //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
        
        // get number
        cin >>  num;
        
        smlstNm = lrgstNm = num;
        
        while (num != QUIT_NUM) {
            
            if (num < smlstNm)
               smlstNm = num;
            
            if (num > lrgstNm)
               lrgstNm = num;
        
         cin >> num;
        
      } // end of while loop
    
        //Display the Inputs/Outputs

   cout << "Smallest number in the series is " << smlstNm << endl;
   cout << "Largest  number in the series is " <<  lrgstNm;

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

