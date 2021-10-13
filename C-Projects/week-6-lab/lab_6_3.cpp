#include<iostream>

using namespace std;

int main()
{
    //declares variables, the o_ indicates that it will be used in the output calculation
    int year, o_year, month, o_month, day, o_day, x ;
    
    //O/I for year
    cout << "Please enter a four-digit number for year: " ;
    cin >> year ;

    //O/I for month
    cout << "Please enter a number 1-12 for month: " ;
    cin >> month ;

    //O/I for day
    cout << "Please enter a number 1-31 for day: " ;
    cin >> day ;

    //Calculates output
    o_year = year - (14 - month) / 12 ; 
    x = o_year + o_year / 4 - o_year / 100 + o_year /400 ;
    o_month = month + 12 * ((14 - month) / 12) - 2 ;
    o_day = (day + x + (31 * o_month) / 12) % 7 ;

    //Outputs answer
    cout << "The day of the week is: " << o_day << endl ;

    return 0;
}