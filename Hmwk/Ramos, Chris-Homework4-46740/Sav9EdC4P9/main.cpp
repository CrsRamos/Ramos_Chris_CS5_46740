/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 9, 2020, 8:20 PM
 * Purpose:  Find the max of either two or three numbers 
 *           and display the largest
 *  
 * Sav9EdC4P9         
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//Function Prototypes
float getMax2(float, float, float);
float getMax3(float, float, float, float);
void showMax2(float);
void showMax3(float);



int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
   float num1, num2, num3, lrgTwo, lrgThre;
	
 //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
 
 
        cout<<"Enter first number:" << endl;
        cin >> num1;
        cout << endl;
 
        cout<<"Enter Second number:" << endl;
        cin >> num2;
        cout << endl;
        
        cout<<"Enter third number:" << endl;
        cin >> num3;
        cout << endl;
        
        // get the max of two numbers
        lrgTwo = getMax2(num1, num2, lrgTwo);
        
        // show the max of two numbers
        showMax2(lrgTwo);
	
        cout << endl;
        // get the max of two numbers
        lrgThre = getMax3(num1, num2, num3, lrgThre);
        
        // show the max of two numbers
        showMax3(lrgThre);
        
    
    
    
    //Display the Inputs/Outputs

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    
        
        return 0; // end of main
}

float getMax2(float num1, float num2, float lrgTwo) {
    
    
    if(num1 > num2 )
	{
		lrgTwo = num1;
	}
	else
	{
		lrgTwo = num2;
	}
	
        
        return lrgTwo;
}

void showMax2(float lrgTwo){
     //Display the Inputs/Outputs
      cout << "Largest number from two parameter function:" << endl; 
      cout << lrgTwo << endl;
    
}


void showMax3(float lrgThre){
     //Display the Inputs/Outputs
      cout << "Largest number from three parameter function:" << endl; 
      cout << lrgThre << endl;
    
}

float getMax3(float num1, float num2, float num3, float lrgthre){
    
     if(num1 > num2 && num1 > num3 )
	
	lrgthre = num1;
	
     else if (num2 > num1 && num2 > num3 )
	lrgthre = num2;
     
     else if (num3 > num2 && num3 > num1 )
	lrgthre = num3;
	
	
        return lrgthre;
    
    
}