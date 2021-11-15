// Grant Melvin
// CSCI 1010
// Assignment 7
// Array practice

#include<iostream>

using namespace std ; 

int main()
{
    // Gives us the list that we need to work with 
    const int MAX = 100 ;
    int arr[MAX] = {0} ;

    // Variables that are used to traverse list and assign largest 
    int counter = 0, largest = 0 ;

    // O/I of user-entered array
    cout << "Please enter digits for an array, followed by -1 when you'd like to end: \n" ;
    for(int i = 0 ; i < MAX ; i++)
    {
        cin >> arr[i] ;

        if(arr[i] == -1)
        {
            arr[i] = 0 ;
            break ;
        }

        counter++ ;

    }

    cout << "The elements are: \n" ;

    // Loop to find largest number
    for(int i = 0 ; i < counter ; i++)
    {
        for(int j = 0 ; j < counter ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                largest = arr[j] ;
            }
        }
        cout << arr[i] << "\t" ;
    }
    
    // Output for largest number
    cout << endl << "The largest number is: " << largest << endl ;

    // Adds the two elements to the list and reassigns the amount of elements in it
    arr[counter++] = 10 ;
    arr[counter++] = 15 ;

    // Output for new list
    cout << "The elements are now: \n" ;

    // Output loop through new list and eliminates the -1 entry
    for(int i = 0 ; i < counter ; i ++)
    {
        if(arr[i] == 0)
        {
            continue ;
        }

        cout << arr[i] << "\t" ;
    }

    cout << endl << "The new descending-order list is: " << endl;

    // Bubble sort loop
    for(int i = 0 ; i < counter ; i++)
    {   
        for(int j = 0 ; j < counter - i - 1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ; 
            }
        }
    }

    // Output loop through new list and eliminates the -1 entry
    for(int i = 0 ; i < counter ; i ++)
    {
        if(arr[i] == 0)
        {
            continue ;
        }

        cout << arr[i] << "\t" ;
    }

    cout << endl ;

    return 0 ;
     
}