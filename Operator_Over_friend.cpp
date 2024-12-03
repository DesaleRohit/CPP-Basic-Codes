#include <iostream>
using namespace std;
class Unaryclass
{
    int a;
    int b;

public:
    Unaryclass(int x, int y)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
    }

    friend void operator-(Unaryclass &obj);
};
void operator-(Unaryclass &obj)
{
    obj.a = -obj.a;
    obj.b = -obj.b;
}
int main()
{
    Unaryclass obj(-10, 20), t(-100, 200);
    obj.show();
    t.show();
    -obj;
    -t;
    t.show();
    obj.show();

    return 0;
}