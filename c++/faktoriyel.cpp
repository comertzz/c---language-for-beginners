#include<iostream>
using namespace std;
int main(){
	int sayi,i,faktoriyel=1;
	cout<<"faktoriyelinin hesaplanmasini istediginiz sayi giriniz:"<<endl;
	cin>>sayi;
	for(i=2;i<=sayi;i++){
		faktoriyel*=i;
	}
	cout<<"sayinin faktoriyeli:"<<faktoriyel<<endl;
	
	
}
