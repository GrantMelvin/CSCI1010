//Grant Melvin
//CSCI1010
//Additional Problems 1-1
//Translates a number between 0-32767 to octal(base-8) with 5 numbers being displayed

#include<iostream>
#include<math.h>

using namespace std ;

int main()
{

    int user_num ; //user-entered variable
    double user_num1, user_num2, user_num3, user_num4, user_num5 ; //used to calculate remainder
    double octal_num1, octal_num2, octal_num3, octal_num4, octal_num5 ; //used to order output  

    //O/I of user-entered variable
    cout << "Please enter the number between 0 and" ;
    cout << " 32767 that you'd like to convert to base-8: \n" ;
    cin >> user_num ;

    //checks to see if number is in range
    if(user_num > 32767)
    {
        cout << "Please enter a number in the range given!\n" ;

    }
    else if(user_num < 0)
    {
        cout << "Please enter a number in the range given!\n" ;

    }

    //Calculates answer
    user_num1 = user_num % 8 ;
    octal_num1 = user_num1 ;
    user_num /= 8 ;

    user_num2 = user_num % 8 ;
    octal_num2 = user_num2 ;
    user_num /= 8 ;

    user_num3 = user_num % 8 ;
    octal_num3 = user_num3 ;
    user_num /= 8 ;

    user_num4 = user_num % 8 ;
    octal_num4 = user_num4 ;
    user_num /= 8 ;

    user_num5 = user_num % 8 ;
    octal_num5 = user_num5 ;
    user_num /= 8 ;

    //Outputs final answer
    cout << "Your base number is: \n" ;
    cout << octal_num5 << octal_num4 << octal_num3 << octal_num2 <<  octal_num1 << endl ;

    return 0 ;
}