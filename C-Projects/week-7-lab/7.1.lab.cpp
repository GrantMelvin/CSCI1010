//Grant Melvin
//CSCI1010
//Lab 7-1
//Write a program to determine if the triangle can be formed by three angles

#include<iostream>

using namespace std ; 

int main()
{
    int angle1, angle2, angle3 ; //user-entered variables

    //O/I of question
    cout << "Please enter the three angles that you'd like to test for 'triangleness': \n" ;
    cin >> angle1 >> angle2 >> angle3 ;

    //if-statement to determine if angles have the property of triangle
    if(angle1 + angle2 + angle3 == 180){
        cout << "You have a triangle!\n" ;
    }
        else{
            cout << "You dont have a triangle! \n" ;
        }


    return 0 ;
}