/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 21, 2020, 8:02 PM
 * Purpose:  Get 5 test scores, drop the lowest score
 *           and calculate the average
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes
void getScore(int& );
void calcAverage(int, int, int, int, int);
int findlowest(int);

int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
   int score1, score2, score3, score4, score5, lowest;
    
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
   //Display the Inputs/Outputs
    
   // function calls
       
   
      // functions to get the scores 
       getScore(score1);
       getScore(score2);
       getScore(score3);
       getScore(score4);
       getScore(score5);
       
      // function to calculate the average
       calcAverage(score1, score2, score3, score4, score5);
    
    
    
      //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}// end of main


// function definitions

void getScore(int &score){
    
    cout << "Enter a test score:" << endl; 
    cin >> score;
    while (score < 0 || score > 100 ){ // validate
          cout << "You must enter a score greater than 0 and no higher than 100";
          cin >> score;
    }// end of while loop
    
}

int findlowest(int score1, int score2, int score3, int score4, int score5){
    int lowest = score1;
    
    if (score2 < lowest)
        lowest = score2;
    
    if (score3 < lowest)
        lowest = score3;
    
    if (score4 < lowest )
        lowest = score4;
    
   if (score5 < lowest )
        lowest = score5;
    

    return lowest;

}


void calcAverage(int score1, int score2, int score3, 
                    int score4, int score5) {
    
    int lowest;
    
    // call the findlowest function
    lowest = findlowest(score1, score2, score3, score4, score5);
    
    // calculate the average
    // add scores subtract lowest divide by 4
    float average;
    average = ((score1 + score2 + score3 + score4 + score5) - lowest) / 4.0;
    
    
    cout << setprecision(1) << fixed; // one zero after the decimal
    cout << "The average is " << average;

}