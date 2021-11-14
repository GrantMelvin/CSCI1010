// Grant Melvin
// Binary Search Algorithm Practice
#include<iostream>

using namespace std ; 

int binary_search(int list[], int item, int counter)
{
    // Variables used to determine range that we are parsing through on each iteration
    int low = 0 ;
    int high = counter - 1;

    // Variables used to determine if current element being analyzed is the item that we want
    int guess, mid ;

    while(low <= high)
    {
        // Reassigns mid value to center of range being looked at
        mid = ((low + high)/2) ;

        // Restates the guess as the middle of the range
        guess = list[mid] ;

        if(guess == item)
        {
            return mid ;
        }

        // Moves range down in totality
        if(guess > item)
        {
            high = mid - 1 ;

        }

        // Moves range up in totality
        else
        {
            low = mid + 1 ;

        }

    }

    return 0 ;

}


int main()
{
    // Creates a list of 100 elements that all = 0
    const int MAX = 100 ;
    int list[MAX] = {0} ;

    int item, counter = 0 ; // Variables used to find the correct item within the list

    // O/I for list 
    cout << "Please enter the list of elements that you'd like to binary search through: \n" ;
    cout << "Enter 'O' When you are done entering your list.\n" ;
    for(int i = 0 ; i < MAX ; i++ )
    {
        cin >> list[i] ;

        int num = list[i] ;

        if(num != 0)
        {
            counter++ ;
        }
        else
        {
            break ;
        }

    }
    
    // O/i for item being searched
    cout << "Please enter the item that you are searching for within the list: \n" ;
    cin >> item ;

    // Calculates where the answer is
    int answer = binary_search(list, item, counter) ;

    // Outputs answer
    cout << "The element of your answer is: " << answer << endl;


    return 0 ;
}
