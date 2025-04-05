#include<iostream>
using namespace std;
void faktoriyel(int sayi){
	int i;
	int fakto=1;
	for(i=2;i<=sayi;i++){
		fakto*=i;
	}
	cout<<"sayinin faktoriyeli:"<<fakto<<endl;
}
int main(){
	int sayi;
	cout<<"faktoriyeli hesaplanmasini istediginiz sayiyi giriniz:"<<endl;
	cin>>sayi;
	faktoriyel(sayi);
}
