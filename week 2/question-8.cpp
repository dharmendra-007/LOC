/*
8. Write a C++ program to find the number of vowels and consonants in a string.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cout << "Enter a string : ";
  cin >> str;
  
  int vowel = 0 , consonant = 0;

  for(int i=0; i<str.length(); i++) {
    if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u' || str[i] == 'A' || str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U') {
      vowel++;
    }
    else{
      consonant++;
    }
  }

  cout << "vowels : " <<vowel << endl << "consonants : " << consonant << endl;
  return 0;
}