// Testing recursion
#include<iostream>

using namespace std ; 

int fact(int x)
{
    if(x == 1)
    {
        return 1 ;
    }
    else
    {
        return x * fact(x - 1) ;
    }
}

void countdown(int i)
{
    cout << i << endl;

    if(i <= 0)
    {
        return ;
    }
    else
    {
        countdown(i - 1) ;
    }
}

int main()
{
    int user_num ;

    /*cout << "Please enter the number that you'd like to countdown from: \n" ;
    cin >> user_num ;

    countdown(user_num) ;
    */
   
   cout << "Please enter the num that you'd like to find the factorial of: \n" ;
   cin >> user_num ;

    cout << fact(user_num) << endl;

   return 0 ;
}