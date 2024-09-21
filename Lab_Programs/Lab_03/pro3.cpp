/*Write a program with the following function prototype,
a. void readArray(int a[],int size) – Function to read and store the data into an int
array. The array to store the data and its size are passed as parameters. The
parameter Size specifies the number of elements to be read.
b. void printArray(int a[],int size) - Function to print the elements of an int array.
The array to be printed and the number of elements are passed as parameters. The
parameter Size specifies the number of elements to be printed
c. int indexLargestElement(int a[],int size) - Function to find and return the index
of the first largest element in an int array. The parameter Size specifies the
number of elements in the array.
d. void copyArray(int a[], int src, int b[],int tar, int numOfElements) - Function to
copy some or all of the elements of one array into another array. Starting at the
position specified by src, the elements of array ‘a’ are copied into array ‘b’
starting at the position specified by tar. The parameter numOfElements specifies
the number of elements of array a to be copied into array b starting at the position
specified by tar, the array b must have enough components to copy the elements
of list1.*/

#include <iostream>
using namespace std;

void readArray(int a[],int size) 
{
    int i;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
}
void printArray(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<"\t";
    }
}
int indexLargestElement(int a[],int size)
{
    int max=0,i;
    max=a[0];
   for(i=0;i<size;i++){
   if(a[i]>max)
   {
       max=a[i];
   }
   }
   cout<<max;

}
void copyArray(int a[], int src, int b[],int tar, int numOfElements)
{
    for(int i=0;i<numOfElements;i++)
        {
         b[tar + i] = a[src + i];
        }
        for(int i=0;i<10;i++)
        {
         cout<<b[i]<<' ';
        }

}

int main() {
    int a[10],n,b[10]={0};
        cout<<"Enter array size:";
        cin>>n;
        cout<<"Enter the numbers:";
        readArray(a,n);
        cout<<"Printing the array elements:";
        printArray(a,n);
        cout<<"\nThe largest element\n";
        indexLargestElement(a,n);
        cout<<"\nArray after copying elements:";
        copyArray(a,2,b,4,3);
         return 0;
}