#include<iostream>
using namespace std;
template<class T1, class T2>
void add(T1 a, T2 b)
{
    cout<<"Addition="<<a+b<<endl;
}
int main()
{
    int a=10,b=20;
    float x=10.5,y=20.5;
    add(a,b);
    add(x,y);
    add(a,x);
    add(y,b);
    return 0;
}