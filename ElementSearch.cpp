#include <iostream>
using namespace std;
int main()
{
    int a[8], search, check = 0, i;
    cout << "Enter the 8 Elements : ";
    for (i = 0; i <= 7; i++)
    {
        cin >> a[i];
    }

    cout << "Entered elements are : " << endl;
    for (i = 0; i <= 7; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Please Enter the search element : ";
    cin >> search;
    for (i = 0; i <= 7; i++)
    {
        if (a[i] == search)
        {
            check = 1;
            break;
        }
    }
    if (check == 1)
    {
        cout << "We have found thr search Element Number " << search << " at position " << i + 1;
    }
    else
    {
        cout << "Sorry!! we have not found the search number " << search;
    }
}