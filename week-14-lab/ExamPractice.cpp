#include<iostream>

using namespace std ; 


int arrRemove(int arr[], int counter)
{
    int newarray[counter-1] ;

    int length = 0 ;

    for(int i = 0 ; i < counter ; i++)
    {
        if(i == 0)
        {
            continue ;
        }
        else
        {
            newarray[i-1] = arr[i] ; 
            length++ ;
        }

    }
    
    return length ;
}


int main()
{
    int MAX = 100 ;
    int arr[MAX] ;
    int counter = 0 ;

    //cout << "Please enter the elements of the array: \n" ;

    /*for(int i = 0 ; i < MAX ; i++)
    {
        cin >> arr[i] ;

        if(arr[i] == 0)
        {
            arr[MAX] -= arr[i] ;
            break ; 
        }

        counter++ ;

    }
    */

    //cout << arrRemove(arr, counter) << endl ;

    int sum = 0, i ; 
    int a[8] = {2,5,8,9,13,20,18,29} ;

    for(i = 0 ; i < 8 ; i++)
    {
        if(a[i] % 2 == 0)
        {
            sum += a[i] ; 
        }
    }

    cout << sum << endl ;

}