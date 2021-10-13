//Grant Melvin
//CSCI 1010
//Lab Week 8 Assignment 1
/*Write a program to compute the interest due, total amount due, and the minimum payment for a revolving credit account. 
The program accepts the account balance as input, then adds on the interest to get the total amount due. The rate schedules are the following: 
The interest is 1.5 percent on the first $1,000 and 1 percent on any amount over that. The minimum payment is the total amount due if that is $10 or less; 
otherwise, it is $10 or 10 percent of the total amount owed, whichever is larger.*/

#include<iostream>

using namespace std ;

int main()
{
    int balance ;

    cout << "Please enter the account balance: " ;
    cin >> balance ;

    double interest, min_pmt ;

    if(balance >= 1000)
    {
        interest = (balance % 1000) * .015 ;
        interest = interest + (balance - 1000) * .01 ;
    }
    else
    {
        interest = (balance) * .015 ;
    }

    double amt_due = balance + interest ;

    if(amt_due <= 10)
    {
        min_pmt = amt_due ;
    }
    else if(amt_due * .10 < 10)
    {
        min_pmt = 10 ;
    }
    else
    {
        min_pmt = amt_due * .10 ;
    }

    cout << "Account Balance: " << balance << endl ;
    cout << "Interest Amount: " << interest << endl ;
    cout << "Amount Due: " << amt_due << endl ;
    cout << "Minimum Payment: " << min_pmt << endl ;


    return 0 ;
}