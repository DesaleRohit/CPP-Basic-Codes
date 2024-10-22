#include<iostream>
using namespace std;
class Student
{
    private:
    int no;
    string name;
    public:
    Student(int x,string y)
    {
        no=x;
        name=y;
        cout<<endl<<"Roll No = "<<no;
        cout<<endl<<"Name = "<<name;
    }
    ~Student()
    {
        cout<<endl<<"Object is destroyed";
    }
};
int main()
{
    Student a(1,"Rohit");
    Student b(2,"Mohit");
    return 0;
}