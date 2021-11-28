/*
Author: Shahida Hoque
purpose: Project 1D
*/

#include<iostream>
using namespace std;

int main()
{
    int numbers;
    int sum;			// initialize all variables needed 
    char curr_op;
    char prev_op = '+';
    cin >> numbers;
    sum = numbers;
    while (cin >> curr_op){     //set up a while loop to read inputed information
        if (curr_op == '+'){		     
            sum += numbers;
            }			//set up addition and subtraction for the program 
        else if (curr_op == '-'){
            sum -= numbers;
            }
        else if (curr_op == ';'){
            //code for finding the square of numbers
            sum = numbers;
            }
        else if (curr_op == '^'){
            sum *= numbers;
            }
        cout << sum << endl;
        }
    return 0;
}
        

