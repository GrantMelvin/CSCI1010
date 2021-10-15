#include<iostream>
#include<math.h>

using namespace std ;

int main()
{
    //declares variables
    double x, y, real_x, real_y ;
    double answer ;
    
    //o/i x and y variables
    cout << "Please enter the value for x and y, with an enter-key between, that you'd like to find the euclidian distance of: \n" ;
    cin >> x >> y ;

    //calculates euclidian distance
    real_x = x * x;
    real_y = y * y;
    answer = sqrt(real_x + real_y) ;

    //outputs euclidian distance
    cout << "The euclidian distance of " << x << " and " << y << " is " << answer << endl;

    return 0 ;
}