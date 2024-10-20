//4. Write a C++ program for abstract classes and concrete classes.
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() {
        cout << "Drawing a Triangle" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();
    Shape* shape3 = new Triangle();

    shape1->draw();
    shape2->draw();
    shape3->draw();

    delete shape1;
    delete shape2;
    delete shape3;

    return 0;
}
