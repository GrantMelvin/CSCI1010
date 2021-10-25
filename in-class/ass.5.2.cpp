// Grant Melvin 
// CSCI1010
// Assignment 5.2
/* |Write a program to let the user enter a positive integer, and then find the Hailstone sequence. 
The Hailstone sequence is defined as follows. Starting with a number n, the next number in the sequence is 
n/2 if n is even, or 3n+1 if n is odd. 
The sequence ends when it reaches 1.| */

#include<iostream>
#include<string.h>

using namespace std ;

int main()
{
    int user_num ; // User-defined variable
    int i = 1 ; // Counter for suffix 
    string suffix ; // suffix for readability

    // O/I for question
    cout << "Please enter the number that you'd like to find the hailstone sequence of: \n" ;
    cin >> user_num ;

    // Loops through user-defined variable until it is 1
    while(user_num != 1 )
    {
        switch(i)
        {
            case 1:
            suffix = "st" ;
            break ;

            case 2:
            suffix = "nd" ;
            break ;

            case 3:
            suffix = "rd" ;
            break ;

            case 4: 
            suffix = "th" ;
            break ;

            case 5:
            suffix = "th" ;
            break ;

            case 6:
            suffix = "th" ;
            break ;

            case 7:
            suffix = "th" ;
            break ;

            case 8:
            suffix = "th" ;
            break ;

            case 9: 
            suffix = "th" ;
            break ;

            default:
            suffix = "th" ;
            break ;
        }

        // Checks if the number is even and performs appropriate calculations
        if(user_num % 2 == 0)
        {
            user_num = user_num / 2 ;
            cout << "The " << i << suffix << " number is: " << user_num << endl ;
        }

        // Checks if the number is odd and performs appropriate calculations
        else
        {
            user_num = (user_num * 3) + 1 ;
            cout << "The " << i << suffix << " number is: " <<  user_num << endl ;
        }

        // Increases counter for suffix
        i++ ;

    }

    return 0 ;
}