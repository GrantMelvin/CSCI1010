// Grant Melvin
// CSCI 1010
// Lab 11.2
// Find the number of digits in an integer

#include<iostream>

using namespace std ; 

int main()
{
    int user_num, counter = 0 ; // Declares some variables to count and stuff

    cout << "Please enter an integer, followed by a character when your'e done: " ; // Outputs the question
    
    cin >> user_num ; // Input

    while(user_num != 0) // Loops through input and divides by 10 while updating value and adding to counter
    {
        user_num /= 10 ; 

        counter ++ ;
    }

    cout << counter << " numbers" << endl ; // Outputs answer

    return 0 ;
}