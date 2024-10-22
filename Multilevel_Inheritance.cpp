#include <iostream>
using namespace std;

class A
{

public:
    void add(int a, int b)
    {
        int c = a + b;
        cout << "Addition=" << c << endl;
    }
};
class B : public A
{

public:
    void multi(int a, int b)
    {
        int c = a * b;
        cout << "Multipication=" << c << endl;
    }
};
class C : public B
{
public:
    void sub(int a, int b)
    {
        int c = a - b;
        cout << "Subtraction=" << c << endl;
    }
};

int main()
{
    int a = 20;
    int b = 5;
    C obj;
    obj.add(a, b);
    obj.multi(a, b);
    obj.sub(a, b);
}