#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int a=1;
	for(int r=1 ; r<=n ; r++)
	{
		for(int c=1 ; c<=r ; c++)
		{
			cout<<a++<<" ";
		}
		cout<<endl;
	}
	
}