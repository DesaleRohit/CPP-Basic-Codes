#include <iostream>
using namespace std;
class addition
{
public:
    void add(int a, int b)
    {

        cout << "Addition=" << a + b << endl;
    }

    void add(float a, float b, float c)
    {

        cout << "Addition=" << a + b + c << endl;
    }
};

int main()
{
    int a, b;
    float x, y, z;
    cout << "Enter the two Numbers:";
    cin >> a >> b;
    cout << "Enter Three numbers:";
    cin >> x >> y >> z;

    addition obj;
    obj.add(a, b);    // add(int,int)
    obj.add(x, y, z); // add(float,float,float)
}