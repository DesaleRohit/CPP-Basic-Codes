#include<iostream>
using namespace std;
int main()
{
	int n=7;
	for(int i=1 ; i<=n ; i++) //Rows
	{
		for(int j=1 ; j<=n-i ; j++)  //Spaces
		{
			cout<<" ";
		}
		for(int j=1 ; j<=n ; j++)  //Stars
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}