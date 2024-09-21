/*For variable product_code containing a string of letters and digits,
a) Give an’ if statement’ that outputs “Verified” if product_code contains both a “Z”
and a “9”, and outputs “Failed” otherwise.
b) Give a C++ instruction that prints out just the last three characters in
product_code.*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  string product_code;

  cout << "Enter product code: ";
  cin >> product_code;

  if (product_code.find('Z') != string::npos && product_code.find('9') != string::npos) {
    cout << "Verified" << endl;
  } else {
    cout << "Failed" << endl;
  }

  cout << "Last three characters: " << product_code.substr(product_code.length() - 3) << endl;

  return 0;
}