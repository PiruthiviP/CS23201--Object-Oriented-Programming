/*Create a class called THREE with three integer values as private members. Find the
biggest among the three integer values using friend function. Find the mean of the three
numbers of the class using friend function.*/
#include<iostream>
using namespace std;

class three{
    int num1=8;
    int num2=9;
    int num3=10;
    public:
    friend void bigger();
};
void bigger()
{
    three obj;
    int big = (obj.num1 > obj.num2) ? (obj.num1 > obj.num3 ? obj.num1 : obj.num3) : (obj.num2 > obj.num3 ? obj.num2 : obj.num3);
   cout<<"The biggest number is :"<<big;
}


int main(){
   
   
    bigger();
    
    
    
}