// Grant Melvin
// CSCI 1010
// Assignment 6.3
// Riddler's Problem

#include<iostream>
#include<vector>

using namespace std ; 

int main()
{
    for(int a = 0; a < 10; a++) // Loops through a for 1-9
    {
        for(int b = 0 ; b<10 ; b++) // Loops through b for 1-9
        {
            for(int c = 0 ; c < 10 ; c++) // Loops through c for 1-9
            {
                for(int d = 0 ; d < 10 ; d++) // Loops through d for 1-9
                {
                    if(a == (c * 3)) // Tests if thousands place digit is 3x the tens place digit
                    {
                        if((a + b + c + d) % 2 != 0 ) // Tests if it is an odd number
                        {
                            if((a + b + c + d) == 27) // Tests if the sum of digits is equal to 27
                            {
                                cout << "The address is: " << a << b << c << d << endl; // Outputs address
                                
                            }
                        }
                    }
                }
            }
        }
    }

    return 0 ;
}