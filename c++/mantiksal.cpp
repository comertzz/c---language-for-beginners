#include<iostream>
using namespace std;
int main(){
	string kullaniciadi="comertbaba";
	string password="MuhammetComert";
	string kadi;
	string pass;
	cout<<"kullanici adinizi giriniz"<<endl;
	cin>>kadi;
	if(kadi!=kullaniciadi){
		cout<<"kullanici adi yanlis"<<endl;
	}
	else{
		cout<<"sifre giriniz"<<endl;
		cin>>pass;
		if(pass==password){
			cout<<"basarili giris.";
		}
		else{
			cout<<"sifre yanlis";
		}
	}
	
}
