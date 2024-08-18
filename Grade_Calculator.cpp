#include <iostream>
using namespace std;
int main()
{
    int mrks,math,os,cpp,wdt, total = 0;
    float per=0.0;
    cout << "Enter the Marks of Mathematics: ";
    cin >> math;
    cout << "Enter the Marks of Operating System: ";
    cin >> os;
    cout << "Enter the Marks of C++: ";
    cin >> cpp;
    cout << "Enter the Marks of Web-Development-I: ";
    cin >> wdt;
    total = math + os + cpp + wdt;
    per = total / 4;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << per << endl;
    if (per >= 35 && per < 55)
    {
        cout << "Student Pass with Grade: D";
    }
    else if (per >= 55 && per < 70)
    {
        cout << "Student Pass with Grade: C";
    }
    else if (per >= 70 && per < 85)
    {
        cout << "Student Pass with Grade: B";
    }
    else if (per >= 85 && per < 100)
    {
        cout << "Student Pass with Grade: A";
    }
    else
    {
        cout << "Student Fail";
    }
}
