/*Write a function template to sort a set of numbers. Using this first sort the list of integers
and then sort the list of floating point values.*/

#include<iostream>
using namespace std;

template<typename T>
class Sorting {
    T arr[80];
    int n;
public:
    void get_array(int n) {
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
      this->n = n;
    }

    void print_array() {
        for(int i = 0; i < n; i++) {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }

    void sort() {
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < n - i - 1; j++) {
                if(arr[j] > arr[j + 1]) {
                    T temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
};

int main() {
    Sorting<int> s;
 
    int number;
    cout << "How many numbers do you want to enter? ";
    cin >> number;
    s.get_array(number);
    cout << "Before sorting: ";
    s.print_array();
    s.sort();
    cout << "After sorting: ";
    s.print_array();
    
    cout<<"For float sort:"<<endl;
    Sorting<float> s1;
    cout << "How many numbers do you want to enter? ";
    cin >> number;
    s1.get_array(number);
    cout << "Before sorting: ";
    s1.print_array();
    s1.sort();
    cout << "After sorting: ";
    s1.print_array();


    return 0;
}