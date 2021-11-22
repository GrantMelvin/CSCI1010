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

// Function used to debug
void printarray(int arr[], int counter)
{
    for(int i = 0 ; i < counter ; i++)
    {
        cout << arr[i] << endl ; 
    }
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

        // Returns index of search when found
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

// Function used to add student
void addStudent(int ID[], string name[], int grade[], int counter)
{

    // Assigns ID, Name, and Grade to the index given
    ID[counter] = counter ; 
    cout << endl ; 
    cout << "The ID for the new student is: " << ID[counter] << endl ; 

    cout << "Please enter the name of the student (LastName,FirstName): " ;
    cin >> name[counter] ;

    cout << "Please enter the grade of the student: " ;
    cin >> grade[counter] ;

}

// Function to search for student
void searchStudent(int ID[], string name[], int grade[], int counter)
{
    int search, search_index ; // Variables used for finding desired item

    // O/I for search feature
    cout << endl ; 
    cout << "Please enter the ID of the student: " ;
    cin >> search ; 

    // Calculates index of desired search ID using a basic binary search algorithm
    search_index = binary_search(ID, search, counter) ;

    if(search_index == 0) // Checks if the index is empty or not
    {
        cout << "Please enter a valid ID!\n" ;
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

// Function to print students' grades
void gradeStudent(int ID[], string name[], int grade[], int counter)
{
    double mean = 0, high = 0, low = 0 ; // Used for grade statistics feature

    // Finds average of all grades that aren't 0
    for(int j = 1 ; j <= counter ; j++)
    {
        if(grade[j] != 0)
        {
            mean += grade[j] ; 
        }

        else
        {
            continue ;
        }

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
        if(j == 1 && grade[j] != 0)
        {
            low = grade[j] ; 
        }
        else
        {
            if(grade[j] < low && grade[j] != 0)
            {
                low = grade[j] ;
            }
        }
    }

    // Sets decimal places for grades to 2
    cout.setf(ios::fixed) ;
	cout.setf(ios::showpoint) ;
    cout.precision(2) ;
            
    // Outputs grade statistics
    cout << endl ; 
    cout << "The Highest Grade is: " << high << endl ;
    cout << "The Mean Grade is: " << mean << endl ;
    cout << "The Lowest Grade is: " << low << endl ;
    cout << endl ; 

    // Clears the average so that it wont be adding to itself if you calculate multiple times
    mean = 0 ;
}

// Function to remove student 
bool removeStudent(int ID[], string name[], int grade[], int counter)
{
    int search ; // Declares variable used to find desired item

    // O/I for desired student 
    cout << endl ; 
    cout << "Please enter the ID: " ;
    cout << endl ;
    cin >> search ; 

    // Gathers the correct index of desired student
    search = binary_search(ID, search, counter) ;

    // Checks to see if ID is in available range
    if(search >= 0 && search <= counter)
    {
        // Displays the index removal before it actually happens
        cout << endl ; 
        cout << name[search] << " has been removed\n" ; 
        cout << endl ; 

        // Debug tool
        //printarray(ID, counter) ; 

        // Used to remove min element
        if(search == 0)
        {
            for(int j = 0 ; j < counter ; j++)
            {
                ID[j] = ID[j+1] ;  
                name[j] = name[j+1] ;
                grade[j] = grade[j+1] ;
            }  

            ID[counter] = 0 ;  
            name[counter] = "0" ;
            grade[counter] = 0 ;

        } 

        // Used to remove max element
        if(search == counter)
        {
            ID[search] = 0 ;  
            name[search] = "0" ;
            grade[search] = 0 ;

        }

        // Used to remove any elements in between 1 - counter
        if(search > 0 && search < counter)
        {
            ID[search] = 0 ;  
            name[search] = "0" ;
            grade[search] = 0 ;
        }

        return true ; 
    }

    else
    {
        // Asks for valid input
        cout << endl ; 
        cout << "Please enter valid ID! \n" ;
        cout << endl ; 

        return false ; 
    }

}

// Function to print current roster of students
void printStudent(int ID[], string name[], int grade[], int counter)
{
    // Outputs student list, excluding empty ID's
    cout << endl ;
    cout << "ID\t" << "Name\t" << "\t\tGrade" << endl ;
            
    // Loops through student list to output non-0 entries
    for(int j = 1 ; j <= counter ; j++)
    {
        if(ID[j] != 0)
        {
            cout << ID[j] << "\t" <<  name[j]<< "\t" << "\t" << grade[j] << endl ;
        }
    }

    cout << endl ; 
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

    for(int i = 0 ; i < MAX ; i++) // Allows for 100 students even with removing x amount
    {
        // O/I for menu 
        cout << endl ; 
        menu() ; 
        cin >> option ;

        // Add a student
        if(option == 1)
        {
            counter++ ; // Increases counter integer BEFORE ID, Name, and Grade is assigned to that index

            addStudent(ID, name, grade, counter) ; // Deploys function to add student

        }

        // Search a student
        else if(option == 2)
        {

            searchStudent(ID, name, grade, counter) ; // Deploys function to search student

        }
        
        // Grade statistics
        else if(option == 3)
        {
            
            gradeStudent(ID, name, grade, counter) ; // Deploys function to print students' grades

        }

        // Remove a student
        else if(option == 4)
        {
            
            int result = removeStudent(ID, name, grade, counter) ; // Deploys the function to remove a student 

            if(result == true)
            {
                i-- ; // Removes an iteration from the loop so that the student can be replaced within the 100 maximum
            }
       
        }

        // Lists all students
        else if(option == 5)
        {
            
            printStudent(ID, name, grade, counter) ; // Deploys the print student function

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