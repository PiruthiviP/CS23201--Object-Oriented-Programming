/*Write a C++ program to declare a person class with few private data members. Accept
data through constructor and pass an object to constructor and carry out copy constructor.
Display contents of both the objects.*/
#include<iostream>
#include<string>
using namespace std;
class person{
        int age;
        string name;
        char gender;
        public:
        person(){
                cout<<"Enter the name:";
                cin>>name;
                cout<<"Enter the age:";
                cin>>age;
                cout<<"Enter the gender(M or F):";
                cin>>gender;
                cout<<"The age:"<<age<<endl;
                 cout<<"The name:"<<name<<endl;
                 cout<<"The gender:"<<gender<<endl;
        }
        person(int a,string na,char s)
        {
                age=a;
                name=na;
                gender=s;
                cout<<"By the passsing the argument:\n";

                cout<<"The age:"<<age<<endl;
                cout<<"The name:"<<name<<endl;
                cout<<"The gender:"<<gender<<endl;
                                                   }
        person (person &n)
        {
                age=n.age;
                name=n.name;
                gender=n.gender;
                cout<<"The age:"<<age<<endl;
                cout<<"The name:"<<name<<endl;
                cout<<"The gender:"<<gender<<endl;
        }
        ~person(){


        cout<<"destructor called"<<endl;
        }
        };
        int main(){
                person p1;
                person p2(3,"ramu",'m');
                person p3(p2);
        }