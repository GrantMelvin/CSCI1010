// Grant Melvin
// CSCI1010
// 14.1
/*
write the following function to calculate GPA: 
double compute_GPA( char grades[], int size) 
the grades array will contain letter grades (A, B, C, D, F); size is the size of the array. The 
function should return the average of the grades (Assume that A = 4, B = 3, C = 2, D = 1, 
and F = 0) 
In main() function, call the compute_GPA function to calculate GPA for the two students 
with following grades: 
studentA[] = {‘A’, ‘A’, ‘B’, ‘A’, ‘D’, ‘C’, ‘A’, ‘A’} 
studentB[] = {‘B’, ‘B’, ‘D’, ‘F’, ‘A’, ‘A’, ‘B’, ‘A’, ‘A’, ‘D’, ‘A’, ‘B’} 
*/

#include <iostream>

using namespace std ; 

double compute_GPA(char arr[], int size)
{
    double gpa ; // GPA for each student that is altered by each grade

    for(int i = 0 ; i < size ; i++)
    {
        switch(arr[i])
        {
            case 'A':
            gpa += 4 ;
            break ;

            case 'a':
            gpa += 4 ;
            break ;

            case 'B':
            gpa += 3 ;
            break ;

            case 'b':
            gpa += 3 ;
            break ;

            case 'C':
            gpa += 2 ;
            break ;

            case 'c':
            gpa += 2 ;
            break ;

            case 'D':
            gpa += 1 ;
            break ;

            case 'd':
            gpa += 1 ;
            break ;

            case 'F':
            break ;

            case 'f':
            break ;

            default: // If grade isnt on the menu that element will be essentially deleted
            size-- ;
            break ;

        }

        //cout << gpa << endl ;

    }

    //reduces decimal place to 2
    cout.setf(ios::fixed) ;
	cout.setf(ios::showpoint) ;
    cout.precision(2) ;

    return gpa / size ; 
}

int main()
{
    // Variables used for partially filled array
    const int MAX = 100 ;
    int counter = 0 ;

    char student_grades[MAX] = {'0'} ; // Declares the char array

    // O/I for array
    cout << "Please enter the grades of the student for the average GPA: \n" ;
    cout << "Enter 0 when done \n" ; 

    // Iterates through the entry array with "0" being used as the data validation
    for(int i = 0 ; i < MAX ; i++)
    {
        cin >> student_grades[i] ; 

        if(student_grades[i] == '0')
        {
            break ;
        }

        else
        {
            counter++ ;
        }
    }

    // Outputs final GPA
    cout << "The GPA of your student is: \n" ;
    cout << compute_GPA(student_grades, counter) << endl ;

    return 0 ;
}