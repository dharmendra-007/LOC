/*
5. Write a C++ program to copy the elements of one array into another array.
*/

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int originalArray[size];
    int copiedArray[size];

    cout << "Enter elements of the original array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> originalArray[i];
    }

    for (int i = 0; i < size; i++)
    {
        copiedArray[i] = originalArray[i];
    }

    cout << "Elements of the copied array : ";
    for (int i = 0; i < size; i++)
    {
        cout << copiedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
