#include<iostream>
using namespace  std;
int main()
{
    int n=8;

    for(int r=1 ; r<=n ; r++)
    {
        for(int c=1 ; c<=r ; c++)
        {
            if(c==r || c<=1 || r==n)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}