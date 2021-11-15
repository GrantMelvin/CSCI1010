// Grant Melvin
// CSCI 1010
// Lab 13.1
/* 
Given a non-empty array of integers nums, element appears twice except for one. 
Write a program to find that single one. Test your program by the following arrays 
(change in your code for the new array):
*/
#include<iostream>

using namespace std ; 

int singlenum(int arr[], int counter)
{
    int sum = 0 ;

    for(int i = 0 ; i < counter ; i++ )
    {
        for(int j = 0 ; j < counter - i - 1 ; j++ )
        {
            if(arr[j] < arr[j + 1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j + 1] ;
                arr[j + 1] = temp ;
            }
        }
        sum += arr[i] ;
    }

    for(int i = 0 ; i < counter ; i += 2 )
    {
        if(arr[i] == arr[i + 1])
        {
            continue ;
        }
        else
        {
            return arr[i] ;
        }
    }

    return 0 ;

}


int main()
{
    const int MAX = 100 ;

    int arr[MAX] = {0} ;

    int counter = 0 ;

    cout << "Please enter a list of numbers that are repeated with one exception, with 0 to stop: \n" ;
    for(int i = 0 ; i < MAX ; i++)
    {
        cin >> arr[i] ;
        
        if(arr[i] == 0)
        {
            break ;
        }
        
        counter++ ;

    }

    cout << "Your single number is: " << singlenum(arr, counter) << endl ;;

    return 0 ;

}