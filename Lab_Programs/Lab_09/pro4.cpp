/*Make a class Employee with a name and salary. Make a class Manager inherit from Employee. Add an instance
variable, named department, of type string. Have a method to print the manager’s name, department and salary. Make a class Executive inherit from Manger. Have a method to print string ‘Executive’ followed by the information stored in the Manager super class object. Supply a test program that tests these classes and methods.*/
#include <iostream>
using namespace std;

class Employee{
    protected:
    float salary;
    string name;
    public:
    Employee()
    {
        salary=1000.067f;
        name="Ram.S";
    }
};
class  Manager:public Employee
{
  protected:
  string dept;
  public:
  Manager()
  {
      dept="CT";
  }
  
  void print()
  {
      cout<<"The manager name is :"<<name<<endl;
      cout<<"The salary is :"<<salary<<endl;
      cout<<"The department is:"<<dept<<endl;
  }
};

class Executive:public Manager
{
    public:
    void print()
    {
        cout<<"Executive"<<endl;
        Manager::print();
    }
    
    
};
int main() {
    Executive e;
    Employee E1;
    Manager m1;
    m1.print();
    e.print();
    return 0;
}