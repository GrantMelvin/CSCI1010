//Grant Melvin
//CSCI1010
//Additional Problems 1-3
//Converts user-entered roman numerals into whole numbers

#include<iostream>
#include<math.h>
#include<string>
#include<cstring>

using namespace std ;

//function to convert the ASCII-value number into the decimal value
int digit(int a)
{
    if(a == 25){
            a = 1 ;
        }
        else if(a == 38){
            a = 5 ;
        }
        else if(a == 40){
            a = 10 ;
        }
        else if(a == 28){
            a = 50 ;
        }
        else if(a == 19){
            a = 100 ;
        }
        else if(a == 20){
            a = 500 ;
        }
        else if(a == 29){
            a = 1000 ;
        }
        else{
            a = 0 ;
        }

        return a ;

}

//function to add all of the digits and account for roman numeral conversions
int add(int a, int b, int c, int d)
{
    int x, y, z ;
    int total ;

    if(a == 1 && b == 5)
        {
        //converts IV to 4 
        x = 4 ;
        }else if(a == 1 && b == 10)
            {
            //converts IX to 9
             x = 9 ;
            }else if(a == 10 && b == 50)
                {
                //converts XL to 40
                x = 40 ;
                }else if(a == 10 && b == 100)
                    {
                    //converts XC to 90
                    x = 90 ;
                    }else if(a == 100 && b == 500)
                        {
                        //converts CD to 400
                        x = 90 ;
                        }else if(a == 100 && b == 1000)
                            {
                             //converts CM to 900
                            x = 900 ;
                             }else
                              {
                                 //if there are no conversions
                                 x = a + b ;
                                }


    if(b == 1 && c == 5)
        {
        //converts IV to 4 
        y = 4 ;
        }else if(b == 1 && c == 10)
            {
             //converts IX to 9
             y = 9 ;
            }else if(b == 10 && c == 50)
                {
                  //converts XL to 40
                 y = 40 ;
                 }else if(b == 10 && c == 100)
                    {
                    //converts XC to 90
                     y = 90 ;
                    }else if(b == 100 && c == 500)
                       {
                        //converts CD to 400
                        y = 400 ;
                        }else if(b == 100 && c == 1000)
                            {
                             //converts CM to 900
                             y = 900 ;

                             }else
                                 {
                                //if there are no conversions
                                y = b + c ;
                                }


    if(c == 1 && d == 5)
        {
        //converts IV to 4 
        z = 4 ;
        }else if(c == 1 && d == 10)
            {
            //converts IX to 9
            z = 9 ;
            }else if(c == 10 && d == 50)
                {
                //converts XL to 40
                z = 40 ;
                }else if(c == 10 && d == 100)
                    {
                    //converts XC to 90
                    z = 90 ;
                    }else if(c == 100 && d == 500)
                        {
                        //converts CD to 400
                        z = 400 ;
                        }else if(c == 100 && d == 1000)
                            {
                            //converts CM to 900
                            z = 900 ;
                            }else
                                {
                                //if there are no conversions
                                z = c + d ;
                                }
    

    if(x == 4 || x == 9 || x == 40 || x == 90 || x == 400 || x == 900)
    {
        total = x + z ;
    }
        else if(y == 4 || y == 9 || y == 40 || y == 90 || y == 400 || y == 900)
        {
            x = a ;
            z = d ;
            total = x + y + z ;
         }
            else if(z == 4 || z == 9 || z == 40 || z == 90 || z == 400 || z == 900)
                {
                    total = x + z ;
                }
                else
                    {
                        total = x + z ;
                    }

    return total ;
}

int main()
{

    string roman_num ; //user-entered roman numeral value

    //O/I for roman numeral question
    cout << "Please enter a roman numeral up to 4-digits that you'd like to translate into a whole number: \n" ;
    cin >> roman_num ;  

    //declares and initializes variable that contains the amount of indices in the user-entered variable
    int length_array = roman_num.length() ;

    //creates an empty char array using the length of user-entered variable gathered from previous statement
    char length_char[length_array + 1] ;

    //copies the data of the user-entered variable to the empty character array (length_char)
    strcpy(length_char, roman_num.c_str()) ;

    //converts each index of the char array into an int and subtracts the base ASCII base-value to get smaller, easier to deal with, numbers
    int one = (int)length_char[0] - 48 ;
    int two = (int)length_char[1] - 48 ;
    int three = (int)length_char[2] - 48 ;
    int four = (int)length_char[3] - 48 ;

    //declares and initializes values that will be used for add function that contain decimal values of user-entered numbers from digit function
    int real_num1 = digit(one) ;
    int real_num2 = digit(two) ;
    int real_num3 = digit(three) ;
    int real_num4 = digit(four) ;

    //output that calls on the add function to calculate answer
    cout << "The number you are looking for is: " << add(real_num1, real_num2, real_num3, real_num4) << endl;
    

    return 0 ;
}