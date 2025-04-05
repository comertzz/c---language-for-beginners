#include<iostream>
using namespace std;
int main(){
	string password="comert";
	string input;
	cout<<"lutfen parola giriniz:";
	cin>>input;
	if(password==input){
		cout<<"dogru sifre"<<endl;
		
	}
	else{
		cout<<"yanlis sifre"<<endl;
	}
}
