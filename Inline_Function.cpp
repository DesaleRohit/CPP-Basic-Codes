#include<iostream>
using namespace std;
inline int add(int a,int b)
{
    return a+b;
}
int main()
{
    int a=10,b=20;
    cout<<"Addition of "<<a<<" and "<<b<<" is "<<add(a,b)<<endl;
    return 0;
}