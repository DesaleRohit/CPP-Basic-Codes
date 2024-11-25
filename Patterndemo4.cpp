#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number:";
	cin>>n;
	
	for(int r=1 ; r<=n ; r++)
	{
		for(int c=1 ; c<=n ; c++)
		{
			cout<<r<<" ";
		}
		cout<<endl;
	}
}