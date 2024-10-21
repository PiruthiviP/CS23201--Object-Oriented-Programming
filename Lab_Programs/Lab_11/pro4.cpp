/*Create a template class which has 2 members’ mark1 and mark2. Have constructors to
initialize these values and method total to calculate the sum of two marks. Test this
template class by first having 2 integers as marks and then 2 floating point values as
marks.*/
#include<iostream>
using namespace std;
template<typename T>
class Marks
{
    T mark1,mark2;
    public:
    Marks(T mark1,T mark2)
    {
        this->mark1=mark1;
        this->mark2=mark2;
    }
    void calculate()
    {
        cout<<"The sum of the two marks: "<<mark1+mark2<<endl;
    }
};
int main()
{
Marks<int>inttype(40,50);
inttype.calculate();
Marks<float>floattype(40.5f,60.8765f);
floattype.calculate();

}