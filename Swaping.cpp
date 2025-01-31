#include<iostream>
using namespace std;
int main()
{
	int a = 20 ;
	int b = 10 ;
	int temp;
	
	cout<<"Before Swaping : "<<endl;
	cout<<"Value of A is : "<<a<<" and Value of B : "<<b<<endl;
	
	temp = a;
	a = b;
	b = temp;
	
	cout<<"Afetr Swaping : "<<endl;
	cout<<"Value of A is : "<<a<<" and Value of B : "<<b;
	
	return 0;
	
}