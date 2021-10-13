//Grant Melvin
//CSCI1010
//Assignment 4-1
//Write a program to ask the user to enter a lower case character and print out if the char is a vowel or not
#include<iostream>

using namespace std ;

int main()
{
    char user_char ; //user-entered variable

    //O/I of character variable
    cout << "Please enter the character that you'd like to check for 'vowel-ness': " ;
    cin >> user_char ;

    //checks to see if character is vowel
    if(user_char == 'a' || user_char == 'A' || user_char == 'e'|| user_char == 'E' || user_char == 'u' || user_char == 'U' || user_char == 'i' || user_char == 'I' || user_char == 'o' || user_char == 'O')
    {

        cout << "Your character is a vowel!\n" ;
    }
        else
        {
        cout << "Your character is not a vowel!\n" ;
        }

    return 0 ;
}