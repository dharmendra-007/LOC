/*
1. Write a C++ program to count the number of occurrences of a number in an
array using function
*/
#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int num)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    int arr[size];

    cout << "Enter elements of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int num;
    cout << "Enter a number to search in the array : ";
    cin >> num;

    int count = countOccurrences(arr, size, num);

    cout << "The number " << num << " appears " << count << " times in the array." << endl;

    return 0;
}
