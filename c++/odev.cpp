#include<iostream>
using namespace std;
int main(){
	int vergi,p1lira,p2lira,p3lira,p1kurus,p2kurus,p3kurus,toplam,kurustoplami;
	cout<<"1. para miktarini sirayla tl ve kurus giriniz:"<<endl;
	cin>>p1lira;
	cin>>p1kurus;
	cout<<"2.para miktarini sirayla tl ve kurus giriniz:"<<endl;
	cin>>p2lira;
	cin>>p2kurus;
	cout<<"3.para miktarini sirayla tl ve kurus giriniz:"<<endl;
	cin>>p3lira;
	cin>>p3kurus;
	kurustoplami=p1kurus+p2kurus+p3kurus;
	toplam=p1lira*100+p1kurus+p2lira*100+p2kurus+p3lira*100+p3kurus;

	if(toplam>20*100){
		vergi=((toplam*10)/100);
		cout<<" vergi odemelisiniz:"<<vergi<<endl;
		
	}
	else{
		cout<<"vergi odemenize gerek yok."<<endl;
		cout<<"toplam:"<<toplam<<endl;
		
	}
	
}

