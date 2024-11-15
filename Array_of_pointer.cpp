#include<iostream>
using namespace std;

int main()
{
   int a=5, b=10, c=15;
   int *p[3];

   p[0] = &a;
   p[1] = &b;
   p[2] = &c;

   for (int i=0; i<3; i++)
   {
      cout<<"value of array["<<i<<"] = "<<*p[i]<<endl;
   }
}