#include<iostream>
using namespace std;
int main()
{
	int max=0;
	int size;
	
	cout<<"Enter the size of Array= ";
	cin>>size;
	int a[size];
	
	cout<<"Enter the Array element:";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	int min=a[0];

	for(int i=0;i<size;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	cout<<"\nminimum="<<min<<endl;
	return 0;
}
