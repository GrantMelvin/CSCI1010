//Grant Melvin
//CSCI1010
//Additional Problems 1-2
//Find if the user-entered number is a palindrome

#include<iostream>
#include<string>

using namespace std; 

//function that allows two seperate digits to be placed next to eachother 
int concat(int a, int b)
{
    //converts integer to string
    string i1 = to_string(a) ;
    string i2 = to_string(b) ;

    //concatenates string
    string i = i1 + i2 ;

    //converts combined string back to integer
    int c = stoi(i) ;

    //returns it for the main function to use
    return c ;

}

int main()
{
    
    int user_num ; //user-entered variable
    int pal_num1, pal_num2, pal_num3, conc_num ; //calculation variables

    //O/I for user-entered variable
    cout << "Please enter the number you'd like to check for the palindrome quality: " ;
    cin >> user_num ;

    //finds reversed digits
    pal_num1 = user_num % 10 ;
    pal_num2 = user_num / 10 ;

    //uses function to change data type to string so that they can concatenate and not add
    conc_num = concat(pal_num1,pal_num2) ;

    //checks for palindrome quality
    if(conc_num == user_num)
    {

        cout << "It is a palindrome! \n" ;

    }
    else
    {

        cout << "It is not a palindrome! \n" ;

    }

    return 0;
}