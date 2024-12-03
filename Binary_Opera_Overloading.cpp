#include <iostream>
using namespace std;
class Binaryclass
{
    int a;
    int b;

public:
    Binaryclass(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
    }

    Binaryclass operator+(Binaryclass obj)
    {
        Binaryclass temp(0, 0);
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};
int main()
{
    Binaryclass obj(10, 20), obj1(30, 40), obj2(0, 0);
    obj2 = obj + obj1;
    obj2.show();
    return 0;
}