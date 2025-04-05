#include<iostream>
using namespace std;
struct car{
	int model;
	string plaka;
	string marka;
	float motor;
	};
	void show(car* car1){
		cout<<"model:"<<car1->model<<endl;
		cout<<"plaka:"<<car1->plaka<<endl;
		cout<<"marka:"<<car1->marka<<endl;
		cout<<"motor:"<<car1->motor<<endl;
	}
	void showCar(car car1){
		cout<<"model:"<<car1.model<<endl;
		cout<<"plaka:"<<car1.plaka<<endl;
		cout<<"marka:"<<car1.marka<<endl;
		cout<<"motor:"<<car1.motor<<endl;
	}

int main(){
	car car1={2009,"44ND700","Hyundai",1.4};
	show(&car1);
	

}
