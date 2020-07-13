/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 7, 2020, 1:34 PM
 * Purpose:  Determine how many points a user will earn by the amount  
 *           of books that they purchased.
 * Gaddis_9thEd_Chap4_Prob11_Books
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;



int main(int argc, char** argv) { //Execution of Code Begins Here
   
    //Declare all variables for this function
            int bksPrch,        // number of books input by the user 
            zeroBks,             // points for zero books
            oneBk,              // points for one books
            twoBks,             // points for two books
            threBks,            // points for three books
            fourBks;            // points for four books
                    
    //Initialize all known variables
            zeroBks = 0;            // 0 points for zero books 
            oneBk = 5;              // 1 point for one book
            twoBks = 15;             // 2 points for two books
            threBks = 30;            // 3 points for three books
            fourBks = 60;            // 4 points for four books
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    
      cout << "Book Worm Points" << endl;
      cout << "Input the number of books purchased this month." << endl;
      cin >> bksPrch;
            
       //Display the Inputs/Outputs
      
        // determine points
      if (bksPrch >= 4) {
         cout << "Books purchased" << setw(2) << "=" << setw(3) << bksPrch << endl;
         cout << "Points earned" << setw(4) <<  "=" << setw(3) << fourBks;    
      
        } else if (bksPrch == 3)  {
         cout << "Books purchased" << setw(2) << "=" << setw(3) << bksPrch << endl;
         cout << "Points earned" << setw(4) <<  "=" << setw(3) << threBks; 
      
      
        } else if (bksPrch == 2) {
          cout << "Books purchased" << setw(2) << "=" << setw(3) << bksPrch << endl;
         cout << "Points earned" << setw(4) <<  "=" << setw(3) << twoBks; 
      
        } else if (bksPrch == 1) {
         cout << "Books purchased" << setw(2) << "=" << setw(3) << bksPrch << endl;
         cout << "Points earned" << setw(4) <<  "=" << setw(3) << oneBk; 
      
      
      } else {  
         cout << "Books purchased" << setw(2) << "=" << setw(3) << bksPrch << endl;
         cout << "Points earned" << setw(4) <<  "=" << setw(3) << zeroBks;
    }// end of if
         
      
  //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

