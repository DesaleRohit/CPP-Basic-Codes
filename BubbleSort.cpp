#include <iostream>
using namespace std;
int main() 
{
   int size;
   cout<<"Enter the Size : ";
   cin>>size;
  int a[size];
  
   cout<<"Enter the Arrray Elements : ";
   for(int i=0 ; i<=size ; i++)
   {
       cin>>a[i];
   }
  
  cout<<"Row Elements : ";
  for(int i=0 ; i<=size ; i++)
  {
      cout<<a[i]<<"  ";
  }
  cout<<endl;
  
  for(int i=0 ; i<=size; i++)
  {
      for(int k=0 ; k<=size ; k++)
      {
          if(a[i] < a[k])
          {
              int temp = a[i];
              a[i]= a[k];
              a[k]=temp;
          }
      }
  }
  cout<<"Sorted Array : ";
  for(int i=0 ; i<=size ; i++)
  {
      cout<<a[i]<<"\t";
  }
  
 
    return 0;
}