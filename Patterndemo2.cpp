#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number = ";
	cin>>n;
	int m;
	cout<<"Enter the Number = ";
	cin>>m;
	
	for( int r=1 ; r<=n ; r++)  // Rows
	{
		for(int c=1 ; c<=m ; c++) //Columns
		
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}