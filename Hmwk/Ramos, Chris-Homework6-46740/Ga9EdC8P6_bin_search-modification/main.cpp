/* 
 * File:  main.cpp 
 * Author: Chris Ramos
 * Created on July 24, 2020, 3:09 PM
 * Purpose: Use a binary search to find a name in an array of strings  
 */

//System Libraries
#include <iostream> //I/O Library
#include<string>    // string library    
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Const

//Function Prototypes
bool binarySearch(const string [], string, int);
void Selectionsort (string [], int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int NUM_NAMES=20;
    string names[NUM_NAMES]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
				"Griffin, Jim", "Stamey, Marty", "Rose, Geri",
				"Taylor, Terri", "Johnson, Jill",
				"Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
				"James, Jean", "Weaver, Jim", "Pore, Bob",
				"Rutherford, Greg", "Javens, Renee",
				"Harrison, Rose", "Setzer, Cathy",
				"Pike, Gordon", "Holland, Beth"};
  
    string name;    // holds number entered by the user 
    int result;
    //Initialize all known variables
    
    
    Selectionsort(names, NUM_NAMES);
    
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
        
      cout << "Enter a name to search for:" << endl;
      getline(cin, name);
        
     
        
        
        //Display the Inputs/Outputs
      // determine if the name was found
    
    if(binarySearch(names, name, NUM_NAMES))
    {
        cout << "The name was found";
    
    } else {
        cout << "The name was not found";
    
    
    }// end of if
        
     //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0; // end of main
}

// function definitions

// binarySearch function definition

bool binarySearch(const string names[], string name, int size)
{
   int first = 0,             // First array element
   last = size - 1,        // Position of search value
   middle;  

   while (first <= last) {
      middle = (first + last) / 2;     // Calculate mid point
      
      if (names[middle] == name)      // If value is found at mid
      {
          return true;
      }
      else if (names[middle] > name){  // If value is in lower half
         last = middle - 1;
      }
         else if (names[middle] < name){
         first = middle + 1;           // If value is in upper half
      }
      }
   return false;
}


void Selectionsort (string names [], int size){
    int startScan, minIndex;
    string minName;

    for(startScan = 0; startScan < size-1; startScan++){
        minName = names[startScan];
        minIndex = startScan;
        for(int index = startScan+1; index < size; index++){
           if(names[index] < minName){
                
                minName = names[index];
                minIndex = index;
            }
        } 
       
        names[minIndex] = names[startScan];
        
        names[startScan] = minName;
    }
}