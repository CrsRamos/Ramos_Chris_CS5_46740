/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 21, 2020, 2:39 PM
 * Purpose:  Use a function to determine if a number entered by the  
 *          user is a prime number or not a prime number.
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
int isPrime(int);

int main(int argc, char** argv) { //Execution of Code Begins Here
    
    
    //Declare all variables for this function
    int num;
    
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    cout << "Enter a number:" << endl;
    cin >> num;
//Display the Inputs/Outputs
    
    isPrime(num);
    
 //Clean up the code, close files, deallocate memory, etc....
 //Exit stage right
   
    return 0;
} // end of main


// function definitions 

int isPrime(int num){
    if (num % 2 == 0) {
        cout << num << " is not a prime number.";
} else {
    cout << num << " is a prime number.";
} // end of if
    
}