/*Define a structure named Time with members hours, minutes, and seconds. Write a
C++ program to input two times, add them, and display the result in proper time
format.*/

#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time t1, t2, result;
    
    cout << "Enter first time (hours, minutes, seconds): ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;
    
    cout << "Enter second time (hours, minutes, seconds): ";
    cin >> t2.hours >> t2.minutes >> t2.seconds;
    
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + result.seconds / 60;
    result.hours = t1.hours + t2.hours + result.minutes / 60;
    
    result.seconds %= 60;
    result.minutes %= 60;
    result.hours %= 24;  // Assuming time format in a 24-hour system
    
    cout << "Sum of times: " << result.hours << "h " << result.minutes << "m " << result.seconds << "s" << endl;

    return 0;
}


