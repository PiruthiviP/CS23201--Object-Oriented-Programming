/*Write a C++ program to declare a class with three data members. Declare overloaded
constructor with no arguments, one argument, two argument, and three arguments.
Pass values in the object declaration statement. Create four objects and pass values in
such a way that the entire four constructors are executed one by one. Write appropriate
messages in constructor and destructor so that execution of the program is understood.*/

#include<iostream>
using namespace std;
class demo
{
int a,b;
public:
demo(int x, int y)		//Parameterized Constructor
{
    a=x;
    b=y;
}
demo()			//Default or Empty Constructor
{
}
void sum()
{
cout<<"The Sum is : "<<a+b;
}
void mul()
{
cout<<"\nThe Product is : "<<a*b;
}
~demo()			//Destructor
{
cout<<"\nDestructor Called....";
}

};
int  main()
{
int a,b;

cout<<"\nEnter two Values :\n";
cin>>a>>b;
demo de;		//Default or Empty Constructor
demo d(a,b);	//Parameterized or Value added Constructor
demo cd=d;	//Copy Constructor
d.sum();
cd.mul();
}
