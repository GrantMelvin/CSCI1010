// Grant Melvin
// CSCI 1010
// Lab 12.3
/*
Write a program to create an int array of size 10, and let the user enter 10 values for the 
elements int the array. Find how many numbers greater than the mean value and how 
many numbers are less than the mean value. 
*/

#include<iostream>

using namespace std ; 

int main()
{
    int arr[9] ; // Array with 10 elements
    int sum = 0, higher = 0, lower = 0 ; // Trackers for data

    cout << "Please enter 10 variables into the list: \n" ; // Output for question

    for(int i = 0 ; i < 10 ; i++) // Input for question
    {
        cin >> arr[i] ;
        sum += arr[i] ;
    }

    int mean = sum / 10 ; // Calculates average

    for(int j = 0 ; j < 10 ; j++) // Determines whether each element of the array is higher or lower than the average
    {
        if(arr[j] > mean)
        {
            higher++ ;
        }
        else if(arr[j] < mean)
        {
            lower++ ;
        }
        else
        {
            continue ;
        }
    }

    // Outputs results
    cout << "The mean is: " << mean << endl ;
    cout << "There are " << higher << " elements higher than the mean within the given list.\n" ;
    cout << "There are " << lower << " elements lower than the mean within the given list.\n" ;

   return 0 ;
}