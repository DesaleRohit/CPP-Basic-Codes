#include <iostream>
using namespace ::std;
class show
{

public:
    void Sum(int n, int sum)
    {

        if (n == 0)
        {
            cout << "sum=" << sum;
            return;
        }
        cout << n << endl;
        sum += n;
        Sum(n - 1, sum);
    }
};

int main()
{

    int n = 5;
    int sum = 0;

    show obj;

    obj.Sum(n, sum);
    return 0;
}