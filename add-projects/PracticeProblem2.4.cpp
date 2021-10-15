// Grant Melvin
// CSCI 1010
// Additional Problem Set 2.4
// Find the happy number :)

#include<iostream>
#include<math.h>
#include<string.h>

using namespace std ;

bool indicator ; // Indicator that is used to tell if integer is happy or not

bool convert(int a)
{

    // Converts the integer into a string
    string x = to_string(a) ;

    // Gathers the length of the integer list
    int user_numLength = x.length() ;

    // Creates an empty character array that will store our information later on
    char length_char[user_numLength] ;

    // Declares a base value for all elements of the array to 0 so we dont get funky numbers
    length_char[0] = 0 ;
    length_char[1] = 0 ;
    length_char[2] = 0 ;
    length_char[3] = 0 ;

    // Copies the values from the string over to the character array
    strcpy(length_char, x.c_str()) ;

    // Equates the characters to integers and subtracts Base-ASCII value
    int inum1 = length_char[0] - 48;
    int inum2 = length_char[1] - 48;
    int inum3 = length_char[2] - 48;
    int inum4 = length_char[3] - 48;

    // Checks if the value should be 0
    if(inum1 == -48)
    {
        inum1 = 0 ;
    }

    if(inum2 == -48)
    {
        inum2 = 0 ;
    }

    if(inum3 == -48)
    {
        inum3 = 0 ;
    }

    if(inum4 == -48)
    {
        inum4 = 0 ;
    }
    
    // Declares and Initializes total variable
    int total = ((inum1 * (inum1)) + (inum2 * (inum2)) + (inum3 * (inum3)) + (inum4 * (inum4))) ;

    // Checks if total is 1 right away
    if(total == 1)
    {
        indicator = true ;

    }

    // Formula deployed if the number isn't one right away
    else if(total != 1)
    {
        for(int i = 0 ; i < 100 ; i++)
        {
            // Converts total to string so that we can access individual characters through an array
            string z = to_string(total) ;

            // Gathers the length of the string
            int total_numLength = z.length() ;

            // Creates an empty character array 
            char length_total[total_numLength] ;

            // Declares a base value for all elements of the array to 0 so we dont get funky numbers
            length_total[0] = 0 ;
            length_total[1] = 0 ;
            length_total[2] = 0 ;
            length_total[3] = 0 ;

            // Copies the data from total over to the new string
            strcpy(length_total, z.c_str()) ;

            // Subtracts the Base-ASCII value for each index
            int rnum1 = length_total[0] - 48;
            int rnum2 = length_total[1] - 48;
            int rnum3 = length_total[2] - 48;
            int rnum4 = length_total[3] - 48;

            // Checks to see if the number should be 0
            if(rnum1 == -48)
            {
                rnum1 = 0 ;
            }

            if(rnum2 == -48)
            {
                rnum2 = 0 ;
            }

            if(rnum3 == -48)
            {
                rnum3 = 0 ;
            }

            if(rnum4 == -48)
            {
                rnum4 = 0 ;
            }

            // Calculates new total
            total = (rnum1 * rnum1) + (rnum2 * rnum2) + (rnum3 * rnum3) + (rnum4 * rnum4) ;

            // Sets indicator to true if the number is happy
            if(total == 1)
            {
                indicator = true ;
                break ;
            }

        }   
    }
       
    return indicator ;
    
}

int main()
{
    int user_num ; // user-entered variable

    // O/I for question
    cout << "Please enter a number, up to 4 digits, that you would like to find out is happy or not: \n" ;
    cin >> user_num ;

    // Function to deploy calculations
    convert(user_num) ;

    // Checks indicator used in convert function
    if(indicator == true)
    {
        cout << "True\n" ;
    }
    else
    {
        cout << "False\n" ;
    }

    return 0 ;
}