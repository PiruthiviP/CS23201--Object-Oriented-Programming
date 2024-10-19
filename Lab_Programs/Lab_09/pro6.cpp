/*Write a C++ program to define three classes X, Y and Z. Each class contains one character array as a data
member. Apply multiple inheritance. Concatenate strings of classes X and Y and store it in the class Z. Show all
the three Strings. Use necessary get and put methods.*/
#include<iostream>
#include<cstring>
using namespace std;

class x {
protected:
    char a[50];
public:
    void set(const char *a) {
        strcpy(this->a, a);
    }
};

class y {
protected:
    char b[50];
public:
    void set(const char *b) {
        strcpy(this->b, b);
    }
};

class z : public x, public y {
public:
    void concat() {
        strcpy(c, a);
        strcat(c, b);
    }

    void display() {
       
        cout << "The concatenated word is: " << c << endl;
    }

private:
    char c[100]; 
};

int main() {
    x X;
    X.set("hello");

    y Y;
    Y.set("world");

    z Z;
    Z.concat();
    Z.display();

    return 0;
}