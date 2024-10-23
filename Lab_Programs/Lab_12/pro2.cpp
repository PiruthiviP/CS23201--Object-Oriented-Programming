//Write a program that illustrates the application of multiple catch statements.
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int a = 5;
    int b = 0;
    int choice;

    cout << "1: Division\n2: Array Access\nChoose an operation: ";
    cin >> choice;

    try {
        if (choice == 1) {
            if (b == 0) {
                throw runtime_error("Division by zero!");
            }
            cout << "Result: " << a / b << endl;
        } else if (choice == 2) {
            int arr[5] = {0, 1, 2, 3, 4};
            int index;
            cout << "Enter index (0-4): ";
            cin >> index;
            if (index < 0 || index >= 5) {
                throw out_of_range("Index out of range!");
            }
            cout << "Value: " << arr[index] << endl;
        } else {
            throw invalid_argument("Invalid choice!");
        }
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    } catch (const out_of_range& e) {
        cout << "Error: " << e.what() << endl;
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
