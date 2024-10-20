/*Write a C++ program to declare a function show () in base and derived class. Display message through
the function to know name of the class whose member function is executed. use late binding concept
using virtual keyword*/
#include<iostream>
using namespace std;
class Animal{
    public:
     virtual void show()
    {
         cout<<"I'm eating animal food"<<endl;
         
    }
};
class cat:public Animal
{
    public:
    void show()
    {
        cout<<"I'm eating cat food"<<endl;
    }
};
int main()
{
    Animal *ptr,p;
    cat c;
    ptr=&p;
     ptr->show();    
    ptr=&c;
    ptr->show();    
}