//Grant Melvin
//CSCI1010
//Lab 7-3
//Write a program to determine the amount of inidividual numbers in a number

#include<iostream>

using namespace std ;

int main()
{
    char gender ; //user-entered variable
    double weight, height ; //user-entered variable
    int age ; //user-entered variable

    double bmr ; //calculated variable

    int choc_bar = 230 ; //static variable

    //O/I for questioning process
    cout << "Please enter your gender(M or F): \n" ;
    cin >> gender ;

    cout << "Please enter your weight in pounds: \n" ;
    cin >> weight ;

    cout << "Please enter your height in inches: \n" ;
    cin >> height ;

    cout << "Please enter your age: \n" ;
    cin >> age ;

    //if-statement to determine calculations used
    if(gender == 'M' || gender == 'm'){
        bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age) ; 
    }
        else if(gender == 'F' || gender == 'f'){
            bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age) ;     
        }
            else{
                cout << "Couldn't identify gender, please try again." ;
            }

    //reduces decimal place to 1
    cout.setf(ios::fixed) ;
	cout.setf(ios::showpoint) ;
    cout.precision(1) ;

    //output and calculation of answer 
    cout << "You can eat " << bmr / choc_bar << " chocolate bars! \n" ;

    return 0 ;
}