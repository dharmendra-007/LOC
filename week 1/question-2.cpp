/*
2. Write a program that takes a number as input and checks whether it is
positive, negative or zero.
*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;
    if (number == 0)
    {
        cout << "Zero" << endl;
    }
    else if (number > 0)
    {
        cout << "Positive" << endl;
    }
    else if (number < 0)
    {
        cout << "Negative" << endl;
    }

    return 0;
}