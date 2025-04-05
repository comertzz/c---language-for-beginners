#include<iostream>
using namespace std;
int main(){
	int a=5;
	int *ptr=&a;
	cout<<"a nin adresi:"<<&a<<endl;
	cout<<"a nin adresi2:"<<ptr<<endl;
	cout<<"a nin degeri:"<<*ptr<<endl;
	*ptr=6;
	cout<<"a nin yeni degeri:"<<*ptr<<endl;
	cout<<"a nin yeni degeri2:"<<a<<endl;
	
}
