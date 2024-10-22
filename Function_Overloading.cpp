#include<iostream>
using namespace std;
class addition
{
    public:
     void add(int a,int b)
     {
         cout<<"Addition="<<a+b<<endl;
     }

     void add(float a,float b,float c)
     {
         cout<<"Addition="<<a+b+c<<endl;
     }

};

int main()
{
     int a=10,b=20;
     float x=10.5,y=20.5,z=30.5;

     addition obj;
     obj.add(a,b);  //add(int,int)
     obj.add(x,y,z); //add(float,float,float)   
    
}