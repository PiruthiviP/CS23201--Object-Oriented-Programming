/*Create a structure named Complex to represent a complex number with real and
imaginary parts. Write a C++ program to add and multiply two complex numbers.*/

#include <iostream>
using namespace std;

struct Complex {
    int real;
    int imaginary;
    void getdata() {
        cout << "Enter the real part: ";
        cin >> real;
        cout << "Enter the imaginary part: ";
        cin >> imaginary;
    }

    
    Complex add( Complex t1,  Complex t2) {
        Complex sum;
        sum.real = t1.real + t2.real;
        sum.imaginary = t1.imaginary + t2.imaginary;
        return sum;
    }
    Complex product ( Complex t1,  Complex t2) {
        Complex pdt;
        pdt.real = (t1.real*t2.real) -(t1.imaginary * t2.imaginary) ;
        pdt.imaginary = (t1.real*t2.imaginary)+(t1.imaginary*t2.real);
        return pdt;
    }
    

    
    void display()  {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3,c4;

    cout << "Enter the complex number 1:" << endl;
    c1.getdata();

    cout << "Enter the complex number 2:" << endl;
    c2.getdata();

    
    c3 = c1.add(c1, c2);

    cout << "The addition is: ";
    c3.display();
    
    c4=c1.product(c1,c2);
    cout<<"The product is: ";
    c4.display();
    return 0;
}