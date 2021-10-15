//Grant Melvin
//CSCI1010
//Lab 7-2
//Write a program to determine the amount of inidividual numbers in a number

#include<iostream>

using namespace std ;

int main()
{
    int num ; //user-entered variable

    //O/I for number
    cout << "Please enter a number between that you'd like to find the # of individual digits: \n" ;
    cin >> num ;

    //if-else statement to determine number of digits
    if(num <= 9){
        cout << "The number has one digit! \n" ;
    }
        else if(num >= 10 && num <= 99){
            cout << "The number has two digits! \n" ;
        }
            else if(num >= 100 && num <= 999){
                cout << "The number has three digits! \n" ;
            }
                else{
                    cout << "The number has four digits! \n" ;
                }
    return 0 ;
}