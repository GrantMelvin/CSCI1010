// Grant Melvin
// CSCI 1010
// Assignment 6.3
// Riddler's Problem

#include<iostream>
#include<vector>

using namespace std ; 

int main()
{
    for(int a = 0; a < 10; a++)
    {
        for(int b = 0 ; b<10 ; b++)
        {
            for(int c = 0 ; c < 10 ; c++)
            {
                for(int d = 0 ; d < 10 ; d++)
                {
                    if(a == (c * 3))
                    {
                        if((a + b + c + d) % 2 != 0 )
                        {
                            if((a + b + c + d) == 27)
                            {
                                if (a != b && a != c && a != d && b != c && b != d && c != d)
                                {
                                    cout << "The address is: " << a << b << c << d << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0 ;
}