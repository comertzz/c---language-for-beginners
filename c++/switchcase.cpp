#include<iostream>
using namespace std;
int main(){
	int islem;
	int a,b;
	cout<<"islemi giriniz:"<<endl;
	cout<<"1=Toplama"<<endl;
	cout<<"2=Cikarma"<<endl;
	cout<<"3=Carpma"<<endl;
	cout<<"4=Bolme"<<endl;
	cin>>islem;
	cout<<"islem:"<<islem<<endl;
	switch(islem){
		case 1:
			cout<<"toplama islemine hosgeldiniz"<<endl;
			cout<<"birinci sayiyi giriniz:"<<endl;
			cin>>a;
			cout<<"ikinci sayiyi giriniz:"<<endl;
			cin>>b;
			cout<<"iki sayinin toplami:"<<a+b;
			break;
		case 2:
			cout<<"cikarma islemine hosgeldiniz"<<endl;
			cout<<"birinci sayiyi giriniz:"<<endl;
			cin>>a;
			cout<<"ikinci sayiyi giriniz:"<<endl;
			cin>>b;
			cout<<"cikarma isleminin sonucu:"<<a-b;
			break;
		case 3:
			cout<<"carpma islemine hosgeldiniz"<<endl;
			cout<<"birinci sayiyi giriniz:"<<endl;
			cin>>a;
			cout<<"ikinci sayiyi giriniz:"<<endl;
			cin>>b;
			cout<<"carpma isleminin sonucu:"<<a*b;
			break;
		case 4:
			cout<<"bolme islemine hosgeldiniz"<<endl;
			cout<<"birinci sayiyi giriniz:"<<endl;
			cin>>a;
			cout<<"ikinci sayiyi giriniz:"<<endl;
			cin>>b;
			cout<<"bolme isleminin sonucu:"<<a/b;
			break;
		default:
			cout<<"gecerli bi islem giriniz.";
				
			
	}
}
