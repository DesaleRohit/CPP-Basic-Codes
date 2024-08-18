#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any Number:";
    cin >> n;

    if (n % 5 == 0)
    {
        cout << "The Number is Divisible by 5";
    }
    else
    {
        cout << "The Number is not Divisible by 5";
    }
    return 0;
}