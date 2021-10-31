// Grant Melvin
// CSCI 1010
// Assignment 6.2
// Write a program to let the user enter 10 numbers and count how many numbers are above 60

#include<iostream>

using namespace std ; 

int main()
{
    int grade, max = 0, min = 0 ; // Declaring variables
    double mean ; // Declares the average variable

    cout << "Please enter 10 grades, seperated by an enter-key: \n" ; // Outputs question
    
    for(int i = 0 ; i < 10 ; i++) // Loops through grades and assigns min and max accordingly
    {
        cin >> grade ;

        if(min == 0)
        {
            min = grade ;
        }

        if(grade > max)
        {
            max = grade ;
        }

        if(grade < min)
        {
            min = grade ;
        }

        mean = mean + grade ;

    }

    mean = mean / 10 ; // Calculates average post-loop
    
    // Outputs stats
    cout << "The highest grade was: " << max << endl ;
    cout << "The lowest grade was: " << min << endl ;
    cout << "The mean grade was: " << mean << endl ;

    return 0 ;
}