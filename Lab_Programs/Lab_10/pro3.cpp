/*Write a C++ program for dynamic binding (accessing member function using pointers)*/
#include<iostream>
using namespace std;
class Base
{
     public:
    virtual void show()
    {
        cout<<"Base class display function"<<endl;
        
    }
};
class Derived:public Base 
{
    public:
    void show()
    {
        cout<<"Derived class display function"<<endl;
    }
};
int main()
{
    Base b,*ptr;
    Derived d;
    ptr=&d;
    ptr->show();
    
}