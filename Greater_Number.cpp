#include <iostream>
using namespace std;

class Number
{

public:
    int Greater(int no1, int no2)
    {

        if (no1 > no2)
        {
            return no1;
        }
        else
        {
            return no2;
        }
    }
};

int main()
{

    int no1;
    int no2;

    cout << "Enter the 1 Number:";
    cin >> no1;

    cout << "Enter the 2 Number:";
    cin >> no2;

    Number obj;
    cout << obj.Greater(no1, no2) << " is greater Number.";
}