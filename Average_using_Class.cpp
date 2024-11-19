#include <iostream>
using namespace ::std;
class Average
{
public:
    void Avg(int n1, int n2, int n3)
    {

        int Total = (n1 + n2 + n3) / 3;

        cout << "\nAverage of 3 no =" << Total << endl;
    }
};

int main()
{
    int n1;
    int n2;
    int n3;
    cout << " Enter the 3 number :";
    cin >> n1;
    cin >> n2;
    cin >> n3;

    Average obj;
    obj.Avg(n1, n2, n3);
}