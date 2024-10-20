/*Create a base class called shape. Use this class to store two double type values that could be used to
compute the area of figures. Derive two specific classes called triangle and rectangle from the base
shape. Add to the base class, a member function get_data() to initialize base class data members and
another member function display_area() to compute and display the area of figure. Make display_area()
as a virtual function and redefine this function in the derived classes to suit their requirements.

Use these three classes design a program that will accept dimensions of a triangle or a rectangle
interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in the case of rectangles,
and base and height in the case of triangles, and used as follows*/
#include <iostream>
using namespace std;

class Shape {
protected:
    double length;
    double width;

public:
    void get_data() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    virtual void display_area() {
        cout << "Area of the shape is not defined." << endl;
    }
};

class Triangle : public Shape {
public:
    void display_area() override {
        double area = 0.5 * length * width;
        cout << "Area of the triangle: " << area << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() override {
        double area = length * width;
        cout << "Area of the rectangle: " << area << endl;
    }
};

int main() {
    int choice;
    cout << "Choose the shape to calculate area:\n1. Triangle\n2. Rectangle\nEnter your choice: ";
    cin >> choice;

    Shape* shape;

    if (choice == 1) {
        shape = new Triangle();
    } else {
        shape = new Rectangle();
    }

    shape->get_data();
    shape->display_area();

    delete shape;
    return 0;
}
