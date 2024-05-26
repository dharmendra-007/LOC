/*
9. Write a C++ program to print the following pattern using loop
* * * * *
* * * *
* * *
* *
*
*/

#include<iostream>
using namespace std;

int main() {
for(int row =0; row < 5; row++) {
  for (int col = 0; col < 5 - row; col++)
  {
    cout << "* ";
  }
  cout << endl;
}
return 0;
}