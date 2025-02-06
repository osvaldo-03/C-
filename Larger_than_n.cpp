//Chapter 7 page 455 Problem #4 "Larger than N"
//In a program, write a function that accepts three arguments: an array, the size of the array, and a number n. Assume the array contains integers. The function should display all of the nnumbers in the array that are greater than the number n. 

// Program w/ comments 

//import I/O functions 
#include<iostream> 

// declare standard namespace 
using namespace std; 

// function prototype 

void largerThanN(int[], int ,int); 

// main function 
int main () 
{
  // declare array to be used with 20 values from 1-100 int 

int arr[20]={1,40,24,99,100,47,61,73,89,37,19,17,93,33,57,2,31,50,2,3}; 

// call the function with n set to 40 

largerThanN(arr,20,40);

//return as function has ended 

return 0; 
} 

//function declaration 
void largerThanN(int arr[],int size, int n) 
{

// loop entire array 
for (int i=0;i<size;i++) 
{ if (arr[i]>n) 
{ // if it is print this number to a new line 
cout << arr[i] << endl; 
}
}
}
