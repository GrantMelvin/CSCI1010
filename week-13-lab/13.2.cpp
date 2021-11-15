// Grant Melvin
// CSCI 1010
// Lab 13.2
/* 
Write a program to declare an int array of size 100.
a. Then enter 8 numbers for the array. Display them to the screen
b. Insert a new number 18 as the first element of the array, then display all the
elements to the screen
c. Sort the elements in the descending order
*/
#include<iostream>

using namespace std ; 

int main()
{
    // Gives us the list that we need to work with 
    const int MAX = 100 ;
    int arr[MAX] = {0} ;

    // O/I of user-entered array
    cout << "Please enter 8 digits for an array: \n" ;
    for(int i = 0 ; i < 8 ; i++)
    {
        cin >> arr[i] ;

    }

    cout << "The elements are: \n" ;

    // Loop to output list
    for(int i = 0 ; i < 8 ; i++)
    {
        cout << arr[i] << "\t" ;
    }

    // Adds the two elements to the list and reassigns the amount of elements in it
    for(int i = 9 ; i > 0 ; i--)
    {
        arr[i] = arr[i-1] ; 
    }

    arr[0] = 18 ;

    // Output for new list
    cout << endl << "The elements are now: \n" ;

    // Output loop through new list and eliminates the -1 entry
    for(int i = 0 ; i < 9 ; i ++)
    {
        cout << arr[i] << "\t" ;
    }

    // Bubble sort loop
    for(int i = 0 ; i < 9 ; i++)
    {   
        for(int j = 0 ; j < 9 - i - 1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ; 
            }
        }
    }

    cout << endl << "The new descending-order list is: " << endl ;

    // Output loop 
    for(int i = 0 ; i < 9 ; i ++)
    {

        cout << arr[i] << "\t" ;
    }

    cout << endl ;
     
    return 0 ;
}