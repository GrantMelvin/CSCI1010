//Grant Melvin & Todd Tose
//CSCI1010
//Project 1 
//Create a working menu that the user can order from 

#include<iostream>

using namespace std ; 

int main()
{
    // Variables used to calculate customer cost
    int order, amount1 = 0, amount2 = 0, amount3 = 0 ;

    // Item prices
    double quesadilla = 4.99, coffee = 2.99, pretzel = 3.99 ;

    // Variables used to calculate total cost per customer
    double cost, tax ; 


    

    while(1)
    {
        // O/I for menu
        cout << "---------Welcome to the Hungry Hippo----------\n" ;
        cout << "**********************************************\n" ;  
        cout << "1. Quesadilla \t" << "$4.99\n" ;
        cout << "2. Coffee \t" << "$2.99\n" ;
        cout << "3. Pretzel \t" << "$3.99\n" ;
        cout << "Please enter the corresponding number for the item you'd like to purchase: \n" ;
        cout << "Press '9' to stop ordering! \n" ;                   

        // While loop to gather customer-defined items 
        while(1)
        {                     
            // Checks if input is a number
            cin >> order ;  
            
                // Ordering process
            switch(order)
            {
                case 1: // Checks if user wants quesadillas and how many
                cout << "How many quesadillas would you like?\n" ;
                cin >> amount1 ;
                cout << "Would you like to purchase anything else, or will that be all?\n" ;
                break ;

                case 2: // Checks if user wants coffees and how many
                cout << "How many coffees would you like?\n" ;
                cin >> amount2 ;
                cout << "Would you like to purchase anything else, or will that be all?\n" ;
                break ;

                case 3: // Checks if user wants pretzels and how many
                cout << "How many pretzels would you like?\n" ;
                cin >> amount3 ;
                cout << "Would you like to purchase anything else, or will that be all?\n" ;
                break ;

                case 9: // Calculates and outputs total 
                cost = (quesadilla * amount1) + (coffee * amount2) + (pretzel * amount3) ;
                tax = (cost * .03) ;

                cout.setf(ios::fixed) ;
    	        cout.setf(ios::showpoint) ;
                cout.precision(2) ;
                    
                cout << endl ;
                cout << endl ;
                cout << endl ;
                cout << "Your total cost is: " << cost + tax << endl ;
                cout << "Thanks for your service!\n" ;
                cout << endl ;
                cout << "---------Welcome to the Hungry Hippo----------\n" ;
                cout << "**********************************************\n" ;

                // Outputs menu for next customer
                cout << "1. Quesadilla \t" << "$4.99\n" ;
                cout << "2. Coffee \t" << "$2.99\n" ;
                cout << "3. Pretzel \t" << "$3.99\n" ;
                cout << "Please enter the corresponding number for the item you'd like to purchase: \n" ;
                cout << "Press '9' to stop ordering! \n" ; 
                break ;

                default: // Checks if the user-entered number is in range given     
                cout << "Please enter a valid number!\n" ;
                break ;

            }
        }

    }

    return 0 ;

}
