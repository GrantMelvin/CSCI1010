//Grant Melvin
//CSCI1010
//Assignment 4-4
//Write a program to check if the year is a leap year or not
#include<iostream>

using namespace std ;

int main()
{
    int year ; // user-entered variable

    //O/I for year question
    cout << "Please enter the year you'd like to check for 'leap-year-diness': " ;
    cin >> year ;

    //checks to see if year is a leap year
    if(year % 4 != 0)
    {
        cout << "It's a normal year! \n" ;
    }
        else if(year % 100 != 0)
        {
        cout << "It's a leap year! \n" ;
        }
        else if(year % 400 != 0)
        {
        cout << "It's a normal year!\n" ;
        }
            else
            {
            cout << "It's a leap year!\n" ;
            }
    return 0 ;
}