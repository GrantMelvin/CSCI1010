
//Grant Melvin
//CSCI 1010
//Class Practice
//Cashier checkout system with discount


#include<iostream>

using namespace std ;

int main()
{
    double cost ; // user-entered price of products
    double discount, total ; // calculations by if-statement

    //O/I of initial cost
    cout << "Please enter the total price of your shopping trip: " ;
    cin >> cost ;

    //determines discount percentage
    if (cost >= 500){

        discount = .25 ;
    }
    else{

        discount = .15 ;
    }

    //calculates and displayes total cost
    total = cost - (cost * discount) * 1.08 ;

    cout << "The final cost of your shopping trip is: " << total << endl ;

    return 0 ;
}