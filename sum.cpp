//File name: /Users/user/Downloads/sum.cpp
//Read a batch of ints from a file.
//Then calculate and print their sum.
/*
Author: Shahida Hoque
purpose: Write a program sum.cpp that reads a sequence of integers from cin,
and reports their sum.
*/

#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int num;

    while (cin >> num) 
    {
        sum+=num;
        num--;
    }
    
    cout << sum << endl;
    return 0;
}
