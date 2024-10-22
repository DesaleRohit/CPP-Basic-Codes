#include<iostream>
using namespace std;
class A
{
    public:
        string company = "Suzuki";
};

class B
{   
    public:
        string model1 = "Swift";
        string model2 = "Hybrid XL6";
};
class C : public A, public B
{
    public:
        string model3 = "Jimmy";
        string model4 = "Dzire";
};
int main()
{
    C obj;
    cout<<endl<<"Brand of Car = "<<obj.company;
    cout<<endl<<"\tModel 1 = "<<obj.model1;
    cout<<endl<<"\tModel 2 = "<<obj.model2;
    cout<<endl<<"\tModel 3 = "<<obj.model3;
    cout<<endl<<"\tModel 4 = "<<obj.model4;
    return 0;
}