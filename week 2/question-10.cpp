/*
10. Write a C++ program to find the total number of alphabets , digits and 
special characters in a string
*/

#include<iostream>
using namespace std;

int main() {
  string str;
  cout << "Enter a string : ";
  cin >> str;
  int digit = 0 , alphabet = 0 , specialchar = 0 ;

  for (int i = 0; i < str.length(); i++){
    if (str[i] >= '0' && str[i] <= '9'){
      digit ++;
    }
    else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
      alphabet ++;
    }
    else {
      specialchar ++;
    }
  }

  cout << "Digits : " << digit << endl << "Alphabets : " << alphabet << endl << "Special Characters : "<< specialchar << endl;
  return 0;
}