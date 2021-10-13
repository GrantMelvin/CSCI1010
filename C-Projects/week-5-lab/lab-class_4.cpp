#include<iostream>

using namespace std;

int main()
{
//declaring variables
    int cheeseburger, espresso;
    double cheeseburger_total, espresso_total, price_with_tax, total_price, tax;

//cheeseburger input and output
    cout << "How many cheeseburgers would you like to order? \n";
    cin >> cheeseburger;
    cheeseburger_total = cheeseburger * 5.89;

//espresso input and output
    cout << "How many cups of espresso would you like to order? \n";
    cin >> espresso;
    espresso_total = espresso * 3.99;

//initializes tax variable
    tax = .07;
    
//calculates total price
    total_price = cheeseburger_total + espresso_total;

//calculates total price including tax variable
    price_with_tax = total_price + (total_price * tax);

//outputs total
    cout << "Your total is: " << price_with_tax << endl;

    return 0;

}