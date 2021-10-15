//Grant Melvin
//CSCI1010
//Assignment 4-3
//Write a program to state the amount of tax due based on user-entered income
#include<iostream>

using namespace std ;

int main()
{

    int income ; //user-entered variable
    double tax_due ; //calculated based off of income

    //O/I for income amount
    cout << "PLease enter your taxable income amount: " ;
    cin >> income ;

    //checks income amount and outputs amount due
    if(income < 750)
    {
        tax_due = income * .01 ;

        cout << "The tax due is: " << "$" << tax_due << endl ;
    }
    else if(income >= 750 && income < 2250)
    {
        tax_due = (income - 750) * .02  ;

        cout << "The tax due is: " << "$" << 7.5 + tax_due << endl ;       
    }
    else if(income >= 2250 && income < 3750)
    {
        tax_due = (income - 2250) * .03  ;

        cout << "The tax due is: " << "$" << 37.5 + tax_due << endl ;       
    }
    else if(income >= 3750 && income < 5250)
    {
        tax_due = (income - 3750) * .04  ;

        cout << "The tax due is: " << "$" << 82.5 + tax_due << endl ;       
    }
    else
    {
        tax_due = (income - 5250) * .05  ;

        cout << "The tax due is: " << "$" << 142.5 + tax_due << endl ;  
    }


    return 0 ;
}