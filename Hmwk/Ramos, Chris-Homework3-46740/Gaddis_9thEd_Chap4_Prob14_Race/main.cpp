/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on Created on July 7, 2020, 4:39 PM
 * Purpose:  ask the user for three names and the time it took
 *           each to finish determine who came in first, second and third 
 *Gaddis_9thEd_Chap4_Prob14_Race
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;



int main(int argc, char** argv) { //Execution of Code Begins Here
  
   //Declare all variables for this function
    string runner1, runner2, runner3;
    int time1, time2, time3;
    
   //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
        // prompt
    
        cout << "Race Ranking Program" << endl;
        cout << "Input 3 Runners" << endl;
        cout << "Their names, then their times" << endl;
    
        // get the runner names and times
        cin >> runner1;
        cin >> time1;
        
        
        cin >> runner2;
        cin >> time2;
       
        
        cin >> runner3;
        cin >> time3;
      
                
        
    
     //Display the Inputs/Outputs
        
        // validate the times 
        // validate the time of the runners
     if ( time1 < 0 || time2 < 0 || time3 < 0   ){
        cout << "Runner time must be 0 or greater." << endl;
    } else {
        
         // runner at first place with lowest time
         if (time1 < time2)
         {
             if (time1 < time3)
             {
         cout << runner1 << "\t" << setw(3) << time1 << endl;
    
         if (time2 < time3)
         {
        cout << runner2 << "\t" << setw(3) << time2 << endl;
        cout << runner3 << "\t" << setw(3) << time3;
    
    } else {
        cout << runner3 << "\t" << setw(3) << time3 << endl;
        cout << runner2 << "\t" << setw(3) << time2;
    }
    }
} // end of runner at tfirst place
   
         
  // runner at first place with lowest time
         if (time2 < time3)
         {
             if (time2 < time1)
             {
         cout << runner2 << "\t" << setw(3) << time2 << endl;
    
         if (time1 < time3)
         {
        cout << runner1 << "\t" << setw(3) << time1 << endl;
        cout << runner3 << "\t" << setw(3) << time3;
    
    } else {
        cout << runner3 << "\t" << setw(3) << time3 << endl;
        cout << runner1 << "\t" << setw(3) << time1;
    }
    }
    }  // end of runner at first place
        
        
        // runner at first place with lowest time
         if (time3 < time2)
         {
             if (time3 < time1)
             {
         cout  << runner3 << "\t" << setw(3) << time3 << endl;
    
         if (time1 < time2)
         {
        cout << runner1 << "\t" << setw(3) << time1 << endl;
        cout << runner2 << "\t" << setw(3) << time2;
    
    } else {
        cout << runner2 << "\t" << setw(3) << time2 << endl;
        cout << runner1 << "\t" << setw(3) << time1;
    }
    }
    }  // end of runner 3 at first place
        
         
  }  // end of if statement   

 

    //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}


