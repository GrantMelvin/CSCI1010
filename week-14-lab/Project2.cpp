// Grant Melvin & Todd Rose
// CSCI 1010
// Project 2
// Student System

#include<iostream>

using namespace std ; 

// Function to output menu - Used for readability
void menu()
{
    
    cout << "*** CSCI 1010 Student Information Management System ***\n" ;
    cout << "1. Add Student\n" ;
    cout << "2. Search by ID\n" ;
    cout << "3. Grades Statistics\n" ;
    cout << "4. Remove a student\n" ;
    cout << "5. Print all students\n" ;
    cout << "6. Exit the system\n" ;

}

// Binary Search [ Shown in Grokking's Algorithms - Not copy pasted ]
int binary_search(const int list[], int item, int counter)
{
    // Variables used to determine range that we are parsing through on each iteration
    int low = 0 ;
    int high = counter ;

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
    // Sets max array value to 100 elements
    const int MAX = 100 ;

    // Declares and initilizes all arrays used in system
    int ID[MAX] = {0} ;
    int grade[MAX] = {0} ;
    string name[MAX] = {"0"} ; 

    int counter = 0 ; // Used for ID, Grade, and Name - not i

    int option ; // User-defined variable from menu option

    int search, search_index ; // Used for search feature

    double mean = 0, high = 0, low = 0 ; // Used for grade statistics feature

    for(int i = 0 ; i < MAX ; i++) // Doesnt actually allow for 100 student entries if any are removed at some point
    {
        // O/I for menu 
        cout << endl ; 
        menu() ; 
        cin >> option ;

        // Add a student
        if(option == 1)
        {
            counter++ ; // Increases counter integer BEFORE ID, Name, and Grade is assigned to that index

            // Assigns ID, Name, and Grade to the index given
            ID[counter] = counter ; 
            cout << endl ; 
            cout << "The ID for the new student is: " << ID[counter] << endl ; 

            cout << "Please enter the name of the student (LastName,FirstName): " ;
            cin >> name[counter] ;

            cout << "Please enter the grade of the student: " ;
            cin >> grade[counter] ;

        }

        // Search a student
        else if(option == 2)
        {
            // O/I for search feature
            cout << "Please enter the ID of the student: " ;
            cin >> search ; 

            // Calculates index of desired search ID using a basic binary search algorithm
            search_index = binary_search(ID, search, counter) ;

            if(search_index == 0) // Checks if the index is empty or not
            {
                cout << "Please enter a valid ID\n" ;
            }

            else // Outputs student statistics from search if not empty
            {
                cout << endl ; 
                cout << "Student ID: " << search << endl ; 
                cout << "Student Name: " << name[search_index] << endl ;
                cout << "Student Grade: " << grade[search_index] << endl ;
                cout << endl ; 
            }
        }
        
        // Grade statistics
        else if(option == 3)
        {
            // Finds average of all grades
            for(int j = 1 ; j <= counter ; j++)
            {
                mean += grade[j] ; 
            }

            mean /= counter ; 

            // Finds Highest Grade
            for(int j = 1 ; j <= counter ; j++)
            {
                if(j == 1 )
                {
                    high = grade[j] ; 
                }
                else
                {
                    if(grade[j] > high)
                    {
                        high = grade[j] ;
                    }
                }
            }

            // Finds Lowest Grade
            for(int j = 1 ; j <= counter ; j++)
            {
                if(j == 1 )
                {
                    low = grade[j] ; 
                }
                else
                {
                    if(grade[j] < low)
                    {
                        low = grade[j] ;
                    }
                }
            }
            
            // Outputs grade statistics
            cout << endl ; 
            cout << "The Highest Grade is: " << high << endl ;
            cout << "The Mean Grade is: " << mean << endl ;
            cout << "The Lowest Grade is: " << low << endl ;
            cout << endl ; 
        }

        // Remove a student
        else if(option == 4)
        {
            // O/I for desired student 
            cout << endl ; 
            cout << "Please enter the ID: " ;
            cout << endl ;
            cin >> search ; 

            // Calculates index of desired search ID using basic binary search
            search_index = binary_search(ID, search, counter) ;

            // Checks to see if ID is in available range
            if(search_index != 0)
            {
                // Displays the index removal before it actually happens
                cout << endl ; 
                cout << name[search_index] << " has been removed\n" ; 
                cout << endl ; 

                // Replaces the index with 0, essentially removing it
                ID[search_index] = 0 ;  
                name[search_index] = "0" ;
                grade[search_index] = 0 ;

                // Checks if the search index is the final element in order to properly reassign values
                if(search_index != counter)
                {
                    for(int j = 1 ; j <= counter ; j++)
                    {
                        // Moves every value back a spot so 0 isnt displayed in output
                        if(name[j+1] != "0")
                        {
                            ID[j] = ID[j+1] ;
                            grade[j] = grade[j+1] ;
                            name[j] = name[j+1] ; 
                        }
                    }

                }

                else
                {
                    // Removes a value from the array so it can be reassigned
                    counter-- ;
                }

            }

            else
            {
                // Asks for valid input
                cout << endl ; 
                cout << "Please enter valid ID! \n" ;
                cout << endl ; 
                continue ;
            }
        }

        // Lists all students
        else if(option == 5)
        {
            // Outputs student list, excluding empty ID's
            cout << endl ;
            cout << "ID\t" << "Name\t" << "Grade\t\t" << endl ;
            
            // Loops through student list to output non-0 entries
            for(int j = 1 ; j <= counter ; j++)
            {
                if(ID[j] != 0)
                {
                    cout << ID[j] << "\t" <<  name[j] << "\t" << grade[j] << "\t" << endl ;
                }
            }

            cout << endl ; 
        }

        // Exit System
        else if(option == 6)
        {
            break ;
        }

        // Invalid Response 
        else
        {
            cout << endl ; 
            cout << "Please enter a valid option! \n" ;
            cout << endl ;
        }

    }

    return 0 ;

}