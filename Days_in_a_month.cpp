// Chapter 4 Page 223 Question 10 "Days in a month": 
//Write a profram that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year. The program should then display the number 
//the number of days in that month. Use the following criteria to identify leap years. 
//  1. ) Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is divisble by 400. For example, 2000 is a leap year but 2100 is not. 
//  2.) If the year is not divisible by 100, then it is leap year if and only if it is divisibble by 4. For example, 2008 is a leap year but 2009 is not. 

//  Code: 
  
#include <iostream>
using namespace std;
int main () 
{
    // Variables
    int month,year; // month and year
// Ask for the month
    cout<<"Enter a month (1-12): ";
    cin>> month;
// Ask for the year
    cout<<"Enter a year: ";
    cin>> year;
// finding the leap years
    if (month==2) 
    {
        if ((year%4==0 && year%100!=0) || (year% 400==0))
    {
// display message telling number of days in month 
        cout<< "29 days"; // Telling if it is a leap year, then print 29 days in month 2
    }   
    else    {        cout<<"28 days"; // if it is not a leap year, then print 28 days in month 2
    }
    } 
    else if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)   
    {cout <<"31 days";
    }
     else {
        cout<<"30 days"; 
    }
// terminate program
    return 0 ;
}
