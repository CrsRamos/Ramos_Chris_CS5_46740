/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 22, 2020, 4:45 PM
 * Purpose:  Get the monthly sales for five salsa flavors form the user
 *           calculate the total sales and display which was the highest 
 *           seller and which was the lowest
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
    high = 0;   // initialize high
    low = 0;    // initialize low
    
   hiSold = sold[high];
   lowSold = sold[low];
    
    // for loop to find the highest and the lowest
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
        
      // for loop to display the salsa flavor sales 
        for(int count = 0; count < 5; count++){
            cout << setprecision(2) << fixed;
            cout << left << setw(9) <<  salsa[count] << left<< 
             "$" << sold[count] << endl;
        }// end of for loop

     // display total sales and which flavor was the lowest and which was the highest 
        cout << "Total Sales was $" << totSld << endl;
        cout << salsa[low] <<" was the lowest selling product." << endl;
        cout <<  salsa[high] <<" was the highest selling product.";
    
   
   
   
   
   
   //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

