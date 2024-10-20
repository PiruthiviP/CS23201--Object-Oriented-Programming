/*Write a C++ program for static binding (accessing member function using pointers-pointer casting)*/
#include<iostream>
using namespace std;
class Animal {
public:
  void speak() {
    cout << " animal sound." << endl;
  }
};

class Dog : public Animal {
public:
  void speak()  {
    cout << "Dog sound" << endl;
  }
};

class Cat : public Animal {
public:
  void speak()  {
    cout << "Cat sound" << endl;
  }
};

int main() {
  Animal animal;
  Dog dog;
  Cat cat;

  Animal* animalPtr1 = &animal;  
  Animal* animalPtr2 = &dog;    
  Animal* animalPtr3 = &cat;   

  animalPtr1->speak();  
  animalPtr2->speak();   
  animalPtr3->speak();  
}