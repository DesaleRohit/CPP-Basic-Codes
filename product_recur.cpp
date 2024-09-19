#include <iostream>
using namespace std;
int product(int a, int b)
{
    if (b == 0)
        return 0;
    return a + product(a, b - 1);
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Product of the two numbers is: " << product(a, b) <<endl;
    return 0;
}


