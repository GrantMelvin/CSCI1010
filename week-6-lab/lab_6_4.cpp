#include<iostream>

using namespace std;

int main()
{
//declaring variables
    double money;
    int result;

//outputs question
    cout << "How much money would you like to seperate into the smallest bills? \n";
    cin >> money;

    result = money;

//calculates and outputs bills
    cout << "Number of $20 dollar bills: \n" << result / 20 << endl;
    result = result % 20;

    cout << "Number of $10 dollar bills: \n" << result / 10 << endl;
    result = result % 10;

    cout << "Number of $5 dollar bills: \n" << result / 5 << endl;
    result = result % 5;
    
    cout << "Number of $1 dollar bills: \n" << result / 1<< endl;
    result = result % 1;

    return 0;
}