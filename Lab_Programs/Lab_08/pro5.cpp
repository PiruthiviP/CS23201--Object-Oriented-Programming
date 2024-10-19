// Create a class called STRING with a character array as data member. Write a non
//member overloaded function overload == operator to compare two objects of STRING

#include <iostream>
#include<cstring>
using namespace std;

class String{
    char str[50];
    
    public:
    String(const char str[]) {
        strcpy(this->str, str);
    }
    friend bool operator==( String &s1, String &s2) 
    {
        
        return strcmp(s1.str, s2.str) == 0;
    }
    
    
};
int main() {
    String s1("Hello");
    String s2("Hello");
    if(s1==s2)
    cout<<"The two strings are equal."<<endl;
    else
    cout<<"The two strings are not equal."<<endl;
    
    
   

    return 0;
}