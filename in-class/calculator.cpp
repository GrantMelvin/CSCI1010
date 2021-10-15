//Grant Melvin
//CSCI1010
//In-class assignment
//Create a calculator for basic addition, subtraction, division, and multiplication with a basic menu beforehand

#include<iostream>
#include<math.h>
#include<string.h>

using namespace std ;

int main()
{
    int decision ; //user-entered variable to determine calculation method
    double user_num1, user_num2 ; //user-entered variable to perform calculations 

    //outputs the calculator menu
    cout << endl ;
    cout << endl ;
    cout << "       What calculation would you like to perform?\n" ;
    cout << "[Please enter the number for the corresponding calculation]\n " ;
    cout << "---------------------------------------------------------\n " ;
    cout << "1. Addition\n " ;
    cout << "2. Subtraction\n " ;
    cout << "3. Multiplication\n " ;
    cout << "4. Division\n " ;
    cout << "---------------------------------------------------------\n " ;
    cin >> decision ;


    //asks for which numbers to perform
    if(decision == 1){

        //checks for addition
        cout << "Please enter two numbers would you like to add: \n" ;
    }

        //checks for subtraction
        else if(decision == 2){
            cout << "Please enter the two numbers would you like to subtract: \n" ;
        }
        
        //checks for multiplication
        else if(decision == 3){
            cout << "Please enter the two numbers would you like to multiply: \n" ;
        }

        //checks for division
        else if(decision == 4){
            cout << "Please enter the two numbers would you like to divide: \n" ;
        }

        //error message
        else{
            cout << "Calculation not found, please try again\n" ;
        }


    //takes input from user for calculatory numbers
    cin >> user_num1 >> user_num2 ;


    //performs and outputs addition
    if(decision == 1){
        cout << user_num1 + user_num2 << " is your answer!\n" ;
    }
    
        //performs and outputs subtraction
        else if(decision == 2){
            cout << user_num1 - user_num2 << " is your answer!\n" ;
        }

        //performs and outputs multiplication
        else if(decision == 3){
            cout << user_num1 * user_num2 << " is your answer!\n" ;
        }

        //performs and outputs division
        else if(decision == 4){
            cout << user_num1 / user_num2 << " is your answer!\n" ;
        }



    return 0 ;
}