// Grant Melvin
// CSCI 1010
// Lab Week 10 Assignment 1
// Calculator for sq and sqrt that repeats

#include<iostream>
#include<math.h>

using namespace std ;

int main()
{
    int choice ; // User-defined option
    double user_num1, user_num2 ; // User-defined numbers to calculate

    while(1)
    {
        // O/I of menu
        cout << "-----Scientific Calculator-----\n" ;
        cout << "*******************************\n" ;
        cout << "1. Square" << endl ;
        cout << "2. Square Root" << endl ;
        cout << "3. Exit" << endl ;

    
        while(1)
        {
            cin >> choice ;

            switch(choice)
            {
                case 1: // Checks and performs calculations for the square method
                cout << "Please enter the number that you'd like to square: " ;
                cin >> user_num1 ;
                user_num2 = user_num1 * user_num1 ;
                cout << "The squared number is: " << user_num2 << endl ;
                cout << "Press the corresponding key to another menu option to perform another calculation, or 3 to exit now\n"  ;
                break ;

                case 2: // Checks and performs calculations for the square root method
                cout << "Please enter the number that you'd like to find the square of: " ;
                cin >> user_num1 ;
                user_num2 = sqrt(user_num1) ;
                cout << "The square root of your number is: " << user_num2 << endl ;
                cout << "Press the corresponding key to another menu option to perform another calculation, or 3 to exit now\n" ;
                break ;

                case 3: // Breaks loop is user is finished with their calculations
                cout << "-----Scientific Calculator-----\n" ;
                cout << "*******************************\n" ;
                cout << "1. Square" << endl ;
                cout << "2. Square Root" << endl ;
                cout << "3. Exit" << endl ;
                break ;

                default: // Outputs error if answer is not valid
                cout << "Please enter a valid option" ;
            }
        }
    }

    return 0 ;
}
