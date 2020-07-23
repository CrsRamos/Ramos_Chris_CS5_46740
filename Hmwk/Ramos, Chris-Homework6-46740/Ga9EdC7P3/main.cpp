/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 22, 2020, 4:45 PM
 * Purpose:  Template which is to be copied for all future
 *           Homework, Labs, Projects, Test, etc...
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>  // string library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes


int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    
    const int FLAVORS = 5;
    string salsa[FLAVORS] = {"mild", "medium", "sweet", "hot", "zesty"};
    float sold[FLAVORS],
            totSld,         // total sold
            hiSold,         // highest sold
            lowSold;        // lowest sold
    
    string salLwst,
            salHst;
    
    
    //Initialize all known variables
    totSld = 0;
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    // for loop to get the sales of each salsa type
    
    for (int count = 0; count < FLAVORS; count++)
    {
     cout << "Enter the sales of " << salsa[count] << " salsa:$" <<endl;
            cin >> sold[count];
    
       totSld += sold[count];
    }// end of for loop
    
    int high, low;
    high = 0;
    low = 0;
    
   hiSold = sold[high];
   lowSold = sold[low];
    
    // find the highest and the lowest
   for (int count = 0; count < FLAVORS; count++)
   {
       if(sold[count] > hiSold){
           hiSold = sold[count];
            high = count;
        }// end of if
   
       
       if(sold[count] < lowSold){
           lowSold = sold[count];
            low = count;
        }// end of if
   
   }// end of for loop
    
    
    //Display the Inputs/Outputs
        
        cout << "Type"<< setw(10) << "Sales" << endl;
        for(int count = 0; count < 5; count++){
            cout << setprecision(2) << fixed;
            cout << left << setw(9) <<  salsa[count] << left<< 
             "$" << sold[count] << endl;
        }

        cout << "Total Sales was $" << totSld << endl;
        cout << salsa[low] <<" was the lowest selling product." << endl;
        cout <<  salsa[high] <<" was the highest selling product.";
    
   
   
   
   
   
   //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

