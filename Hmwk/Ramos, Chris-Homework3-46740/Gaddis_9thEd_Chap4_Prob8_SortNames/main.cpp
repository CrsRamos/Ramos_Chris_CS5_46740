/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 7, 2020, 1:20 PM
 * Purpose:  Ask the user to input three names and then display them in 
 *            alphabetical order
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

int main(int argc, char** argv) { //Execution of Code Begins Here
    
    
    //Declare all variables for this function
    string name1, name2, name3;
   
   //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
        // prompt
        cout << "Sorting Names"<< endl;
        cout << "Input 3 names"<< endl;
    
    
 //Display the Inputs/Outputs

    // get names 
        cin >> name1;
        cin >> name2;
        cin >> name3;
       
    
    // name1 first
         if (name1 < name2)
         {
             if (name1 < name3)
             {
         cout << name1 << endl;
    
         if (name2 < name3)
         {
        cout << name2 << endl;
        cout << name3;
    
    } else {
        cout << name3 << endl;
        cout << name2;
    }
    }
} // end of name1 first
   
         
  // name2 first
         if (name2 < name3)
         {
             if (name2 < name1)
             {
         cout << name2 << endl;
    
         if (name1 < name3)
         {
        cout << name1 << endl;
        cout << name3;
    
    } else {
        cout << name3 << endl;
        cout << name1;
    }
    }
    }  // end of name2 first

        
        
        // name3 first
         if (name3 < name2)
         {
             if (name3 < name1)
             {
         cout  << name3 << endl;
    
         if (name1 < name2)
         {
        cout << name1 << endl;
        cout << name2;
    
    } else {
        cout << name2 << endl;
        cout << name1;
    }
    }
    }  // end of name3 first
        
        
        
     //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}