//Grant Melvin
//CSCI 1010
//Additional Problem Set 2.3
//Find and output the median of a 5 digit user-entered array

#include<iostream>

using namespace std ; 

int main()
{
    // Used to set a ceiling on the array for user-entries
    const int MAX = 100 ; 
    int nums[MAX] ;

    // Used to calculate how many integers a user enters
    int counter ;

    // Used in the sorting method
    int temp ;

    // O/I for the user-entered array
    cout << "Please enter the integers that you'd like to find the median of: \n" ;
    cout << "(to end your list, press a non-digit key)\n" ;


    // Takes the input from user, with data validation, and stores it in nums[]
    for(int i = 0 ; i < MAX ; i++)
    {
        
        if(cin >> nums[i])
        {
            counter++ ; // Entry was valid and integer was added into the list
        }

        else
        {
            break ; // Entry was not valid and array will end with the median being produced
        }

    }


    // Sorts the array from Highest-Valued Integer to Lowest-Valued Integer
    for(int i = 0 ; i < counter ; i++)
    {

        for(int j = i + 1 ; j < counter ; j++)
        {

            if(nums[i] > nums[j])
            {

                temp = nums[i] ;
                nums[i] = nums[j] ; 
                nums[j] = temp ;

            }

        }
        
    }


    // Gets us to the middle of the array
    int x = counter / 2 ;

    // Used to calculate median of an even-numbered array
    double real_num = (nums[x - 1] + nums[x]) ;
    double real_num2 = real_num / 2 ;


    // Tests if the array is even or add
    if(counter % 2 == 0 )
    {
        cout << "Your median is: " << real_num2 << endl ;
    }
    else
    {
        cout << "Your median is: " << nums[x] << endl ;
    }

    return 0 ;
}
