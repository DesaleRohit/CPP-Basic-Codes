#include<iostream>
using namespace std;
int main()
{
	int n , flag=1;
	cout<<"Enter the Number : ";
	cin>>n;
	
	if(n==1)
	{
		flag=1;
	}
	else
	{
		for(int i=2 ; i<n-1 ; i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
    {
      cout<<"The Number is Prime....";	
	}	
	else
	{
		cout<<"The Number is Not-Prime....";
	}
	return 0;
}