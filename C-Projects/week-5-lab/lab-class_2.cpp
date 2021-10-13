#include<iostream>

using namespace std;

int main()
{
    //declares variables
    double total1, total2, tip, realtip ;
    int people ;

    //i/o of price of bill
    cout << "Please enter the price of the bill: " ;
    cin >> total1 ;

    //i/o of tip percentage
    cout << "Please enter the percentage of the bill you'd like to leave as a tip: " ;
    cin >> tip ;

    //just replaces whole number with decimal place
    realtip = tip / 100 ;

    //i/o of # of people in party
    cout << "Please enter the amount of people in your party that are splitting the bill: " ;
    cin >> people ;

    //fixes decimal places to 2
    cout.setf(ios::fixed) ;
	cout.setf(ios::showpoint) ;
    cout.precision(2) ;

    //calculates total per person
    total2 = total1 + (total1 * realtip) ;
    total2 /= people ;

    //outputs total per person
    cout << "The price per person of your meal is: " << total2 << endl;

    return 0;
}