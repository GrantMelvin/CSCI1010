// Grant Melvin 
// CSCI1010
// Assignment 5.1
// Write a program to let the user enter a series of numbers (ended by 0), and then add up all the even numbers

#include<iostream>

using namespace std ;

int main()
{
    int num ; // User-defined variable
    int sum = 0 ; // Holds variable to output
    
    // Output for question
    cout << "Please enter multiple numbers, seperated by an enter-key" ;
    cout << " that you'd like to add up, followed by 0 when you'd like to end: \n" ;

    // Allows endless user-inputs until it is 0
    while(num != 0)
    {
        cin >> num ;

        sum += num ;

    }

    // Outputs sum
    cout << "Your sum is: " << sum << endl ;


    return 0 ;
}