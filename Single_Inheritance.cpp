#include<iostream>
using namespace std;
class A
{
    public:
     string company = "Suzuki";
};
class B : public A
{
    public:
    string model1 = "Swift";
    string model2 = "Baleno";
    string model3 = "Ciaz";
};
int main()
{
    B obj;
    cout<<endl<<"Brand of Car = "<<obj.company;
    cout<<endl<<"\tModel 1 = "<<obj.model1;
    cout<<endl<<"\tModel 2 = "<<obj.model2;
    cout<<endl<<"\tModel 3 = "<<obj.model3;
    return 0;
}