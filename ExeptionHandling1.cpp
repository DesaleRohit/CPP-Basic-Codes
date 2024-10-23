
#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int output;

    cout << "Enter the value of a :";
    cin >> num1;
    cout << "Enter the value of b :";
    cin >> num2;

    try
    {
        if (num2 == 0)
        {
            throw num2;
        }
        else
        {
            output = num1 / num2;
        }
    }
    catch (int d)
    {
        cout << "Do Not Divided by Zero" << endl;
    }
    cout << "Division :" << output << endl;
}
