/*
4. Write a C++ program to enter two numbers and perform all arithmetic operations using switch case.
*/
#include <iostream>
using namespace std;
int main() {
    int number1 , number2;
    char ch;
    cout << "Enter first number : ";
    cin >> number1;
    cout << "Enter second number : ";
    cin >> number2;
    cout << "Enter a operator : ";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << number1 << " + " << number2 <<" = " << (number1 + number2)<<endl;
        break;
    case '-':
        cout << number1 << " - " << number2 <<" = " << (number1 - number2)<<endl;
        break;
    case '*':
        cout << number1 << " * " << number2 <<" = " << (number1 * number2)<<endl;
        break;
    case '/':
        cout << number1 << " / " << number2 <<" = " << (number1 / number2)<<endl;
        break;
    case '%':
        cout << number1 << " % " << number2 <<" = " << (number1 % number2)<<endl;
        break;
    default: cout <<"Invalid operator!" << endl;
        break;
    }
    return 0;
}