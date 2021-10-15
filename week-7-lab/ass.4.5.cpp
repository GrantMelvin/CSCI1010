//Grant Melvin
//CSCI1010
//Assignment 4-5
//Write a program to convert a letter grade into a corresponding information statement 
#include<iostream>

using namespace std ;

int main()
{

    char grade ; //user-entered variable

    //O/I for grade
    cout << "Please enter the grade you've recieved: " ;
    cin >> grade ;

    //switch statement for equating grade to description
    switch(grade)
    {
        case 'a' :
            cout << "Excellent!\n" ;
            break ;
        case 'A' :
            cout << "Excellent!\n" ;
            break ;
        case 'b' :
            cout << "Good!\n" ;
            break ;
        case 'B' :
            cout << "Good!\n" ;
            break ;
        case 'c' :
            cout << "Average\n" ;
            break ;
        case 'C' :
            cout << "Average\n" ;
            break ;
        case 'd' :
            cout << "Poor\n" ;
            break ;
        case 'D' :
            cout << "Poor\n" ;
            break ;
        case 'f' :
            cout << "Failing\n" ;
            break ;
        case 'F' :
            cout << "Failing\n" ;
            break ;
        default :
            cout << "Please enter a valid grade." ;
            break ;

    }
    return 0 ;
}