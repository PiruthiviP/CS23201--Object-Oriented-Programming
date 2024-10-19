//Write a Simple C++ program to implement Single inheritance

#include <iostream>
using namespace std;

class Shape {
protected:
  int width, height;
public:
  void setDimensions(int w, int h) {
    width = w;
    height = h;
  }
};

class Rectangle : public Shape {
public:
  void getArea() {
   cout << "Area of rectangle: " <<  width * height << endl;
  }
};

int main() {
  Rectangle rect;
  rect.setDimensions(5, 4);
 rect.getArea();

  

  return 0;
}