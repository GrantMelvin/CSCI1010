//Grant Melvin
//CSCI1010
//Assignment 4-2
//Write a program to print the relationship of two numbers that the user enters
#include<iostream>

using namespace std ;

int main()
{
    int user_num1, user_num2 ; //user-entered variables to compare

    //O/I for user-entered variables
    cout << "Please enter the two integers that you'd like to evaluate: \n" ;
    cin >> user_num1 >> user_num2 ;

    //checks relationship between the two variables
    if(user_num1 > user_num2)
    {
        cout << user_num1 << " is larger than " << user_num2 << endl ;
    }
    else if(user_num2 > user_num1)
    {
        cout << user_num2 << " is larger than " << user_num1 << endl ;
    }
    else
    {
        cout << user_num1 << " is equal to " << user_num2 << endl;
    }

    return 0 ;
}