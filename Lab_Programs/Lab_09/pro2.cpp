/*Create a 'MATRIX' class of size m X n. Derive a class ‘MAT’ from MATRIX class .Add a member function to
overload ‘*’ operator to multiply two objects. (Single Inheritance)*/

#include<iostream>
using namespace std;

class MATRIX{
    protected:
    int a[10][10];
    
};
class MAT:public MATRIX
{
    

    public:
    void accept()
            {
                for(int i=0;i<3;i++)
                {
                    for(int j=0;j<3;j++)
                        cin>>a[i][j];
                }
            }

            void display()
            {
            for(int i = 0; i < 3; i++)
        {
                for(int j = 0; j < 3; j++)
                    cout << "\t" << a[i][j];
                cout << "\n"; 
    }
}

            MAT operator*(MAT M2)
            {
                MAT M3;

                for(int i=0;i<3;i++)
                {
                    for(int j=0;j<3;j++)
                    {
                      M3.a[i][j]=0;
                      for(int k=0;k<3;k++)
                      {
                         M3.a[i][j]=(a[i][k]*M2.a[k][j])+M3.a[i][j];
                      }
                    }
                }

                return M3;
            }
};


int main()
{
    MAT M1,M2,M3;

    cout<<"Enter Matrix M1 value: ";
    M1.accept();

    cout<<"\nEnter Matrix M2 value: ";
    M2.accept();
    M3=M1*M2;
    cout<<"\nMultiplication of M1*M2 :\n ";
    M3.display();

    return 0;
}