// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() 
{
   int a[3][3],b[3][3],z[3][3],r,c;
   
   cout<<"Enter the first Matrix Elements : ";
   for(r=0 ; r<=2 ; r++)
   {
       for(c=0 ; c<=2 ; c++)
       {
           cin>>a[r][c];
       }
   }
   
   cout<<"Enter the second Matrix Elements : ";
   for(r=0 ; r<=2 ; r++)
   {
       for(c=0 ; c<=2 ; c++)
       {
           cin>>b[r][c];
       }
   }
   
   cout<<"First Matrix : "<<endl;
   for(r=0 ; r<=2 ; r++)
   {
       for(c=0 ; c<=2 ; c++)
       {
           cout<<"\t"<<a[r][c];
       }
       cout<<endl;
   }
   
   cout<<"Second Matrix : "<<endl;
   for(r=0 ; r<=2 ; r++)
   {
       for(c=0 ; c<=2 ; c++)
       {
           cout<<"\t"<<b[r][c];
       }
       cout<<endl;
   }
   
   for(r=0 ; r<=2 ; r++)
   {
       for(c=0 ; c<=2 ; c++)
       {
           z[r][c] = a[r][c] + b[r][c];
       }
   }
    cout<<"The Addition of 3x3 Matrix is : "<<endl;
   for(r=0 ; r<=2 ; r++)
   {
       for(c=0 ; c<=2 ; c++)
       {
           cout<<"\t"<<z[r][c];
       }
       cout<<endl;
   }
   
    return 0;
}