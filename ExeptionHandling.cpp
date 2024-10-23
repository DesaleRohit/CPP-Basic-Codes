#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Execution starting..." << endl;

    cout << "Enter the First Numbers:";
    cin >> a;
    cout << "Enter the Second Numbers:";
    cin >> b;

    try
    {
        if (b == 0)
            throw b;
        c = a / b;
        cout << "Result:" << c;
    }

    catch (int x)
    {
        cout << "can not divided by:" << x;
    }

    cout << endl
         << "Execution Ended...";

    return 0;
}