#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()
    {
        cout<<"This is Base Class"<<endl;
    }
};
class B : public A
{
    public:
    void show() override
    {
        cout<<"This is Derived Class"<<endl;
    }
};
int main()
{
    A *p;
    B obj;
    p = &obj;
    p->show();
    return 0;
}