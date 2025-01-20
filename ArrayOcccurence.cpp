#include<iostream>
using namespace std;
int main()
{
	int a[8] , i , temp = 0 , oc ;
	cout<<"Enter any 8 Numbers : ";
	for(i=0 ; i<=7 ; i++)
	{
	   cin>>a[i];
	} 
	cout<<"Enter the Number to check occuranc : ";
	cin>>oc;
	
	for(i=0 ; i<=7 ; i++)
	{
	   if(oc==a[i])
	   {
	   	 temp = temp + 1;
	   }
	}
	cout<<oc<<" is repeat "<<temp<<" times";
}