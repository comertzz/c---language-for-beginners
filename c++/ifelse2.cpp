#include<iostream>
using namespace std;
int main(){
	int a,b;
	string islem;
	cout<<"hesap makinesi baslangici"<<endl;
	cout<<"1. islem:Toplama islemi."<<endl;
	cout<<"2.islem:Cikarma islemi."<<endl;
	cout<<"3.islem:Carpma islemi."<<endl;
	cout<<"4.islem:Bolme islemi."<<endl;
	cout<<"Islemi giriniz."<<endl;
	cin>>islem;
	if(islem=="1"){
		cout<<"birinci sayiyi giriniz:";
		cin>>a;
		cout<<"ikinci sayiyi giriniz:";
		cin>>b;
		cout<<"toplama isleminin sonucu:"<<a+b<<endl;
	}
	if(islem=="2"){
		cout<<"birinci sayiyi giriniz:";
		cin>>a;
		cout<<"ikinci sayiyi giriniz:";
		cin>>b;
		cout<<"cikarma isleminin sonucu:"<<a-b<<endl;
		
	}
	if(islem=="3"){
		cout<<"birinci sayiyi giriniz:";
		cin>>a;
		cout<<"ikinci sayiyi giriniz:";
		cin>>b;
		cout<<"carpma isleminin sonucu:"<<a*b<<endl;
		
	}
	if(islem=="4"){
		cout<<"birinci sayiyi giriniz:";
		cin>>a;
		cout<<"ikinci sayiyi giriniz:";
		cin>>b;
		cout<<"bolme isleminin sonucu:"<<a/b<<endl;
	}
}
