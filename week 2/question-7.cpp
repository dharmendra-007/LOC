/*
7. Write a C++ program to move all the negative elements to one side of the array.
*/

#include <iostream>
using namespace std;

void moveNegatives(int arr[], int size)
{
  int left = 0;

  for (int i = 0; i < size; ++i)
  {
    if (arr[i] < 0)
    {
      if (i != left)
      {
        int temp = arr[i];
        arr[i] = arr[left];
        arr[left] = temp;
      }
      left++;
    }
  }
}

int main()
{
  // int arr[] = {1, -3, 5, 6, -7, -8, 9};
  int size;
  cout << "Enter size of the array : ";
  cin >> size;
  int arr[size];
  cout << "Enter elements of the array : ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  cout << "Original array : ";
  for (int i = 0; i < size; ++i)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  moveNegatives(arr, size);

  cout << "Array after moving negatives to one side : ";
  for (int i = 0; i < size; ++i)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
