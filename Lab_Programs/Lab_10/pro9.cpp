#include <iostream>
#include <string>
using namespace std;


class Player {
protected:
    string name;
    string nationality;

public:
    Player(const string& n, const string& nat) : name(n), nationality(nat) {}

    virtual void printing() {
        cout << "Name: " << name << endl;
        cout << "Nationality: " << nationality << endl;
    }
};


class Event : public Player {
private:
    string eventType;
    string eventName;

public:
    Event(const string& n, const string& nat, const string& type, const string& event) 
        : Player(n, nat), eventType(type), eventName(event) {}

    void printing() override {
        cout << "Name: " << name << endl;
        cout << "Nationality: " << nationality << endl;
        cout << "Event Type: " << eventType << endl;
        cout << "Event Name: " << eventName << endl;
    }
};


class Personnel : public Player {
private:
    string otherInfo;

public:
    Personnel(const string& n, const string& nat, const string& info) 
        : Player(n, nat), otherInfo(info) {}

    void printing() override {
        cout << "Name: " << name << endl;
        cout << "Nationality: " << nationality << endl;
        cout << "Other Information: " << otherInfo << endl;
    }
};

int main() {
    int choice;
    cout << "Enter 1 for event details, 2 for personal details: ";
    cin >> choice;

    if (choice == 1) {
        Event e("Rohit", "Indian", "cricket", "IPL");
        e.printing();
    } else if (choice == 2) {
       Personnel p("Rohit", "Indian", "Good bats man");
        p.printing();
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}