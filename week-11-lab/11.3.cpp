// Grant Melvin
// CSCI 1010
// Lab 11.3
// Convert binary to decimal

#include<iostream>
#include<math.h>

using namespace std ; 

int main()
{
    int user_num, decimal = 0; // Declares user-defined num and final product variable
    int temp, last_num ; // calculation variables

    // O/I for question
    cout << "Please enter the binary number that you'd like to convert to decimal: \n" ;
    cin >> user_num ;

    temp = user_num ; // Number that will be manipulated in loop
    int power = 1 ; // The total that replaces 2 to the power of x for the calculations

    while(temp != 0) // Performs loop until we're done calculating
    {
        last_num = temp % 10 ; 
        temp = temp / 10 ;

        decimal += last_num * power ;

        power = power * 2 ; 
    }

    cout << decimal << " is the decimal conversion" << endl ;

    return 0 ;
}