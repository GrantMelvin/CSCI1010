// Grant Melvin
// CSCI 1010
// Lab 12.1
/*
Harmonic numbers are calculated by 1 + ½  + 1/3 + ¼  ... + 1/n. Write a program to create 
a 20 length array. Each element stores (i + 1)-th harmonic number. Such as: 
A[0] has the 1st harmonic number 1 
A[1] has the second harmonic number 1 + ½  
A[2] has the third harmonic number 1+ ½  + 1/3 
Hint: use the previous element to calculate the current element.  
For the int variable i, to force 1/(i+1) be a double result, you can write it as 1.0 /(i + 1) 
*/

#include<iostream>

using namespace std ; 

int main()
{
    double arr[20] = {0} ; // Initializes and declares a 20 element-long array

    arr[0] = 1.0 ; // sets first array equal to 1

    for(int i = 1 ; i < 20 ; i++) // Loops through array, taking the previous element and doing necessary calculations
    {
        arr[i] = arr[i-1] + (1.0 / (i + 1)) ;

        cout << arr[i] << endl; // Outputs elmt val
    }

   return 0 ;
}