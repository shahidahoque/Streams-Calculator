/*
Author: Shahida Hoque
purpose: .
*/

#include<iostream>
using namespace std;

int main()
{
    int numbers;
    int sum;
    char o;
    cin >> numbers;
    sum = numbers;
    while (cin >> o >> numbers){
        if (o == '+'){
            sum += numbers;
            }
        else if (o == '-'){
            sum -= numbers;
            }
        cout << sum << endl;
        }
    return 0;
}
        
