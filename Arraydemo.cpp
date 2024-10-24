#include <iostream>
using namespace std;

void show(int arr[4]);

int main()
{
    int arr1[4] = {10, 20, 30, 40};
    int arr2[4] = {1, 2, 3, 4};
    show(arr1);
    show(arr2);
    return 0;
}
void show(int arr[4])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "index = " << i << " value -> " << arr[i] << endl;
    }
    cout << "\n";
}