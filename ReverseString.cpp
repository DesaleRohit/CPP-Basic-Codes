#include <iostream>
using namespace std;
int main()
{
    string s = "Hello";
    int n = s.length();
    for (int i = n - 1; i >= 0; i--)
    {
        cout << s[i]<<"  ";
    }
    return 0;
}