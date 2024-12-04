#include <iostream>
using namespace std;

int main()
{
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted -> You are " << age << " years old."<<endl;
        }
        else
        {
            throw(age);
        }
    }
    catch (int A)
    {
        cout << "Access denied -> You must be at least 18 year old."<<endl;
        cout << " Your Age is :" << A;
    }
    return 0;
}