/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 2, 2020, 4:44 PM
 * Purpose: prompt user to enter ten whole numbers and calculate
 *          each sum of negative numbers and positive numbers entered
 *          and the total sum of all numbers.
 * 
 * Savitch_9thEd_Chap2_Prob9_Sums
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants


int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    int usrNum,     // number input by user
        negSum,     // negative number  
        posSum,     // positive number 
        sum,        // total of all numbers
        count,      // counter for numbers entered by user
        pCount,     // counts positive numbers
        nCount;     // counts negative numbers
    
    //Initialize all known variables
        posSum = 0;
        negSum = 0;
        count = 0;
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    
    for (int i = 0; i < 10; i++, count++)
    {
        cin >> usrNum;

        if (usrNum <= 0) // number is negative
        {
            negSum += usrNum;
            nCount++;
        }
        else // number is positive
        {
            posSum += usrNum;
            pCount++;
        }
     }// end of for loop
    
        // calculate the sum of all numbers
        sum = posSum + negSum;
        
        //1·-1·2·-2·3·-3·4·-4·5·-5
        //Display the Inputs/Outputs

        cout<<"Negative sum" <<setw(1)<< " ="<<setw(4) << negSum <<endl;
        cout<<"Positive sum" <<setw(2)<<  "="<<setw(4) << posSum <<endl;
        cout<<"Total sum" <<setw(5) <<  "="<<setw(4) << sum;
        
        
        //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

