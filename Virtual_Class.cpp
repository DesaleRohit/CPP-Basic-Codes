#include<iostream>
using namespace std;
class A
{
    public:
    int a = 10;
};
class B : virtual public A
{
    public:
    int b = 10;
};
class C : virtual public A
{
    public:
    int c = 20;
};
class D : public B, public C
{
    public:
    int d = 20;
    void sum()
    {
        cout<<"Addition of ABCD = "<<a+b+c+d<<endl;
    }
};
int main()
{
    D obj;
    obj.sum();
}
