/*Create a class TIME that has separate integer data members for hours, minutes, and
seconds. Include member functions to initialize it to default value, to a specified value,
display (overload “<<” through a friend function), add two TIME objects (use operator
overloading for “+”). Write a program to exercise this class in a suitable manner.*/
#include<iostream>
using namespace std;

class Time{
    int min, secs, hr;
public:
    Time(int min=0, int secs=0, int hr=0) {
        this->min = min;
        this->secs = secs;
        this->hr = hr;
    }

    Time operator+(Time& t) {
        Time result;
        result.secs = secs + t.secs;
        result.min = min + t.min + (result.secs / 60);
        result.hr = hr + t.hr + (result.min / 60);
        result.min %= 60;
        result.secs %= 60;
        return result;
    }

    friend ostream &operator<<(ostream & out,Time &p) {
        out << "Time: " << p.hr << " hours, " << p.min << " minutes, " << p.secs << " seconds";
        return out;
    }
};

int main() {
    Time t1(10, 30, 1);
    Time t2(20, 45, 2);

    Time sum = t1 + t2;

    cout << "t1: " << t1 << endl;
    cout << "t2: " << t2 << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}