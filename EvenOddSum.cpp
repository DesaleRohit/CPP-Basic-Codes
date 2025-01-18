#include <iostream>
using namespace std;
int main()
{
    int i, size;
    int evensum = 0, oddsum = 0;

    cout << "Enter the size of Array :" << endl;
    cin >> size;
    int a[size];

    cout << "Enter the Number :" << endl;
    for (i = 1; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Odd  \tEven"<<endl;
    for (i = 1; i < size; i++)
    {
        if (i % 2 == 0)
        {
            cout << "\t" << i << endl;
            evensum = evensum + i;
        }
        else
        {
            cout << i << endl;
            oddsum = oddsum + i;
        }
    }
    cout << "----------------" << endl;
    cout << oddsum << "\t" << evensum;
}