#include <iostream>
using namespace std;
inline double volume( double side) {
  return side * side * side; 
}
int main() {
  double side;

  cout << "Enter the side length of the cube: ";
  cin >> side;
  cout << "The volume of the cube is: " << volume(side) << endl;

  return 0;
}