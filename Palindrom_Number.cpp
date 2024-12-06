#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int temp = n;
    int rev = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (n == rev)
    {
        cout << "The number is a Palindrome";
    }
    else
    {
        cout << "The number is not a Palindrome";
    }
    return 0;
}