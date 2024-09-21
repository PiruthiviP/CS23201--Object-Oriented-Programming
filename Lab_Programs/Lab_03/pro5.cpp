//Write a recursive function power( base, exponent ) that, when invoked, returns base exponent. Test this function in main.
#include <iostream>
using namespace std;
float exponent(int base,int expo)
{
    if(expo==0)
    return 1;
    else if(expo>0)
    return base*exponent(base,expo-1);
    else
    return 1/(exponent(base,-expo));
}
int main() {
    int base,expo;
    cout<<"Enter the base:";
    cin>>base;
    cout<<"Enter the exponent:";
    cin>>expo;
    cout<<base<<"raised to power of"<<expo <<"is:"<<exponent(base,expo);
        return 0;
}