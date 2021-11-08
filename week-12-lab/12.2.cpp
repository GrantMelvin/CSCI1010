// Grant Melvin
// CSCI 1010
// Lab 12.1
/* 
The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ...., where each number is the sum of 
the two preceding numbers. Write a program that declares an array of size 40 and fill 
the array with 40 Fibonacci numbers, then print them out.  
Hint: Fill the first two number individually, then use a loop to compute the remaining 
numbers. 
*/

#include<iostream>

using namespace std ; 

int main()
{
    int arr[39] ; // Declares array that stores fetticini numbers

    // Sets first two elements to necessary digits for computation
    arr[0] = 0 ; 
    arr[1] = 1 ;

    // Loops through array and sets the values to what they are supposed to be 
    // Instead of setting I to 2, could use a continue to skip if i == 0 or i == 1 but this is cleaner
    for(int i = 2 ; i <= 39 ; i++)
    {
        arr[i] = arr[i-2] + arr[i-1] ;

        cout << arr[i] << "\t" ;
    }

    cout << endl ; // adds "! style !" d: ^)

   return 0 ;
}