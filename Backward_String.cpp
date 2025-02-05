//Chapter 10 Problem # 2 Pg 607 "Backward String": 
//Write a function that accepts a pointer to a C-string as an argument and displays itscontents backward. For Instance, if the string argument is "Gracity" the function should display "ytivarG". Demonstrate the function
//in a program that asks the user to input a string then passes it into a function.

//Code:
    
//importing function 
#include <iostream>
#include <string.h>

//declare standard namespace
using namespace std;

//function prototype 
void displayReverse(char str[])
{ 
    int len = strlen(str);
    
    // loop entire array 

    for (int i=len -1; i>=0;i--)
    { 
        // displaying the result
        cout<<str[i];
    }
    cout<<endl;
}
// main function 
    int main ()
    {
        // data type 
        char str[100];
        // Asking user to input string
        cout<<"Enter a string:";
        // string that user input 
        cin.getline(str,100);
    // shows the results in reverse order
        displayReverse(str);

//return 0 as function has ended 
        return 0;
    }
