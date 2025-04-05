#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
using namespace std;
void kk(){
	const int size=9;
	char str2[size]={'m','.',' ','c','o','m','e','r','t'};
	cout<<str2<<endl;
	char str[size]="M.Comert";
	cout<<str<<endl;
}
void kk1(int size_g){
	const int size=size_g;
	char str[size];
	cout<<"bir string girin"<<endl;
	cin>>str;
	cout<<"girdiginiz string:"<<str<<endl;
}
void kk2(int size_g){
	const int size=size_g;
	char str[size];
	cout<<"bir string girin"<<endl;
	cin>>setw(size)>>str;
	cout<<"girdiginiz string:"<<str<<endl;
}
void kk3(){
	const int size=150;
	char str[size];
	cout<<"bir string girin"<<endl;
	cin.get(str,size,'$');
	cout<<"girdiginiz string:"<<endl<<str<<endl;
}
int main(){
	char test[20]="ali topu tut";
	char test2[20];
	strcpy(test2,test);
	cout<<test2;
}
