#include<iostream>

using namespace std ; 


int exp(int x, int y, int z)
{   

    int normal = x ;

    for(int i = 0 ; i < y ; i++)
    {
        x = (normal * x) % z ;
        //cout << x << endl;
    }

    return x ;

}

int main()
{

    int num, exponent, mod ;

    cout << "Please enter the number, exponent, and mod you want to work with: \n" ;
    cin >> num >> exponent >> mod ;

    cout << "Your answer is: " << exp(num, exponent, mod) << endl ;

    return 0 ;
}