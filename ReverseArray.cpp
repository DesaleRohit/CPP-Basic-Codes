#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;

    int a[size];

    cout << "Enter the elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << endl
         << "Array Elements : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
    for (int i = 0; i < size / 2; i++)
    {
        int temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }
    cout << endl
         << "Reversed Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
}