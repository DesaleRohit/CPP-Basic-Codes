#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int r = 0;
    int h = 0;
    cout << "Enter the number:";
    cin >> num;
    int temp = num;
    for (int i = 0; i < 3; i++)
    {
        r = num % 10;
        h = h + (r * r * r);
        num = num / 10;
    }
    if (temp == h)
    {
        cout << temp << " is Armstrong Number";
    }
    else
    {
        cout << temp << " is not Armstrong Number";
    }
    return 0;
}