// Grant Melvin
// CSCI 1010
// Lab Week 10 Assignment 2
// Calculator to find the GCD of 2 user-entered variables

#include<iostream>
#include<math.h>

using namespace std ;

int main()
{
    int usernum1, usernum2 ; // User-defined variables
    int usernum3 ; // Variable used for calculation of GCD

    // O/I for integers and question
    cout << "Please enter the 2 integers that you'd like to find the greatest common denominator for: \n" ;
    cin >> usernum1 >> usernum2 ; 

    // Loops through calculation to find GCD until it finds it
    while (1)
    {
        if(usernum2 != 0) // Performs calculation to find GCD
        {
            usernum3 = usernum2 ;

            usernum2 = usernum1 % usernum2 ;

            usernum1 = usernum3 ;
        }
        
        else // Will output GCD once it has been calculated
        {
            cout << "The GCD is: " << usernum1 << endl;

            break ;           
        }
    }
    return 0 ;
}
