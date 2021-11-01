// Grant Melvin
// CSCI 1010
// Lab 11.4
// Prints all even squares between 0 and the number given

#include<iostream>

using namespace std ; 

int main()
{
    int user_num ; // Declares user-defined variable 
    int total = 0 ; // Declares total that is what we are calculating 

    // O/I for question
    cout << "Please enter the max amount to stop squaring: " ;
    cin >> user_num ;

    for(int i = 0 ; i <= user_num ; i ++) // i is acting as every number between 0 and user_num
    {
        if(i % 2 != 0) // Only triggers if I is an odd number, otherwise ignores the current iteration
        {
            total += i ; // Adds I to the total to be calculated
            
            if(total % 2 == 0 && total <= user_num) // Tests the total to be even and less than user_num
            {
                cout << total << endl; // Outputs the number we want 
            }
        }
    }

    return 0 ;
}