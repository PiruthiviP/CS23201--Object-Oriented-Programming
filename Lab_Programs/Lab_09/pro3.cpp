//Write a Simple C++ program to implement Multilevel inheritance.
#include <iostream>
using namespace std;

class A
{
    protected:
    int num1;
     public:
    void show()
    {
        cout<<"Im in class A"<<endl;
    }
    
};
class B:public A
{
    public:
    void show(){
         cout<<"Im in class B"<<endl;
    
    }
   
};
class C:public B
{
    public:
    void show(){
          cout<<"Im in class C"<<endl;
    }
};
int main() {
    C c;
    c.show();
    c.B::show();
    c.A::show();

    return 0;
}