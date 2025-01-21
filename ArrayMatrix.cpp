#include<iostream>
using namespace std;
int main()
{
	int a[3][3] , r , c;
	cout<<"Enter the 3X3 Array elements : ";
	
	for(r=0 ; r<=2 ; r++)
	{
		for(c=0 ; c<=2 ; c++)
		{
			cin>>a[r][c];
		}
	}
	cout<<"Array elements are : "<<endl;
	for(r=0 ; r<=2 ; r++)
	{	
		for(c=0 ; c<=2 ; c++)
		{
			cout<<a[r][c]<<"  ";
		}
		cout<<endl;
	}
}