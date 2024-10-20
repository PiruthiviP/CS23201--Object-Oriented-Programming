/*Extend the 10th program to display the area of circles. This requires addition of a new derived class
‘circle’ that computes the area of a circle. Remember, for a circle we need only one value, its radius, but
the get_data() function in the base class requires two values to be passes.(Hint: Make the second
argument of get_data() function as a default one with zero value).*/

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
    double length;
    double width;

public:
    void get_data(double l, double w = 0) { // Default value for width
        length = l;
        width = w;
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

class Circle : public Shape {
public:
    void get_data(double radius, double w = 0) { // Ignoring width for circle
        length = radius; // Use length to store radius
    }

    void display_area() override {
        double area = M_PI * length * length; // Area = π * r²
        cout << "Area of the circle: " << area << endl;
    }
};

int main() {
    int choice;
    cout << "Choose the shape to calculate area:\n1. Triangle\n2. Rectangle\n3. Circle\nEnter your choice: ";
    cin >> choice;

    Shape* shape;

    if (choice == 1) {
        shape = new Triangle();
        double base, height;
        cout << "Enter base and height: ";
        cin >> base >> height;
        shape->get_data(base, height);
    } else if (choice == 2) {
        shape = new Rectangle();
        double length, width;
        cout << "Enter length and width: ";
        cin >> length >> width;
        shape->get_data(length, width);
    } else {
        shape = new Circle();
        double radius;
        cout << "Enter radius: ";
        cin >> radius;
        shape->get_data(radius);
    }

    shape->display_area();

    delete shape;
    return 0;
}
