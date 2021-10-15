#include<iostream>

using namespace std;

int main()
{
//declares variables
    double quarters, dimes, nickels;
    double total_quarters, total_dimes, total_nickels, total_money;

//outputs & calculates quarters 
    cout << "How many quarters do you have? \n";
    cin >> quarters;
    total_quarters = quarters * .25;

//outputs & calculates dimes
    cout << "How many dimes do you have? \n";
    cin >> dimes;
    total_dimes = dimes * .10;

//outputs & calculates nickels
    cout << "How many nickels do you have? \n";
    cin >> nickels;
    total_nickels = nickels * .05;

//calculates total
    total_money = (total_quarters + total_dimes + total_nickels) * 100;

//prints total
    cout << "You have " << total_money << " cents\n";

    return 0;
}