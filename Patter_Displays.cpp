Chapter 5 Page 302 Problem #23 "Pattern Displays" 
  Write a program that uses a loop to display Pattern A below followed by anther loop that displays pattern B

#include <iostream> 
using namespace std; 
int main()
{
//  Variables 
int n=10; 
//loop to print rows
for (int i=0; i<n;i++) {

//loop to print first pattern 
for (int j=0;j<=i;j++) 
cout<<"+";

// loop to print spaces 
  for (int k=i;k<2*n;k++) 
cout<< " "; 

// loop to print second pattern 
for (int h=i; h<n;h++) 
cout<<"+" ;
cout<< "\n"; 
}
// terminatr program 
return 0; 
}
 
