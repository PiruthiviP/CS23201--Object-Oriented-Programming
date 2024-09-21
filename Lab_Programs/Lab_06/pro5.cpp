/*Write a C++ program to create a class called Rational for performing arithmetic with
fractions, use integer variables to represent the private data of the class – the numerator
and the denominator. Provide a constructor that enables an object of this class to be
initialized when it is declared. The constructor should contain default values in case no
initializes are provided and should store the fraction in reduced form. E.g., the fraction
2/4 would be stored in the object as 1 in the numerator and 2 in the denominator. Provide
public member functions that perform the following task.
 Adding two rational numbers and the result should be in reduced form.
 Subtracting two rational numbers and the result should be in reduced form.
 Multiplying two rational numbers and the result should be in reduced form.
 Dividing two rational numbers and the result should be in reduced form.
 printing Rational numbers in the form a/b(a-numerator, b- denominator)*/

#include<iostream>
using namespace std;
class Rational
{
        int num,denom;
        public:
        Rational(int num=2 , int denom =4)
        {
                this->num=num;
                this->denom=denom;
        }
        void display()
        {
                int hcf;
                cout<<"\nThe entered fraction is :"<<num<<"/"<<denom;
                hcf=gcd(num,denom);
                cout<<"\nThe eneterd fraction in reduced form is :"<<(num/hcf)<<"/"<<(denom/hcf);
        }
                int gcd(int a, int b)
        {
                while (b != 0)
                {
                        int temp = b;
                        b = a % b;
                        a = temp;
                }
        return a;
        }
        void add(Rational r , Rational r1)
        {
                cout<<"\nThe additon is :"<<(float)((r.num*r1.denom)+(r.denom*r1.num))/(r.denom*r1.denom);
        }
        void subtract(Rational r , Rational r1)
        {
                cout<<"\nThe subtraction is :"<<(float)((r.num*r1.denom)-(r.denom*r1.num))/(r.denom*r1.denom);
        }
        void multiply(Rational r , Rational r1)
        {
                cout<<"\nThe multiplication is :"<<(float)(r.num*r1.num)/(r.denom*r1.denom);
        }
                                                      }
        void divide(Rational r , Rational r1)
        {
                cout<<"\nThe division is :"<<(float)(r.num*r1.denom)/(r.denom*r1.num);
        }
};
int main()
{
        Rational r,r1(4,5),r2,r3,r4,r5;
        r.display();
        r1.display();
        r2.add(r,r1);
        r3.subtract(r,r1);
        r4.multiply(r,r1);
        r5.divide(r,r1);
}