#include <iostream>
using namespace std;
int main()
{
    string str1 = "Hello";
    string str2 = "World";
    str1.insert(5, str2);
    cout << str1 << endl;
    return 0;
}