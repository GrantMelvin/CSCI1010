// Grant Melvin
// CSCI 1010
// Lab 13.1
/* 
Write a program to reverse the elements in the following array (you should operate on the same array):
A = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55}
*/
#include<iostream>

using namespace std ; 

int main()
{
    int A[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55} ;

    for(int i = 9 ; i >= 0 ; i-- )
    {
        cout << A[i] << endl ;
    }

    return 0 ;

}