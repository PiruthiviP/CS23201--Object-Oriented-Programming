// Write a C++ program to create a class Number which has an integer as its member. Write
//two inline functions to find the square and cube of the integer respectively..
#include <iostream>
using namespace std;
class numbers{
    private:
    int num;
  public:  
    void getdata(){
        cout<<"Enter the number :";
        cin>>num;
        
    }
    inline int square(){
        return num*num;
   
}
    inline int cube()
    {
        return num*num*num;
    }
};
int main() {
    class numbers n1;
    n1.getdata();
    cout<<"The square of number is:"<<n1.square()<<endl;
    cout<<"The cube of number is:"<<n1.cube()<<endl;
}