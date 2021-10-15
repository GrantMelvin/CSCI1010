// Grant Melvin
// CSCI 1010
// Practice Problem 2 - 2
// Given a list of integers, find the integer that is not repeated

#include<iostream>
#include<map>

using namespace std ;

// Function to test if input was being passed properly
void print_array(int array[], int size)
{

    for(int i = 0; i < size; i++)
    {

        cout << array[i] << "\t" ;
    }

    cout << endl ;

}

// https://www.geeksforgeeks.org/find-element-appears-array-every-element-appears-twice/
// Applies formula to times the sum of the array without duplicates by 2 and subtrace the sum of the arrays from that
int duplicate(int nums[], int n)
{
    map<int, int> m ; // Variable to store value inside of key
    long sum1 = 0, sum2 = 0 ; 

    // Loop that adds up the non-duplicated integers for sum1 and the total integers for sum2
    for(int i = 0; i < n; i++) 
    {
        if(m[nums[i]] == 0)
        {
            sum1 += nums[i] ;
            m[nums[i]]++ ;
        }
        sum2 += nums[i] ;
    }

    // Applies the formula to find the non-duplicated number
    return 2 * (sum1) - sum2 ;
}

int main()
{   
    
    const int SIZE = 100 ; // Maximum user-inputs allowed to parse through
    int nums[SIZE] ; // Sets default array size to 100
    int counter ; // Used for print_array function and to keep track of how many values are actually inside of the array

    // O/I for list of numbers
    cout << "Please enter the list of numbers to find the digit only listed once:\n" ;
    cout << "(Enter 'X' when you'd like to stop listing numbers) \n" ;

    // For-loop to test input and enter into the array if valid
    for(int i = 0 ; i < SIZE ; i++)
    {
        if(cin >> nums[i])
        {
            // input was valid, continues the loop and adds to counter so that it can be checked with the function and referred to later
            counter++ ;
        }
        else
        {
            // input was invalid, breaks the loop
            break ;
        }
    }

    //print_array(nums, counter) ;

    // Outputs answer
    cout << "The non-duplicated digit is: " << duplicate(nums, counter) << endl;

    return 0 ;
}