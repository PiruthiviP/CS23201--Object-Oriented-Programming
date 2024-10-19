//Write a C++ program to overload < operator and display the smallest number out of two
//objects using friend function.
#include<iostream>
using namespace std;
class smaller{
    int x,y;
    public:
    friend istream & operator>> (istream & in, smaller & p)
  {
	cout << "Enter the number 1: ";
	in >> p.x;
	cout << "Enter the number 2: ";
	in >> p.y;
	return in;
  }
  friend ostream & operator <<(ostream &out,smaller &n)
  {
      out << (n.x < n.y ? n.x: n.y);
	return out;
  }
  
};
int main()
{
    smaller s;
    cin>>s;
    cout<<"The smallest number is: "<<s;
}