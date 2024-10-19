#include <iostream>
using namespace std;

class PowerDevices {
public:
    void powerOn() {
        cout << "Powering on the device..." << endl;
    }
};

class Scanner : virtual public PowerDevices {
public:
    void scan() {
        cout << "Scanning..." << endl;
    }
};

class Printer : virtual public PowerDevices {
public:
    void print() {
        cout << "Printing..." << endl;
    }
};

class Copier : public Scanner, public Printer {
public:
    void copy() {
        cout << "Copying..." << endl;
        print(); 
        scan();  
    }
};

int main() {
    Copier cp;
    cp.powerOn();
    cp.copy();

    return 0;
}