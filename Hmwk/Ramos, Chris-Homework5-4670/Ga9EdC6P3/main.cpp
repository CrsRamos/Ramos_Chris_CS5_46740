/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 21, 2020, 3:17 PM
 * Purpose: Determine which company division of four 
 *          was the winner in quarterly sales based on sales figures 
 *          entered by the user.
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
float getSales(string);
void findHighest(float, float, float, float);

int main(int argc, char** argv) { //Execution of Code Begins Here
  
    //Declare all variables for this function
    string neDiv,   // Northeast division
           seDiv,   // Southeast division
           nwDiv,   // Northeast division
           swDiv;   // Southwest division
           
   float   neSales,   // holds the Northeast division sales
           seSales,   // holds the Southeast division sales
           nwSales,   // holds the Northeast division sales
           swSales;   // holds Southwest division sales
      
    
    //Initialize all known variables
           neDiv = "Northeast";  
           seDiv = "Southeast";   
           nwDiv = "Northwest";   
           swDiv = "Southwest";  
   
   //Process Inputs to Outputs -> Mapping Process
   //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs

    // function calls
           
           // getSales function calls
           neSales = getSales(neDiv);
           seSales = getSales(seDiv);
           nwSales = getSales(nwDiv);
           swSales = getSales(swDiv);
   
   
           // findHighest function call
           findHighest(neSales, seSales, nwSales, swSales);
   
   
   
   //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    
    
    
    
    return 0;
}// end of main

// function definitions

float getSales(string div) {
    
        float sales;
        cout << fixed << setprecision(2);
        cout << "Enter the sales for " << div << " division:$";
        cin >> sales;
        cout << endl;
         // validate input
        while (sales < 0 ){
            cout << "Sales figure cannot be less that $0.00";
            cout << "Try again";
            cin >> sales;
        
        } // end of while loop for validation
    
        return sales;
}


void findHighest(float neSales, float seSales, float nwSales, float swSales)
{
    
        string neDiv,   // Northeast division
           seDiv,   // Southeast division
           nwDiv,   // Northeast division
           swDiv;   // Southwest division
           
            // initialize variables
           neDiv = "Northeast";  
           seDiv = "Southeast";   
           nwDiv = "Northwest";   
           swDiv = "Southwest";  
   
    if (neSales > seSales && neSales > nwSales && neSales > swSales)
    {
       cout << "The " << neDiv << " division had the highest sales of $" << neSales;
    }
        else if(seSales > neSales && seSales > nwSales && seSales > swSales) 
   {
       cout << "The " << seDiv << " division had the highest sales of $" << seSales;
   }
         else if(nwSales > neSales && nwSales > seSales && nwSales > swSales) 
   {
       cout << "The " << nwDiv << " division had the highest sales of $" << nwSales;
   } 
       else
    {
       cout << "The " << swDiv << " division had the highest sales of $" << swSales;
   }
}



