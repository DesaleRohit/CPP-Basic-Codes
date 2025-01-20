#include <iostream>
using namespace std;
int main()
{
    int size;
    int total;
    cout << "enter the Array size:" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the Array element: " << endl;

     for (int i = 0; i < size; i++)
     {
         cin >> arr[i];
     }
    cout << "Array Element :" << endl;
    for (int j = 0; j < size; j++)
    {
        cout << j << " index: " << arr[j] << endl;
        total += arr[j];
    }
    cout << "\nTotal =" << total << endl;
    return 0;
}