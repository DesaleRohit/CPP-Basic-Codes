#include<iostream>
using namespace std;

class B;
class A
{
    private:
    int a = 10;
    int b = 20;
    friend class B;
};
class B
{
    public:
    void print(A temp)
    {
        cout<<"Addition of Two Numbers = "<<temp.a+temp.b<<endl;
    }
};
int main()
{
    A obj;
    B obj1;
    obj1.print(obj);
    return 0;
}