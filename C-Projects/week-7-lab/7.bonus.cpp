//Grant Melvin
//CSCI1010
//Lab 7-3
//Write a program to determine if the input string is valud in a string of '(', ')', '{', '}', '[' and ']'

#include<iostream>
#include<string.h>

using namespace std ;



int main()
{
    //comparitive statements
    bool output ;
    string input ;

    //O/I of input
    cout << "Input: " ;
    cin >> input ;

    //creates integer with length of string input
    int slength = input.length() ;

    //sets base variables to move arround string
    int x = 0, y = 1, z = y - x;

    //for-loop to compare each character of the string to the following one, doesn't work with 100% function
    //uses nested if-statements 
    //needs to be able to identify ())

    for(int i = 0; i < slength ; i++ ){

        //tests ( in 0 index
        if(input[x] == '('){

            //allows there to be input between ()
            if(input[y] == ')' || (input[y+1] == ')' && input[y] != ']' && input[y] != '}') || (input[y+2] == ')' && input[y+1] != ']' && input[y+1] != '}') || (input[y+3] == ')' && input[y+2] != ']' && input[y+2] !='}')){
                    output = true ;
                }
                
                //allows nested brackets for ([])
                else if(input[y] == '[' && (input[y+1] == ']' && input[y+1] != '}' && input[y+1] != ')') || (input[y+2] == ']' && input[y+2] != '}' && input[y+2] != ')') || (input[y+3] == ']' && input[y+3] !='}' && input[y+3] != ')')){ 
                    output = true ;
                }

                //allows nested brackets for ({})
                else if(input[y] == '{' && (input[y+1] == '}' && input[y+1] != ']' && input[y+1] != ')') || (input[y+2] == '}' && input[y+2] != ']' && input[y+2] != ')') || (input[y+3] == '}' && input[y+3] !=']' && input[y+3] != ')')){
                    output = true ;
                }

                //if no viable combinations are found, this is executed
                else{
                output = false ;
                cout << "Invalid\n" ;
                break ;
                }

            }
        
    
        //tests { in 0 index    
        if(input[x] == '{'){

            //allows there to be input between {}
            if(input[y] == '}' || (input[y+1] == '}' && input[y] != ']' && input[y] != ')') || (input[y+2] == '}' && input[y+1] != ']' && input[y+1] != ')') || (input[y+3] == '}' && input[y+2] != ']' && input[y+2] !=')')){
                output = true ;
                }

                //allows nested brackets for {[]}
                else if(input[y] == '[' && (input[y+1] == ']' && input[y+1] != '}' && input[y+1] != ')') || (input[y+2] == ']' && input[y+2] != '}' && input[y+2] != ')') || (input[y+3] == ']' && input[y+3] !='}' && input[y+3] != ')')){ 
                    output = true ;
                }

                //allows nested brackets for {()}
                else if(input[y] == '(' && (input[y+1] == ')' && input[y+1] != '}' && input[y+1] != ']') || (input[y+2] == ')' && input[y+2] != '}' && input[y+2] != ']') || (input[y+3] == ')' && input[y+3] !='}' && input[y+3] != ']')){ 
                    output = true ;
                }
                
                //if no viable combinations are found, this is executed
                else{
                output = false ;
                cout << "Invalid\n" ;
                break ;
            }
        }

        //tests [ in 0 index
        if(input[x] == '['){
            //allows there to be input between []
            if(input[y] == ']' || (input[y+1] == ']' && input[y] != '}' && input[y] != ')') || (input[y+2] == ']' && input[y+1] != '}' && input[y+1] != ')') || (input[y+3] == ']' && input[y+2] != ')' && input[y+2] !='}')){
                output = true ;
                }

                //allows nested brackets for [()]
                else if(input[y] == '(' && (input[y+1] == ')' && input[y+1] != '}' && input[y+1] != ']') || (input[y+2] == ')' && input[y+2] != '}' && input[y+2] != ']') || (input[y+3] == ')' && input[y+3] !='}' && input[y+3] != ']')){ 
                    output = true ;
                }

                //allows nested brackets for [{}]
                else if(input[y] == '{' && (input[y+1] == '}' && input[y+1] != ']' && input[y+1] != ')') || (input[y+2] == '}' && input[y+2] != ']' && input[y+2] != ')') || (input[y+3] == '}' && input[y+3] !=']' && input[y+3] != ')')){
                    output = true ;
                }

                //if no viable combinations are found, this is executed
                else{
                output = false ;
                cout << "Invalid\n" ;
                break ;
                }
            }

            //increments the for-loop
            x++ ;
            y++ ;
        }   
       
    //backup to see if theres been a false statement and asks if it's been defined true
    if(output == 1){
    cout << "Valid\n" ;
    }

    return 0 ;

}