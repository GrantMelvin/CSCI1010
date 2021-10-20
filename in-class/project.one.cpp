//Grant Melvin & Todd Tose
//CSCI1010
//Project 1 
//Create a working menu that the user can order from 

#include<iostream>

using namespace std ; 

int main()
{
    int order, amount1 = 0, amount2 = 0, amount3 = 0 ;

    double quesadilla = 4.99, coffee = 2.99, pretzel = 3.99 ;

    double cost, tax ;

    

    cout << "---------Welcome to the Hungry Hippo----------\n" ;
    cout << "**********************************************\n" ;                        
    cout << "1. Quesadilla \t" << "$4.99\n" ;
    cout << "2. Coffee \t" << "$2.99\n" ;
    cout << "3. Pretzel \t" << "$3.99\n" ;
    cout << "Please enter the corresponding number for the item you'd like to purchase: \n" ;
    cout << "Press any character to stop ordering! \n" ;
    

    while(1)
    {
        if(cin >> order)
        {
            if(order == 1)
            {
                cout << "How many Quesadillas would you like? \n" ;
                cin >> amount1 ;
                cout << "Would you like anything else, or will that be all??\n" ;
            }

            else if(order == 2)
            {
                cout << "How many Coffees would you like? \n" ;
                cin >> amount2 ; 
                cout << "Would you like anything else, or will that be all??\n" ;
            }

            else if(order == 3)
            {
                cout << "How many Pretzels would you like? \n" ;
                cin >> amount3 ; 
                cout << "Would you like anything else, or will that be all??\n" ;
            }

            else
            {
                cout << "Please enter a valid option!\n" ;
            }

            cost = (quesadilla * amount1) + (coffee * amount2) + (pretzel * amount3) ;
            tax = (cost * .03) ;

        }

        else
        {
            cout.setf(ios::fixed) ;
    	    cout.setf(ios::showpoint) ;
            cout.precision(2) ;

            cout << "Your total cost is: " << cost + tax << endl ;

            break ;
        }

        
    }
    
    return 0 ;

}
