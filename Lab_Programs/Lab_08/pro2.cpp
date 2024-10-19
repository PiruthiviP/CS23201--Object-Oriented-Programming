/*Create a class Number with one integer variable as private member. Overload ++ and --
operators’ to increment and decrement objects of Number class respectively as both
prefix and suffix notation.*/
#include <iostream>
using namespace std;

class Number {
private:
    int num1 =10;

public:
    void show() {
        cout << "The number 1 is: " << num1 << endl;
    }

    
    void  operator++() {
        num1 = ++num1;
    }
    Number operator++(int) {
        Number temp = *this;
        ++(*this);
        return temp;
    }
    void  operator--() {
        num1 = --num1;
    }
    void operator--(int ) {
       this-> num1 = num1--;
    }
    
    

};

int main() {
    Number n1;
    n1.show();
    cout<<"Increment operator "<<endl;
    
    ++n1; 
    n1.show();
    n1++; 
     n1.show();
     cout<<"Decrement operator "<<endl;
     --n1;
     n1.show();
     n1--;
    n1.show();
   
      

    return 0;
}