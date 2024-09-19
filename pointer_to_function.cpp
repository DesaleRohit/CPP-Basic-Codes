#include <iostream>
using namespace std;
int add(int a, int b)
{
    return (a + b);
}
int subtract(int a, int b)
{
    return (a - b);
}
int multiply(int a, int b)
{
    return (a * b);
}
int divide(int a, int b)
{
    return (a / b);
}
int main()
{ 
    int (*ptr)(int, int);
    int a = 5, b = 2;
    ptr = add;
    cout << "Addition of " << a << " and " << b << " is " << ptr(a, b) << endl;
    ptr = subtract;
    cout << "Subtraction of " << a << " and " << b << " is " << ptr(a, b) << endl;
    ptr = multiply;
    cout << "Multiplication of " << a << " and " << b << " is " << ptr(a, b) << endl;
    ptr = divide;
    cout << "Division of " << a << " and " << b << " is " << ptr(a, b) << endl;
    return 0;
}
