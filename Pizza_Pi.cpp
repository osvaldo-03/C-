Chapter 3 Pg 148 Question 20 (Pizza PI) 
Joe's Pizza Palace needs a program to calculate the numberof slices a pizza of any size can be divided into. The program should perform the following steps: 
A.) Ask the user for the diameter of the pizza in inches 
B.) Calculate the number of slices that may be taken from a pizza of that size . 
A.) Display a message telling the number of slices. 

Code: 
    
#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
    // Constants 
    const float SLICE_AREA_SIZE = 14.125,
    PI = 3.14159;
    const int TWO = 2; 

    // Variables 
    float d, // Diameter
    r, // Radius 
    Area, 
    num_of_slices; 

    // Ask user for the diameter of the pizza in inches 

    cout<< "Enter the diameter of the pizza in inches:";
    cin>> d; 

    //Calculate the # of slices that may be taken from the pizza that size 

    r = d / TWO; // radius 
    Area= PI * pow(r,2); 
    num_of_slices= Area/SLICE_AREA_SIZE; 
    
    // Display message telling the number of slices 

    cout << "Number of Slices = "; 
    cout << num_of_slices; 
    // Terminate program 

    return 0; 
}
