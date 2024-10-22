#include<iostream>
using namespace std;
class Student
{
    private:
    int a;
    string b;
    public:
    void info(int x,string y)
    {
        this->a=x;
        this->b=y;
        cout<<endl<<"Roll No = "<<this->a;
        cout<<endl<<"Name = "<<this->b;
    }
};
int main()
{
    Student a;
    a.info(1,"Dhanesh");
    Student b;
    b.info(2,"Swapnil");
    return 0;
}