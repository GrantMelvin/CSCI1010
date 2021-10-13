// Grant Melvin
// CSCI1010 - 001
// Bonus Question - Week 6 Lab
// Calculate inflated price of an item when given a period of time and rate of inflation
#include<iostream>
#include<string>

using namespace std;

int main()
{
    //declares variables for calculations and item 
    double roi, real_roi, year, price, counter, answer ;
    string item ;

    //O/I of item
    cout << "What item would you like to calculate the future price of? " ;
    cin >> item ;

    //O/I of price
    cout << "What is the current price of " << item << "? ";
    cin >> price ;

    //O/I of roi
    cout << "In whole number form, what is the inflation percentage of " << item << " per year? " ;
    cin >> roi ;

    //O/I of year
    cout << "Lastly, how many years into the future would you like to calculate? " ;
    cin >> year ;

    //Loop for roi and price
    counter = 0 ;
    real_roi = roi / 100 ;

    while(counter < year){
        price = price + (price * real_roi) ;
        counter++ ;

    }

    //Initializes answer
    answer = price ;

    //Outputs first part of answer statement
    cout << "The price of " << item << " in " << year << " years is $" ;

    //Sets shown decimal places for answer to 2
    cout.setf(ios::fixed) ;
	cout.setf(ios::showpoint) ;
    cout.precision(2) ;

    //Outputs second part of answer statement
    cout << answer << endl ;

    return 0 ;
}