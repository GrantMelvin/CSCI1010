// Grant Melvin 
// CSCI1010
// Assignment 5.3
// Write a program to approximate the value of π using the formula given including terms up through 1/99.

#include<iostream>

using namespace std ;

int main()
{
    double n = 0 ; // Used to hold the equation besides * 4

    double x = 1 ; // Used to hold the denominator 


    for(int i = 0 ; i <= 49 ; i++)
    {
        // Checks if it should add the fraction
        if(i % 2 == 0)
        {

            n += 1 / x ; 

        }

        // Checks if it should subtract the fraction
        else
        {

            n -= (1 / x) ;


        }

        // Increases the denominator by 2 for each loop
        x = x + 2 ; 

    }

    // Calculates pi
    double pi = 4.00 * n ;

    cout.setf(ios::fixed) ;
    cout.setf(ios::showpoint) ;
    cout.precision(5) ;

    // Outputs pi
    cout << "The approximate pi value is: " << pi << endl ;


    return 0 ;
}