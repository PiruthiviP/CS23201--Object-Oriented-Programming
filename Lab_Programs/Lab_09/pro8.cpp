// Write a Simple C++ program to implement Hierarchical inheritance.
#include <iostream>
using namespace std;
class Base{
    protected:
    int a,b;
    public:
    Base()
    {
        
    }
    void set(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
};
class add:public Base
{
    public:
    void res()
    {
        cout<<"The addition is :"<<a+b<<endl;
    }
};
class mul:public Base
{
    public:
    void res()
    {
        cout<<"The multiplication is:"<<a*b<<endl;
    }
    
};
int main() {
   add a;
  a.set(5, 7);
  a.res(); 

  mul m;
  m.set(8,8);
  m.res();
    return 0;
}