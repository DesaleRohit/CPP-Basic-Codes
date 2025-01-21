#include<iostream>
using namespace std;
int main()
{
	int max;
	int size;
	
	cout<<"Enter the size of Array : ";
	cin>>size;
	int a[size];
	cout<<"Enter the elements : ";
	for(int i=0 ; i<size ; i++)
	{
	   cin>>a[i];	
	}
	for(int i=0 ; i<size ; i++)
	{
		cout<<a[i]<<endl;
		if(max<=a[i])
		{
			max=a[i];
		}
	}
	
	cout<<"Max number in Array : "<<max<<endl;
}