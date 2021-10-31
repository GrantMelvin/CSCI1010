// Grant Melvin
// CSCI 1010
// Assignment 6.2
// Write a program to let the user enter 10 numbers and count how many numbers are above 60

#include<iostream>

using namespace std ; 

int main()
{
    int user_num, counter = 0;

    cout << "Please enter 10 numbers, seperated by an enter-key: \n" ; 

    for(int i = 0; i < 10 ; i++)
    {
        cin >> user_num ;
        if(user_num > 60)
        {
            counter++ ;
        }
    }

    cout << "You have " << counter << " numbers above 60\n" ;

    return 0 ;
}