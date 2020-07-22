/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 22, 2020, 3:30 PM
 * Purpose:  Store the answers for 20 questions, compare them to
 *           student answers and determine if they passed and how
 *           many questions they missed and got correct
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
using namespace std;



int main(int argc, char** argv) { //Execution of Code Begins Here
   
    //Declare all variables for this function
    const int EXAMQS = 20;      // the number of exam questions
    char    uChoice[EXAMQS];    // user choice
    char   answers[EXAMQS] = {'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D',
                            'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'}; 
    
   /* int count,       // loop counter
        score,       // score total
        wrngAns,     // wrong answers
        missed;      // questions missed
    */
   //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    // prompt user to enter their answers
    cout << "Enter the student's test answers:" <<endl;
    
    // loop to get answers from user
    for (int count = 0; count < EXAMQS; count++ )
    {
        
        cin >> uChoice[count];
    } // end of for loop
    
    int count = 0;
    int score = 20;
    int wrngAns;
    
    
    while (count < EXAMQS) 
    {
        if (uChoice[count] != answers[count])
        {
            score -= 1;
        }// end of if
        count++;
    }// end of while
    
   
    //Display the Inputs/Outputs
    
        // display pass or fail message
        if (score >= 15)
            cout << "The student passed." << endl;
     else
         cout << "The student failed." << endl; 
    
    wrngAns = EXAMQS - score;
         
    // display the results
    cout << "There were " << score << " correct answers." << endl;
    cout << "There were " << wrngAns << " incorrect answers." << endl;
    
    // display the answers that were missed
    cout << "Incorrect questions:" << endl;
    
    int missed = 0;
    while (missed < EXAMQS ) {
        
        if (uChoice[missed] != answers[missed] )
        {
            cout << missed +1 << endl;
        }
        missed++;
    
    } // end of while loop
    
    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}