#include<iostream>
using namespace std;
struct adres{
	string sehir;
	int no;
	
	
};
struct car{
	int model;
	string plaka;
	string marka;
	float motor;
	adres adres;
	};
	int main(){
		car car1 = {2022,"23HD523","TOYOTA",1.5,{"Elazig",23}};
		cout<<car1.adres.no<<endl<<car1.adres.sehir<<endl<<car1.marka<<endl<<car1.model<<endl<<car1.motor<<endl<<car1.plaka<<endl;
	}
