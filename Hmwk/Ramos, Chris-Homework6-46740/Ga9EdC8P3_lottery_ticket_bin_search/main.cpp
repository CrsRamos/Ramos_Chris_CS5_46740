/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 23, 2020, 8:32 PM
 * Purpose:  Asks user to enter a lottery number  then does a binary search 
 *           through an array to check if it is a winning number
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
int binarySearch(const int [], int, int);



int main(int argc, char** argv) { //Execution of Code Begins Here
    //Declare all variables for this function
    const int SIZE = 10;
    int ticNums[SIZE] = {13579, 26791, 26792, 33445, 55555, 
    62483, 77777, 79422, 85647, 93121};
    
    int num;    // holds number entered by the user 
    int result;
    
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
        // get the winning number
    cout << "Enter the winning number: " << endl;
    cin >> num;
    
    // binarySearch function call
    
   result = binarySearch(ticNums, SIZE, num);
    
     //Display the Inputs/Outputs
    // determine if the number is a winner 
    
    if(result >= 0)
    {
        cout << "Congratulations you have won!";
    
    } else {
        cout << "No winning numbers.";
    
    
    }// end of if

    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
} // end of main


// binarySearch function definition

int binarySearch(const int array[], int size, int value)
{
   int first = 0,             // First array element
       last = size - 1,       // Last array element
       middle,                // Mid point of search
       position = -1;         // Position of search value
   bool found = false;        // Flag

   while (!found && first <= last)
   {
      middle = (first + last) / 2;     // Calculate mid point
      if (array[middle] == value)      // If value is found at mid
      {
         found = true;
         position = middle;
      }
      else if (array[middle] > value)  // If value is in lower half
         last = middle - 1;
      else
         first = middle + 1;           // If value is in upper half
   }
   return position;
}

