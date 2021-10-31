// Grant Melvin
// Scratch Work

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std ;

struct practice
{
    
    int a = 2 ;
    string b = "Hi" ;
    char c = 'C' ;

} name ; // gives the structure a referenceable name 

struct practice2
{
    int x,y,z ;
};

class Practice
{
public:
    int x ;
} ;

int main()
{
    vector<int> v(10) ; // 10 elements all valued at 1

    int i = 0 ;

    for(vector<int>::iterator j = v.begin() ; j != v.end() ; j++)
    {
        *j = i ;
        i++ ;
    }

    Practice player ;
    player.x = 5 ;
    
    //struct practice2 arr[10] ; // Gives 3 arrays within the structure that contains 10 elements per array

    //arr[0].x = 1 ; // sets first element in x array of practice2 structure to 1
    //arr[0].y = 2 ; // sets first element in y array of practice2 structure to 2
    //arr[0].z = 3 ; // sets first element in z array of practice2 structure to 3

    //cout << arr[0].x << "\t" << arr[0].y << "\t" << arr[0].z << endl ;

    //struct practice2 value = {1,2,3} ; // Gives x the value of 1, y the value of 2, and z the value of 3 within the structure

    //struct practice2* p = &value ; // iterates through the structure values and allows p to reference them with the -> operator

    //cout << p->x << " " << p->y << " " << p->z ;

    return 0 ;
}