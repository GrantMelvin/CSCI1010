#include<iostream>

using namespace std;

int main()
{
    //declares variables
    int seconds ;
    double hours, minutes ;


    cout << "Please enter the amount of seconds that you'd like to simplify: \n" ;
    cin >> seconds ;

    cout << "This would be: " ;
    cout << seconds / 3600 << " hours, " ;
    seconds = seconds % 3600 ;
    cout << seconds / 60 << " minutes, " ;
    seconds = seconds % 60;
    cout << seconds << " and seconds " << endl;



    return 0;
}