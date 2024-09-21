/*Write a program that reads the test scores of ‘n’ students in the range 0–200. It should
then determine the number of students having scores in each of the following ranges: 0–
24, 25–49, 50–74, 75–99,100–124,125–149, 150–174, and 175–200. Output the score
ranges and the number of students.*/

#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
   {
    int a[50],b[7]={0},n,i;
    cout<<"enter n:";
    cin>>n;
    cout<<"Enter the marks of stdents :";
    for(i=0;i<n;i++)
      {
     cin>>a[i];
       }
     for(i=0;i<n;i++)
       {
        if(a[i]>0&&a[i]<24)
         {
            b[0]++;
         }
         else if(a[i]>25&&a[i]<49)
          {
             b[1]++;
           }
         else if(a[i]>50&&a[i]<74)
          {
             b[2]++;
            }
         else if(a[i]>75&&a[i]<99)
           {
             b[3]++;
            }
         else if(a[i]>100&&a[i]<124)
           {
              b[4]++;
            }
         else if(a[i]>125&&a[i]<149)
            {

              b[5]++;            b[5]++;
      else if(a[i]>150&&a[i]<174)
             {
               b[6]++;
             }
         else if(a[i]>175&&a[i]<200)
             {
                b[7]++;
             }
       }

      for(i=0;i<8;i++)
        {
          cout<<"\nN.o of students in range "<< i <<": "<<b[i];
        }

               return 0;
}