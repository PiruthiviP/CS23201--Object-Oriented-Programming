/*Write a program to read temperature in centigrade and display a suitable message
according to temperature state below :
i. Temp < 0 then Freezing weather
ii. Temp 0-10 then Very Cold weather
iii. Temp 10-20 then Cold weather
iv. Temp 20-30 then Normal in Temp
v. Temp 30-40 then Its Hot
vi. Temp >=40 then Its Very Hot*/

#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;

    if (temp < 0) {
        cout << "Freezing weather" << endl;
    } else if (temp <= 10) {
        cout << "Very Cold weather" << endl;
    } else if (temp <= 20) {
        cout << "Cold weather" << endl;
    } else if (temp <= 30) {
        cout << "Normal in Temp" << endl;
    } else if (temp <= 40) {
        cout << "Its Hot" << endl;
    } else {
        cout << "Its Very Hot" << endl;
    }
    return 0;
}
