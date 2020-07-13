/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 7, 2020, 10:02 PM
 * Purpose:  Rock paper scissors game 
 *   
 * Savitch_9thEd_Chap3_PracProb1_RockPaperScissors        
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical and Laboratory Constants

//Function Prototypes


int main(int argc, char** argv) { //Execution of Code Begins Here
    
    
    //Declare all variables for this function
    char choice1, choice2;    // user choices
    
    //Initialize all known variables
    
    
    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;
    cin >> choice1 >> choice2;
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    
     //Display the Inputs/Outputs
    
    
    // Paper covers rock 
    
    if (choice1 == 'p'  && choice2 == 'r') // lower case letter
        cout << "Paper covers rock.";
   else if (choice1 == 'P' && choice2 == 'R') // Upper case letter 
        cout << "Paper covers rock.";
    
    else if (choice1 == 'r' && choice2 == 'p') // lower case letter
        cout << "Paper covers rock.";
    
    else if (choice1 == 'R' && choice2 == 'P') // Upper case letter
        cout << "Paper covers rock.";
    
    
    else if (choice1 == 'r' && choice2 == 'P') // lower r upper P
        cout << "Paper covers rock.";
    
    else if (choice1 == 'P' && choice2 == 'r') //  upper P lower r
        cout << "Paper covers rock.";
    
    else if (choice1 == 'R' && choice2 == 'p') //  upper R lower p
        cout << "Paper covers rock.";
    
     else if (choice1 == 'p' && choice2 == 'R') //  lower p upper R 
        cout << "Paper covers rock.";
    
 
    // Rock breaks scissors  
   
    else if (choice1 == 'r' && choice2 == 's') // lower case letter
        cout << "Rock breaks scissors.";
    
    else if (choice1 == 'R' && choice2 == 'S') // Upper case letter
        cout << "Rock breaks scissors.";
   
    else if (choice1 == 's' && choice2 == 'r') // lower case letter
        cout << "Rock breaks scissors.";
    
    else if (choice1 == 'S' && choice2 == 'R') // Upper case letter
        cout << "Rock breaks scissors.";
    
    
    else if (choice1 == 's' && choice2 == 'R') // lower s upper R
        cout << "Rock breaks scissors.";
       
     else if (choice1 == 'R' && choice2 == 's') // upper R lower s 
        cout << "Rock breaks scissors.";
    
    else if (choice1 == 'S' && choice2 == 'r') // upper S lower r 
        cout << "Rock breaks scissors.";
     
    else if (choice1 == 'r' && choice2 == 'S') // lower r  upper S 
        cout << "Rock breaks scissors.";
   
    
 // Scissors cut paper 
   
    else if (choice1 == 's' && choice2 == 'p') // lower case letter
        cout << "Scissors cut paper.";
    
    else if (choice1 == 'S' && choice2 == 'P') // Upper case letter
        cout << "Scissors cut paper.";
    
    else if (choice1 == 'p' && choice2 == 's') // lower case letter
        cout << "Scissors cuts paper.";
    
     else if (choice1 == 'P' && choice2 == 'S') // Upper case letter
        cout << "Scissors cuts paper.";
   
     
     else if (choice1 == 'P' && choice2 == 's') // upper P lower s 
        cout << "Scissors cuts paper.";
     
     else if (choice1 == 's' && choice2 == 'P') //  lower s upper P
        cout << "Scissors cuts paper.";
     
    else if (choice1 == 'S' && choice2 == 'p') // upper S lower p 
        cout << "Scissors cuts paper.";
     
    else if (choice1 == 'p' && choice2 == 'S') // lower p upper S  
        cout << "Scissors cuts paper.";
     
     
   else  
            cout << "Nobody wins";
            
   
    
   //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

