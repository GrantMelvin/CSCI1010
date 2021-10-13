//Grant Melvin
//CSCI 1010
//Lab Week 8 Assignment 2
//Translate a user-entered number greater than or equal to 20 into english

#include<iostream>
#include<string.h>

using namespace std ;

int main()
{
    int num1, num2 ;
    string real1, real2 ;

    cout << "Please enter the number between [20 - 99] that you'd like to translate into english: \n" ;
    cin >> num1 >> num2 ;

    switch(num1)
    {
        case(2):
            real1 = "Twenty " ;
            break ;
        case(3):
            real1 = "Thirty " ;
            break ;
        case(4):
            real1 = "Fourty " ;
            break ;
        case(5):
            real1 = "Fifty " ;
            break ;
        case(6):
            real1 = "Sixty " ;
            break ;
        case(7):
            real1 = "Seventy " ;
            break ;
        case(8):
            real1 = "Eighty " ;
            break ;
        case(9):
            real1 = "Ninety " ;
            break ;
    }

    switch(num2)
    {
        case(1):
            real2 = "one " ;
            break ;
        case(2):
            real2 = "two " ;
            break ;
        case(3):
            real2 = "three " ;
            break ;
        case(4):
            real2 = "four " ;
            break ;
        case(5):
            real2 = "five " ;
            break ;
        case(6):
            real2 = "six " ;
            break ;
        case(7):
            real2 = "seven " ;
            break ;
        case(8):
            real2 = "eight " ;
            break ;
        case(9):
            real2 = "nine " ;
            break ;
    }

    cout << "The english word is: " << real1 << real2 << endl ;


    return 0 ;
}