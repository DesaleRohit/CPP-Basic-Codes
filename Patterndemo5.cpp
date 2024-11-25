#include<iostream>
using namespace std;
int main()
{
	int n=10;
	
	for(int r=1 ; r<=n ; r++)
	{
		for(int c=1 ; c<=r ; c++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}