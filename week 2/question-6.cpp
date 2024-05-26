/*
6. Write a C++ program to find maximum occurring integer in an array.
*/

#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter size of the array : " ;
  cin >> size;

  int arr[size];
  cout << "Enter the elements of the array : ";
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }

  int large = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > large) {
            large = arr[i];
        }
    }

  int hashArr[large+1] = {0};
    for(int i = 0; i < size; i++){
    hashArr[arr[i]] ++; 
  }

  int max = hashArr[0];
    for (int i = 1; i < large + 1 ; ++i) {
        if (hashArr[i] > max) {
            max = hashArr[i];
        }
    }

  int index;
  for(int i = 0; i < max + 1 ; ++i) {
    if (hashArr[i] == max) {
      index = i;
      break;
    }
  }

  cout << "maximum occurring integer is " << index << " occured " << max << " times." << endl;
  return 0;
}
