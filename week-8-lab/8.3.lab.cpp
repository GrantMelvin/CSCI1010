//Grant Melvin
//CSCI 1010
//Lab Week 8 Assignment 3
//Find the largest and smallest of the four integers entered

#include<iostream>

using namespace std ;

int main()
{
    int a, b, c, d ;

    cout << "Please enter the 4 seperate digits that you'd like to find the minimum and maximum of: " << endl ;
    cin >> a >> b >> c >> d ;

    if(a > b && a > c && a > d)
    {
        cout << a << " is the largest number\n" ;
    }
        else if(b > a && b > c && b > d)
        {
            cout << b << " is the largest number\n" ;
        }
        else if(c > b && c > a && c > d)
        {
            cout << c << " is the largest number\n" ;
        }
        else if(d > a && d > b && d > c)
        {
            cout << d << " is the largest number\n" ;
        }
            else
            {
            cout << "Error. Please re-enter digits.\n" ;
            }

    if(a < b && a < c && a < d)
    {
        cout << a << " is the smallest number\n" ;
    }
        else if(b < a && b < c && b < d)
        {
            cout << b << " is the smallest number\n" ;
        }
        else if(c < b && c < a && c < d)
        {
            cout << c << " is the smallest number\n" ;
        }
        else if(d < a && d < b && d < c)
        {
            cout << d << " is the smallest number\n" ;
        }
            else
            {
                cout << "Error. Please re-enter digits.\n" ;
            }
    

    return 0 ;
}