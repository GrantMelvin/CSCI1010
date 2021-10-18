//Grant Melvin
//CSCI 1010
//Lab Week 9 Assignment 2
//Create a rock paper scissor game

#include<iostream>

using namespace std ;

int main()
{
    char p1, p2 ; // player 1 and player 2 

    cout << "Please select 'r' for rock, 's' for scissors, and 'p' for paper during the game!\n" ;
    cout << "                   -------------------------------------                        \n" ;

    // O/I for player 1
    cout << "Player 1, please choose your hand: \n" ;
    cin >> p1 ;

    // O/I for player 2
    cout << "Player 2, please choose your hand: \n" ;
    cin >> p2 ;

    // Chooses winner if player 1 is rock
    if(p1 == 'r' || p1 == 'R')
    {
        if(p2 == 's' || p2 == 'S')
        {
            cout << "Player 1 wins!\n" ;
        }
        else if(p2 == 'r' || p2 == 'R')
        {
            cout << "Draw!\n" ;
        }
        else if(p2 == 'p' || p2 == 'P')
        {
            cout << "Player 2 wins!\n" ;
        }
    }

        // Chooses winner if player 1 is scissors
        if(p1 == 's' || p1 == 'S')
        {
            if(p2 == 'p' || p2 == 'P')
            {
                cout << "Player 1 wins!\n" ;
            }
            else if(p2 == 's' || p2 == 'S')
            {
                cout << "Draw!\n" ;
            }
            else if(p2 == 'r' || p2 == 'R')
            {
                cout << "Player 2 wins!\n" ;
            }
        }

            // Chooses winner if player 1 is paper
            if(p1 == 'p' || p1 == 'P')
            {
                if(p2 == 'r' || p2 == 'R')
                {
                    cout << "Player 1 wins!\n" ;
                }
                else if(p2 == 'p' || p2 == 'P')
                {
                    cout << "Draw!\n" ;
                }
                else if(p2 == 's' || p2 == 'S')
                {
                    cout << "Player 2 wins!\n" ;
                }
            }

                // Error message in case invalid options are chosen by user
                if(p1 != 'r' && p1 != 's'&& p1 != 'p' && p1 != 'R' && p1 != 'S' && p1 != 'P' )
                {
                    cout << "Please enter a valid option!(r,p, or s)!\n" ;
                }
                else if(p2 != 'r' && p2 != 's'&& p2 != 'p' && p2 != 'R' && p2 != 'S' && p2 != 'P' )
                {
                    cout << "Please enter a valid option!(r,p, or s)!\n" ;
                }

            return 0 ;

}
