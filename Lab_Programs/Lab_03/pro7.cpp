// Write a C++ program to read a matrix from the keyboard and display the same on the
//screen using functions. Make the row and column parameter of the matrix a
#include <iostream>
using namespace std;
int readmatrix(int arr[][10],int size)
{
    int i=0,j=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>arr[i][j];
        }
    }
}
void printmatrix(int arr[][10],int size)
{
    int i=0,j=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
}
int main() {
   int size=2;
   int arr[10][10];
   cout<<"Enter the number:\n";
   readmatrix(arr,size);
   printmatrix(arr,size);

    return 0;
}