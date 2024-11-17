#include<iostream>
using namespace std;
class A
{
    public:
    int a , b , c;
    A(int x , int y , int z)
    {
        this->a = x;
        this->b = y;
        this->c = z;
    }
    void display()
    {
        cout<<endl<<"Given Numbers are: "<<a<<" , "<<b<<" , "<<c;
    }
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
        cout<<endl<<"Negative Of Given Numbers are: "<<a<<" , "<<b<<" , "<<c;
    }
};
int main()
{
    A obj(10 , 20 , 30);
    obj.display();
    -obj;
}