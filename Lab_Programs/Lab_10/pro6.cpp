//Write a C++ program to demonstrate container class.
#include <iostream>
#include <vector>
using namespace std;

class Container {
private:
    vector<int> elements;

public:
    void addElement(int element) {
        elements.push_back(element);
    }

    void displayElements() {
        cout << "Elements in the container: ";
        for (int el : elements) {
            cout << el << " ";
        }
        cout << endl;
    }

    int getSize() {
        return elements.size();
    }
};

int main() {
    Container myContainer;

    myContainer.addElement(10);
    myContainer.addElement(20);
    myContainer.addElement(30);

    myContainer.displayElements();
    cout << "Total elements: " << myContainer.getSize() << endl;

    return 0;
}
