//Write a C++ program to swap two numbers using reference variables.
#include <iostream>
using namespace std;
void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"The swapped values are:"<<x<<"\t"<<y;
}
int main() {
    int x=10,y=20;
    cout<<"Before swapping "<<x<<"\t"<<y<<endl;
    swap(x,y);
    
    return 0;
}