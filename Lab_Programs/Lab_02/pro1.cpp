// Write a program that declares an array VAL of 50 components of type integer. Initialize the array so that the first 25 components are equal to the square of the index variable, and the last 25 components are equal to three times the index variable. Output the array so that 10 elements per line are printed
//a) Using traditional for loop b) Using range based for loop.
#include <iostream>

using namespace std;

int main() {
    int VAL[50];

  cout<<"Using traditional for loop";  
    for (int i = 0; i < 50; i++) {
        if (i < 25) {
            VAL[i] = i * i;
        } else {
            VAL[i] = 3 * i;
        }
    }
     int j = 0;
    for (int i = 0; i < 50; i++) {
        cout << VAL[i] << " ";
        j++;

        if (j == 10) {
            cout << endl;
            j = 0; 
        }
    }
    cout << endl; 
    cout<<"\n Using range based for loop\n";
    j=0;
    for(auto &range:VAL)
    {
        cout << range << " " ;  
        j++;

        if (j == 10) {
            cout << endl;
            j = 0; 
        }
    }

    return 0;
}