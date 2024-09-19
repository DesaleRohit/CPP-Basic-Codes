#include<iostream>
using namespace std;
void add(int a,int b){
	int c = a+b;
	cout<<"Addition="<<c<<endl;
}
void sub(int a,int b){
	int c = a-b;
	cout<<"Subtraction="<<c<<endl;
}
int main(){
	int a = 80;
	int b = 30;
	add(a,b);
	sub(a,b);
	
	return 0;
}