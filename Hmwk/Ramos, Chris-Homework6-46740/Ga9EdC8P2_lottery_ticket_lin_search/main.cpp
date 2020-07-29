/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 23, 2020, 3:30 PM
 * Purpose:  Asks user to enter a lottery number  then does a linear search 
 *           through an array to check if it is a winning number 
 *          
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
int LinearSearch(int array[], int size, int number);


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
    cout << "Enter the winning number:" << endl;
    cin >> num;
    
    // LinearSearch function call
    result = LinearSearch(ticNums, SIZE, num);
    
    
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


// Linear Search function definition

int LinearSearch(int array[], int size, int num) {
    int index;
    
    index = 0;
    
    int position = -1;
    bool found = false;
    
    while (index < size && !found)
    {
        if (array[index] == num){
            
            found = true;
            position = index;
        } // end of if
            
        index++;
    }// end of while loop
    
    return position;

}