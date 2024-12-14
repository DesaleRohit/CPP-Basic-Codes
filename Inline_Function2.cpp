#include<iostream>
using namespace std;

inline int Opretion(int a, int b){
	return a*b;
}
int main(){
	int a = 10;
	int b = 20;
	cout<<"Opretion="<<Opretion(a,b)<<endl;
	cout<<"Opretion="<<Opretion(a,b)<<endl;
	cout<<"Opretion="<<Opretion(a,b)<<endl;
	return 0;
}