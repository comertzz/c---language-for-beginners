#include<iostream>
using namespace std;
int main(){
	double derece,fahrenheit;
	int islem;
	cout<<"yapmak istediginiz islemi giriniz:"<<endl;
	cout<<"1:Dereceden Fahrenheita"<<endl;
	cout<<"2:Fahreheittan Dereceye"<<endl;
	cin>>islem;
	switch(islem){
		case 1:
			cout<<"Dereceyi giriniz:"<<endl;
			cin>>derece;
			fahrenheit=derece*1.8+32;
			cout<<"fahrenheita cevrilmis hali:"<<fahrenheit<<endl;
			break;
		case 2:
			cout<<"Fahrenheit giriniz:"<<endl;
			cin>>fahrenheit;
			derece=(fahrenheit-32)/1.8;
			cout<<"Dereceye cevrilmis hali:"<<derece<<endl;
			break;
	}
	
	
}
