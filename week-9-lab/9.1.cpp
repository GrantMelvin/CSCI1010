//Grant Melvin
//CSCI 1010
//Lab Week 9 Assignment 2
//Create a rock paper scissor game

#include<iostream>

using namespace std ;

int main()
{
    char p1, p2 ; // player 1 and player 2 

    cout << "Please select 'r' for rock, 's' for scissors, and 'p' for paper during the game!" ;
    cout << "                   -------------------------------------                        " ;

    // O/I for player 1
    cout << "Player 1, please choose your hand: \n" ;
    cin >> p1 ;

    // O/I for player 2
    cout << "Player 2, please choose your hand: \n" ;
    cin >> p2 ;

    if(p1 == 'r' || 'R')
    {
        if(p2 == 'r' || 'R')
        {
            cout << "Draw!" ;
        }
        else if(p2 == 's' || 'S')
        {
            cout << "Player 1 wins!" ;
        }
    }
    if(p1 == 's' || 'S')
    {
        if(p2 == 's' || 'S')
        {
            cout << "Draw!" ;
        }
        else if(p2 == 'p' || 'P')
        {
            cout << "Player 1 wins!" ;
        }
    }
    if(p1 == 'p' || 'P')
    {
        if(p2 == 'p' || 'P')
        {
            cout << "Draw!" ;
        }
        else if(p2 == 'r' || 'R')
        {
            cout << "Player 1 wins!" ;
        }
            else
            {
                cout << "Player 2 wins!"
            }
    }

    return 0 ;

}
