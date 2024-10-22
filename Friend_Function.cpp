#include<iostream>
using namespace std;
class A;
class B
{
    int no2=20;
    friend void add(A, B);
};
class A
{
    int no1=10;
    friend void add(A, B);
};
void add(A temp1, B temp2)
{
    cout << "Addition = " << temp1.no1 + temp2.no2 << endl;
}
int main()
{
    A obj;
    B obj2;
    add(obj, obj2);
    return 0;
}