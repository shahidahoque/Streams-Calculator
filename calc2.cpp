/*
Author: Shahida Hoque
purpose: Project 1C
*/

#include<iostream>
using namespace std;

int main()
{
    int numbers;
    int sum;			// initialize all variables needed 
    char o;
    cin >> numbers;
    sum = numbers;
    while (cin >> o >> numbers){     //set up a while loop to read inputed information
        if (o == '+'){		     
            sum += numbers;
            }			//set up addition and subtraction for the program 
        else if (o == '-'){
            sum -= numbers;
            }
        else if (o == ';'){
            cout << sum << endl;	//code for finding the square of numbers
            sum = numbers;
            }
        }
    cout << sum << endl;
    return 0;
}
