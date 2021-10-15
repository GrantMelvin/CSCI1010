#include<iostream>
#include<math.h>

using namespace std ;

int main()
{
    double temperature, velocity, wind_chill ;

    cout << "Please enter the current temperature: " ;
    cin >> temperature ;

    cout << "Please enter the current wind speed velocity: " ;
    cin >> velocity ;

    wind_chill = 35.74 + (0.6215 * temperature) + ((0.4275* temperature) - 35.75) * pow(velocity, .16) ;

    cout << "The effective temperature is: " << wind_chill << endl;

    return 0 ;
}