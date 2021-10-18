//Grant Melvin
//CSCI 1010
//Lab Week 8 Assignment 3
//Find the smallest integer of the 3 integers given

#include<iostream>

using namespace std ;

int main()
{
    int x, y, z ;

    cout << "Please enter the 3 integers that you'd like to find the minimum of: \n" ;
    cin >> x >> y >> z ;

    // Checks for x
    if(x < y)
    {
        if(x < z)
        {
            cout << x << " is the smallest number\n" ;
        }
        if(x > z)
        {
            cout << z << " is the smallest number\n" ;
        }
        return 0 ;
    }

        // Checks for y
        if(y < z)
        {
            if(y < x)
            {
                cout << y << " is the smallest number\n" ;
            }
            if(y > x)
            {
                cout << x << " is the smallest number\n" ;
            }
            return 0;
        }

            // Checks for z
            if(z < x)
            {
                if(z < y)
                {
                    cout << z << " is the smallest number\n" ;
                }
                if(z > y)
                {
                    cout << y << " is the smallest number\n" ;
                }
                return 0;
            }




    return 0 ;
}