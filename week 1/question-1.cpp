/*
1 .Write a program to print the numbers from 1 to 100, but replace multiples of 3 with "Fizz" and multiples of 5 with "Buzz".
*/
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
        }
        if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
        }
        if (i % 3 != 0 && i % 5 != 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}