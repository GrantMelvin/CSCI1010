// Grant Melvin
// CSCI1010
// 14.2
/*
write a function that computes the value of the following polynomial: 
3x5 + 2x4 – 5x3 – x2 + 7x – 6 
Write the main function to ask the user to enter a value for x, calls the function to 
compute the value of the polynomial, and then displays the value returned by the 
function 
*/

#include <iostream>
#include <math.h>

using namespace std ; 

int poly(int x)
{
    // returns desired equation with user_num in it
    return (3 * pow(x, 5)) + (2 * pow(x, 4)) - (5 * pow(x,3)) - (pow(x, 2)) + (7 * x) - 6  ;
}


int main()
{
    int user_num ; // User-defined variable

    // O/I for user-defined variable
    cout << "Please enter the integer to use in the following equation: \n" ;
    cout << "3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 \n" ; 

    cin >> user_num  ; 

    // Output for final answer
    cout << "The answer is: " << poly(user_num) << endl ;
    return 0 ;
}