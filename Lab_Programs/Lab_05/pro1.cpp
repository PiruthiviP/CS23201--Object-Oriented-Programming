/*Define a class student with the following specification
Private members of class student
Admno integer
Sname 20 character
Eng, Math,Science float
Total float
Public member function of class student
Takedata() Function to accept values for Admno, Sname, Eng,Science
Ctotal() Function to calculate Eng + Math + Science and store the result in Total.
Showdata() Function to display all the data members on the screen.
Write a main function to create objects of class student and invoke all the public member
functions.*/

#include <iostream>
using namespace std;
class student{
        int admno;
        char sname[20];
        float eng,math, science, total;
public:
void Takedata(){
        cout<<"Enter the admission number:";
        cin>>admno;
        cout<<"Enter the name:";
        cin>>sname;
        cout<<"Enter the english marks:";
        cin>>eng;
        cout<<"Enter the tamil mark:";
        cin>>math;
        cout<<"Enter the science mark:";
        cin>>science;
}
void ctotal()
{
        total=eng+math+science;
}
void showdata()
{
        cout<<endl;
        cout<<"The admission number of the student:"<<admno<<endl;
        cout<<"The name of the student:"<<sname<<endl;
        cout<<"English marks:"<<eng<<endl;
        cout<<"Math marks:"<<math<<endl;
        cout<<"Science marks:"<<science<<endl;
        cout<<"Total marks:"<<total<<endl;
}
};

int main() {
        struct student s1;
        s1.Takedata();
        s1.ctotal();
        s1.showdata();
    return 0;
}