/*Write a C++ program to declare a class Rectangle with length and breadth as private
members. Write a constructor with default arguments. Create a function to calculate
area of rectangle with default arguments from constructor for one object and by passing
new values to the constructor for another object. Display contents of all the objects and
area of the corresponding objects.*/

#include<iostream>
using namespace std;
class rectangle{
        int length,breadth;
        public:
        rectangle(){
                length=0;
                breadth=0;
        }
        rectangle(int length,int breadth)
        {
                this->length=length;
                this->breadth=breadth;
                cout<<"The area of the rectangle:"<<length*breadth;

        }
        ~rectangle()
        {
                cout<<"destructor called\n";
        }
};
int main()
{
        rectangle r2,r1(3,4);
}