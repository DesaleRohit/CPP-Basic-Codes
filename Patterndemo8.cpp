#include<iostream>
using namespace std;
int main()
{
	int n=5;
	int m=5;
	for(int r=1 ; r<=n ; r++)
	{
		for(int c=1 ; c<=m ; c++)
		{
			if(r==3 || c==3)
			{
			   cout<<"* ";	
			}
			else
			{
			   cout<<"  ";	
			}
		}
		cout<<endl;
	}
}