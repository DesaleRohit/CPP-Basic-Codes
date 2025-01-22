#include <iostream>
using namespace std;
int main()
{
    int a[3][3], r, c, flag = 0;
    cout << "Enter the 3X3 m=Matrix : ";
    for (r = 0; r <= 2; r++)
    {
        for (c = 0; c <= 2; c++)
        {
            cin >> a[r][c];
        }
    }
    cout << "The Matrix elements are : " << endl;
    for (r = 0; r <= 2; r++)
    {
        for (c = 0; c <= 2; c++)
        {
            cout << "\t" << a[r][c];
        }
        cout <<endl;
    }
    for (r = 0; r <= 2; r++)
    {
        for (c = 0; c <= 2; c++)
        {
            if (r == c && a[r][c])
                flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "The Matrix is Diagonal...";
    }
    else
    {
        cout << "The Matrix is Not-Diagonal...";
    }
}