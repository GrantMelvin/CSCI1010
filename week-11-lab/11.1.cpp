// Grant Melvin
// CSCI 1010
// Lab 11.1
// Write a program to get the smallest number out of 10 integers listed by the user

#include<iostream>

using namespace std ; 

int main()
{
    int grade, min = 0 ; // Declaring variables

    cout << "Please enter 10 digits, seperated by an enter-key: \n" ; // Outputs question
    
    for(int i = 0 ; i < 10 ; i++) // Loops through grades and assigns min and max accordingly
    {
        cin >> grade ;

        if(min == 0)
        {
            min = grade ;
        }

        if(grade < min)
        {
            min = grade ;
        }


    }

    // Outputs stats
    cout << "The smallest number is: " << min << endl ;

    return 0 ;
}