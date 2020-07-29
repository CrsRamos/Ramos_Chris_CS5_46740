/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 25, 2020, 3:59 PM
 * Purpose:  Use two-dimensional char arrays to build a tic tac toe game
 *           
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
        char board[3][3]; // board array 3 rows 3 columns
        int 
         emSpace,               // Empty spaces 
         row,                   // rows
         col,                   // columns
         playNum;               // sets the player number to either 1 or 2
        char player,            // sets the player letter to either X or O  
             response = 'y';    // sets the player choice to play again to yes
        bool 
             gmOver,            // sets the status of the game         
             winner;            // sets the status of winner 

   
   //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
   
   
      for (int r = 0; r < 3; r++) //init
      for (int c = 0; c < 3; c++)
    
   //Initialize all known variables 
      
        board[r][c] = '*';    
        emSpace = 9;              // start with nine empty spaces
        player = 'X';             // player one starts as X
        playNum = 1;              // first player starts as player 1
        winner = gmOver = false; // game over starts as false

      
      
      //Display the Inputs/Outputs
      // display the board
      for (int r = 0; r < 3; r++) // rows
      {
          
          for (int c = 0; c < 3; c++){ // columns
          cout << board[r][c] << ' ';
         
          
          } // end of column for loop
        cout << endl;
        cout << endl;
        
        
      
      }// end of row for loop
      
      
      //while game is not over
      while (!gmOver) 
      {
         row = col = -1; //get valid move
         
         while (col > 2 || col < 0 || row > 2 || row < 0
             || board[row][col] != '*')
         {
            cout << "Player " << playNum << " select location:" << endl;
                 
            cin >> row >> col;
            row--; 
            col--;
         } // end of while loop
         
         
         board[row][col] = player; //place move
         emSpace--; //decrement free slots
         
         
         // display the board
         for (int r = 0; r < 3; r++) 
         {
             for (int c = 0; c < 3; c++)
               cout << board[r][c] << ' ';
               cout << endl;
               cout << endl;
         } // end of for loop
         
         
        
         
            //check game status
            if (emSpace == 0) gmOver = true;

            if (board[row][0] == board[row][1]
             && board[row][0] == board[row][2]) //Check row
               winner = gmOver = true;

            if (board[0][col] == board[1][col]
             && board[0][col] == board[2][col]) //col
               winner = gmOver = true;

            if (row == col && board[0][0] == board[1][1]
                           && board[0][0] == board[2][2]) //diag \
               winner = end = true;

            if (row + col == 2 && board[0][2] == board[1][1]
                               && board[0][2] == board[2][0]) //diag /
               winner = gmOver = true;
         
         //change player letter
         if (!gmOver) player = player == 'X' ? 'O' : 'X';
         
         
         //change player number   
         if (!gmOver) playNum = playNum == 1 ? 2 : 1;
      
      
      } // end of while loop
      
      
      
      
      //display game result
      if (winner) cout << "Player " << playNum << " has won";
      else cout << "Game draws\n";
    
     
   

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right

   return 0;
}
    
    //Declare all variables for this function
    
    //Initialize all known variables
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs

    
