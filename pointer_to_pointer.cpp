#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int *pNum = &num;
    int **ppNum = &pNum;

    cout << "Value of num: " << num << endl;
    cout << "Value of pNum: " << pNum << endl;
    cout << "Value of ppNum: " << ppNum << endl;
    cout << "Value of *pNum: " << *pNum << endl;
    cout << "Value of **ppNum: " << **ppNum << endl;
}
