#include<iostream>
using namespace std;
int main()
{
    int n , flag, i;
    for (n =1 ; n <=100 ; n++)
    {
        flag =0;
        for(i=2 ; i<=n/2 ; i++)
        {
            if( n % i ==0)
            {
                flag++;
                break;  
            }
        }
        if(flag == 0 && n!=1)
        {
            cout<<n<<endl;
        }
    }
    return 0;
}