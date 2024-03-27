/*
3.Write a program that takes a number as input and prints the sum of its
digits using a do-while loop.
*/
#include <iostream>
using namespace std;
int main()
{
    int number, sumOfDigits = 0;
    cout << "Enter a number : ";
    cin >> number;
    do
    {
        sumOfDigits = sumOfDigits + number % 10;
        number /= 10;
    } while (number != 0);
    cout << "sum of digits is : " << sumOfDigits << endl;
    return 0;
}