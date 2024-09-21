/*Earth takes a period of revolution of 31558150 seconds. Write a program to find the
number of days, hours, minutes and seconds present for the given seconds.*/
#include <iostream>
using namespace std;

int main() {
    int total_seconds = 31558150;

    int days = total_seconds / 86400;
    total_seconds %= 86400;

    int hours = total_seconds / 3600;
    total_seconds %= 3600;

    int minutes = total_seconds / 60;
    int seconds = total_seconds % 60;

    cout << "Days: " << days << ", Hours: " << hours << ", Minutes: " << minutes << ", Seconds: " << seconds << endl;
    return 0;
}
