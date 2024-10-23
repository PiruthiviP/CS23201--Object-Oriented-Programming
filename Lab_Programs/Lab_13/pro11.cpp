// 11. Write a menu driven program. Create a file that holds details about set of items. Each item should have an item ID, item name and its price. The menu should have options to create a file with set of items, append new item, delete existing item, update item price and display all the details.
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
    float price;
};

void createFile() {
    ofstream file("items.txt");
    Item item;
    for (int i = 0; i < 3; i++) {
        cout << "Enter item ID: ";
        cin >> item.id;
        cout << "Enter item name: ";
        cin >> item.name;
        cout << "Enter item price: ";
        cin >> item.price;
        file << item.id << " " << item.name << " " << item.price << endl;
    }
    file.close();
}

void displayItems() {
    ifstream file("items.txt");
    Item item;
    while (file >> item.id >> item.name >> item.price) {
        cout << "ID: " << item.id << ", Name: " << item.name << ", Price: " << item.price << endl;
    }
    file.close();
}

int main() {
    int choice;
    while (true) {
        cout << "Menu:\n1. Create File\n2. Display Items\n3. Exit\nChoose an option: ";
        cin >> choice;
        if (choice == 1) {
            createFile();
        } else if (choice == 2) {
            displayItems();
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice." << endl;
        }
    }
    return 0;
}
