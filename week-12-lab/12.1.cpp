// Grant Melvin
// CSCI 1010
// Lab 12.1
/* 
Write a program to create an int array of size 10, and let the user enter 10 values for the 
elements in the array. Print the values in reverse order.
*/

#include<iostream>

using namespace std ; 

int main()
{
    int arr[10] ; // User-defined array

    cout << "Please enter the 10 values that you'd like to reverse: \n" ; // Output for array

    for(int i = 0 ; i <= 9 ; i++)
    {
        cin >> arr[i] ; // Loop for input of array
    }

    // Output for reverse
    cout << "The reversed list is: \n" ; 

    for(int j = 9 ; j >= 0 ; j--)
    {
        cout << arr[j] << endl; 

    }

   return 0 ;
}