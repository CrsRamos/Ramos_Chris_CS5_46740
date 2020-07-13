/* 
 * File:   main.cpp
 * Author: Chris Ramos
 * Created on July 8, 2020, 1:53 AM
 * Purpose:  Determine compatible horoscope signs from user input 
 * 
 * Savitch_9thEd_Chap3_PracProb4_CompatibleSigns       
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
using namespace std;


int main(int argc, char** argv) { //Execution of Code Begins Here
    
    //Declare all variables for this function
    string sign1, sign2;
   
   
   cout << "Horoscope Program which examines compatible signs." << endl;
   cout << "Input 2 signs." << endl;
   cin >> sign1 >> sign2;
    
    //Process Inputs to Outputs -> Mapping Process
    //Maps known values to the unknown objectives
    
   
   
   // FIRE: Aries, Leo, Sagittarius
   
   // Aries, Sagittarius
   if (sign1 == "Aries" && sign2 == "Sagittarius") {
       cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
   
   } else if (sign1 == "Sagittarius" && sign2 == "Aries") {
       cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
   
   
   } else if (sign1 == "aries" && sign2 == "sagittarius") {
       cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
   
   } else if (sign1 == "sagittarius" && sign2 == "aries") {
       cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
   
   
   // Aries, Leo
   }  else if (sign1 == "Aries" && sign2 == "Leo") {
       cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
   
   }    else if (sign1 == "Leo" && sign2 == "Aries") {
       cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
   
   
   } else if (sign1 == "aries" && sign2 == "leo") {
       cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
   
   }   else if (sign1 == "leo" && sign2 == "aries") {
       cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
   
   
    // Leo, Sagittarius
   
   }   else if (sign1 == "Leo" && sign2 == "Sagittarius") {
       cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
   
   }   else if (sign1 == "Sagittarius" && sign2 == "Leo") {
       cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
   
   
   }   else if (sign1 == "leo" && sign2 == "sagittarius") {
       cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
   
   }  else if (sign1 == "sagittarius" && sign2 == "leo") {
       cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
   
   
   
      //EARTH: Taurus, Virgo, Capricorn
        
       // Taurus, Virgo
   } else if (sign1 == "Taurus" && sign2 == "Virgo") {
       cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
   
  } else if (sign1 == "taurus" && sign2 == "virgo") {
       cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
   
   
    } else if (sign1 == "Virgo" && sign2 == "Taurus"){ 
       cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
   
    } else if (sign1 == "virgo" && sign2 == "taurus") {
       cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
        
       
        // Virgo, Capricorn 
       } else if (sign1 == "Capricorn" && sign2 == "Virgo") {
       cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
   
        } else if (sign1 == "capricorn" && sign2 == "virgo") {
       cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
   
   
        } else if (sign1 == "Virgo" && sign2 == "Capricorn") {
       cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
   
        } else if (sign1 == "virgo" && sign2 == "capricorn"){ 
       cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
        
        
        // Taurus, Capricorn 
        } else if (sign1 == "Capricorn" && sign2 == "Taurus") {
       cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
   
        } else if (sign1 == "capricorn" && sign2 == "taurus") {
       cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
   
   
        } else if (sign1 == "Taurus" && sign2 == "Capricorn"){ 
       cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
   
        } else if (sign1 == "taurus" && sign2 == "capricorn") {
       cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
        
        
        //AIR:Gemini, Libra, Aquarius
        
        // Gemini, Aquarius
        } else if (sign1 == "Gemini" && sign2 == "Aquarius") {
       cout << sign1 << " and " << sign2 << " are compatible Air signs.";
   
        } else if (sign1 == "gemini" && sign2 == "aquarius") {
       cout << sign1 << " and " << sign2 << " are compatible Air signs.";
   
   
        } else if (sign1 == "Aquarius" && sign2 == "Gemini") {
       cout << sign1 << " and " << sign2 << " are compatible Air signs.";
   
        } else if (sign1 == "aquarius" && sign2 == "gemini") {
       cout << sign1 << " and " << sign2 << " are compatible Air signs.";
        
        
        //Libra, Aquarius
        } else if (sign1 == "Libra" && sign2 == "Aquarius"){ 
       cout << sign1 << " and " << sign2 << " are compatible Air signs.";
   
        } else if (sign1 == "libra" && sign2 == "aquarius") {
       cout << sign1 << " and " << sign2 << " are compatible Air signs.";
   
   
        } else if (sign1 == "Aquarius" && sign2 == "Libra") {
       cout << sign1 << " and " << sign2 << " are compatible Air signs.";
   
        } else if (sign1 == "aquarius" && sign2 == "libra") {
       cout << sign1 << " and " << sign2 << " are compatible Air signs.";
   
        
        //Gemini, Libra
        } else if (sign1 == "Gemini" && sign2 == "Libra") {
       cout << sign1 << " and " << sign2 << " are compatible Air signs.";
   
        } else if (sign1 == "gemini" && sign2 == "libra"){ 
       cout << sign1 << " and " << sign2 << " are compatible Air signs.";
   
   
        } else if (sign1 == "Libra" && sign2 == "Gemini"){ 
       cout << sign1 << " and " << sign2 << " are compatible Air signs.";
   
        } else if (sign1 == "libra" && sign2 == "gemini") {
       cout << sign1 << " and " << sign2 << " are compatible Air signs.";
   
   
       
        // WATER: Cancer, Scorpio, Pisces 
         
        // Cancer, Scorpio,
        } else if (sign1 == "Cancer" && sign2 == "Scorpio") {
       cout << sign1 << " and " << sign2 << " are compatible Water signs.";
   
        } else if (sign1 == "cancer" && sign2 == "scorpio") {
       cout << sign1 << " and " << sign2 << " are compatible Water signs.";
   
   
        } else if (sign1 == "Scorpio" && sign2 == "Cancer") {
       cout << sign1 << " and " << sign2 << " are compatible Water signs.";
   
        } else if (sign1 == "scorpio" && sign2 == "cancer") {
       cout << sign1 << " and " << sign2 << " are compatible Water signs.";
        
      
        // Scorpio, Pisces  
        
        } else if (sign1 == "Pisces" && sign2 == "Scorpio") {
       cout << sign1 << " and " << sign2 << " are compatible Water signs.";
   
        } else if (sign1 == "pisces" && sign2 == "scorpio") {
       cout << sign1 << " and " << sign2 << " are compatible Water signs.";
   
   
        } else if (sign1 == "Scorpio" && sign2 == "Pisces") {
       cout << sign1 << " and " << sign2 << " are compatible Water signs.";
   
        } else if (sign1 == "scorpio" && sign2 == "pisces") {
       cout << sign1 << " and " << sign2 << " are compatible Water signs.";
        
       
        // Cancer, Pisces 
        
        } else if (sign1 == "Pisces" && sign2 == "Cancer") {
       cout << sign1 << " and " << sign2 << " are compatible Water signs.";
   
        } else if (sign1 == "pisces" && sign2 == "cancer"){ 
       cout << sign1 << " and " << sign2 << " are compatible Water signs.";
   
   
        }  else if (sign1 == "Cancer" && sign2 == "Pisces") {
       cout << sign1 << " and " << sign2 << " are compatible Water signs.";
   
        }  else if (sign1 == "cancer" && sign2 == "pisces") {
       cout << sign1 << " and " << sign2 << " are compatible Water signs.";
        
        
   } else { 
   cout << sign1 << " and " << sign2 << " are not compatible signs.";
   
  } // end of if
   
   //Clean up the code, close files, deallocate memory, etc....
    //Exit stage right
    return 0;
}

