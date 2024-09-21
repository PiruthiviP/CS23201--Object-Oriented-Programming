//Write a program that prompts the user to input a string and outputs the string in uppercase
//letters. (Use a character array to store the string.)
#include <iostream>
#include <cctype>
using namespace std;

int main() {
  char str[100];

  cout << "Enter a string: ";
  cin.getline(str, 100);


  for (int i = 0; i < strlen(str); i++) {
    str[i] = toupper(str[i]);
  }

  cout << "The uppercase string is: " << str << endl;

  return 0;
}