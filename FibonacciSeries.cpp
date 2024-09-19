#include<iostream>
using namespace std;
int main()
{
	int num=0;
	int a=1;
	int b=0;
	int fibo=0;
	cout<<"Enter the any no:";
	cin>>num;

	for( int i=0;i<=num;i++ )
	{
		fibo=a+b;
		cout<<"\n"<<fibo;
		a=b;
		b=fibo;
	}
	
}