/*Write a C++ program to create a class Two which has two integers as its members. Write
an inline function to find the biggest out of the two integer values.*/

// Write a C++ program to create a class Two which has two integers as its members. Write
//an inline function to find the biggest out of the two integer values.
#include <iostream>
using namespace std;
class numbers{
    private:
    int num1,num2;
  public:  
    void getdata(){
        cout<<"Enter the number 1:";
        cin>>num1;
        cout<<"Enter the number 2:";
        cin>>num2;
    }
    inline void biggest(){
   int  num3=num1>num2?num1:num2;
    cout<<"The biggest of the  two numbers is:"<<num3;
}
};
int main() {
    class numbers n1;
    n1.getdata();
    n1.biggest();
}