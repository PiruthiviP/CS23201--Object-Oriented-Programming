//Write a program for C++ Class Templates with Multiple Parameters and test it.
#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, double> intDoublePair(10, 15.5);
    intDoublePair.display();

    Pair<string, char> stringCharPair("Hello", 'A');
    stringCharPair.display();

    Pair<float, int> floatIntPair(12.34f, 56);
    floatIntPair.display();

    return 0;
}
