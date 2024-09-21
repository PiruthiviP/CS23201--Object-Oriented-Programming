/*Write C++ program to define matrix and vector class, and do matrix-vector
multiplication using friend function.

Here a, b, c and d are array elements and x, y are vector elements.*/
#include <iostream>
using namespace std;
class vector;
class matrix{
    int arr[3][3];
     public:
    void getdata()
    {
         cout<<"Enter the matrix values:"<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
                
            }
        }
    }
   friend void multiplication(matrix,vector);
};
class vector{
    int arr[3];
    public:
    void vectordata()
    {
        cout<<"Enter the vector values:"<<endl;
    for(int i=0;i<2;i++)
    {
        cin>>arr[i];
    }
    }
    friend void multiplication(matrix,vector);
};
void multiplication(matrix m1,vector v1)
{
    int brr[4][5];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            brr[i][j]=m1.arr[i][j]*v1.arr[i];
        }
    }

    cout<<"The vector multiplication:"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<brr[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main() {
    matrix m1;
    vector v1;
    m1.getdata();
    v1.vectordata();
    multiplication(m1,v1);
    return 0;
}