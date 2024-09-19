#include <iostream>
using namespace std;

class Demo
{
    int x, y;

public:
    Demo(int a, int b)
    {
        x = a;
        y = b;
    }

    void show()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main()
{
    Demo d(10, 20);
    Demo *ptr = &d;

    ptr->show();

    return 0;
}
