#include <iostream>
using namespace std;

int main()
{
    int arr[2][2] = {{10, 20}, {30, 40}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "arr[" << i << "][" << j << "] =" << arr[i][j] << "\n";
        }
    }
    return 0;
}