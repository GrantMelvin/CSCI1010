// Grant Melvin
// CSCI 1010
// Practice Problem 2 - 1
// Given two binary strings, a and b, return their sum as a binary string

#include<iostream>
#include<string.h>

using namespace std ;

// Converts given binary into decimal form 
int convert(char a[])
{  
    int real_1, real_2, real_3, real_4 ;

    // Converts the binary string digits to normal digits and subtracts ASCII value
    int ia1 = a[3] - '0' ;
    int ia2 = a[2] - '0' ;
    int ia3 = a[1] - '0' ;
    int ia4 = a[0] - '0' ;

    if(ia1 == -48)
    {
        real_1 = 0 ;
    }
        else
        {
            real_1 = ia1 * 1 ;
        }
    if(ia2 == -48)
    {
        real_2 = 0 ;
    }
        else
        {
            real_2 = ia2 * 2 ;
        }
    if(ia3 == -48)
    {
        real_3 = 0 ;
    }
        else
        {
            real_3 = ia3 * 4 ;
        }
    if(ia4 == -48)
    {
        real_4 = 0 ;
    }
        else
        {
            real_4 = ia4 * 8 ;
        }

    int real_total = real_1 + real_2 + real_3 + real_4 ;

    return real_total ;
}

// Adds up given decimal numbers and converts into binary
string add(int a)
{
    // Declares variables to store binary digits
    int num1, num2, num3, num4, num5, num6 ;

    // Calculates each digit of binary from given integer
    num1 = a % 2 ;
    a = a / 2 ;

    num2 = a % 2 ;
    a = a / 2 ;

    num3 = a % 2 ;
    a = a / 2 ;

    num4 = a % 2 ;
    a = a / 2 ;

    num5 = a % 2 ;
    a = a / 2 ;

    num6 = a % 2 ;
    a = a / 2 ;
    
    // Converts each integer into a string
    string print_1 = to_string(num1) ;
    string print_2 = to_string(num2) ;
    string print_3 = to_string(num3) ;
    string print_4 = to_string(num4) ;
    string print_5 = to_string(num5) ;
    string print_6 = to_string(num6) ;

    //rearranges the string to make sense in binary form
    string sum = print_6 + print_5 + print_4 + print_3 + print_2 + print_1 ;

    return sum ;
}

int main()
{
    string a, b ; // user-entered variables

    int a_int, b_int, sum_int;

    // O/I for two binary strings
    cout << "Please enter the binary strings, up to 4 digits, that you'd like to add together: \n" ;
    cin >> a >> b ;

    // Gathers the length of the binary strings and stores into length_a and length_b
    int length_a = a.length() ;

    int length_b = b.length() ;

    // Creates an empty character array the same length as a and b
    char a_array[length_a + 1] ;

    char b_array[length_b + 1] ;

    // Transfers the user-entered strings into the empty array
    strcpy(a_array, a.c_str()) ;

    strcpy(b_array, b.c_str()) ;

    // Converts user-entered strings into decimal numbers
    a_int = convert(a_array) ;
    
    b_int = convert(b_array) ;

    // Adds the decimal numbers together
    sum_int = a_int + b_int ;

    // Outputs answer
    cout << "The sum of these two binary integers is: " << add(sum_int) << endl;

    return 0 ;
}