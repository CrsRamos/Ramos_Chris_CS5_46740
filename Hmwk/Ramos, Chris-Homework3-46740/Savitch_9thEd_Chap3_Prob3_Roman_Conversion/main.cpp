/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 8, 2020, 1:28 AM
 * Purpose:  convert a four-digit Arabic number to a roman numeral
 *           
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;


int main(int argc, char** argv) { //Execution of Code Begins Here
    
   //Declare all variables for this function
    int      num,       // year entered      
             ones,      // ones place
             tens,      // tens place
             hund,      // hundreds place
             thous;     // thousands place
    
   //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
    //Display the Inputs/Outputs
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    cin >> num;
    
    if (num <= 999 || num > 3000){
        cout << num << " is Out of Range!";
    } else {
        cout << num << " is equal to "; 
        
        thous = (num/1000)*1000;
            if(thous == 1000)
                 cout<<"M";
            if(thous == 2000)
                 cout<<"MM";
            if(thous == 3000)
                 cout<<"MMM";
            if(thous == 4000)
                 cout<<"-IV";
            if(thous == 5000)
                 cout<<"-V";
            if(thous == 6000)
                 cout<<"-VI";
            if(thous == 7000)
                 cout<<"-VII";
            if(thous == 8000)
                 cout<<"-VIII";
            if(thous == 9000)
                 cout<<"-IX";
            if(thous == 10000)
                 cout<<"-X";
            hund =(num%1000);
            hund =(hund/100)*100;
            if (hund == 100)
                        cout<<"C";
               else if (hund == 200)
                        cout<<"CC";
               else if (hund == 300)
                        cout<<"CCC";
               else if (hund == 400)
                        cout<<"CD";
               else if (hund == 500)
                        cout<<"D";
               else if (hund == 600)
                        cout<<"DC";
               else if (hund == 700)
                        cout<<"DCC";
               else if (hund == 800)
                        cout<<"DCCC";
               else if (hund == 900)
                        cout<<"CM";
            hund = num%1000;
            thous = hund%100;
            tens = (thous/10)*10;
            if (tens == 10)
                        cout<<"X";
               else if (tens == 20)
                        cout<<"XX";
               else if (tens == 30)
                        cout<<"XXX";
               else if (tens == 40)
                        cout<<"XL";
               else if (tens == 50)
                        cout<<"L";
               else if (tens == 60)
                        cout<<"LX";
               else if (tens == 70)
                        cout<<"LXX";
               else if (tens == 80)
                        cout<<"LXXX";
               else if (tens == 90)
                        cout<<"XC";
            ones = thous %10;
            if (ones == 1)
                        cout<<"I";
               else if (ones == 2)
                        cout<<"II";
               else if (ones == 3)
                        cout<<"III";
               else if (ones == 4)
                        cout<<"IV";
               else if (ones == 5)
                        cout<<"V";
               else if (ones == 6)
                        cout<<"VI";
               else if (ones == 7)
                        cout<<"VII";
               else if (ones == 8)
                        cout<<"VIII";
               else if (ones == 9)
                        cout<<"IX";

           }// end of if
    
  //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

