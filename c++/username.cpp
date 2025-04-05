#include<iostream>
using namespace std;
int main(){
	string sys_username="comertzz";
	string sys_password="123456";
	string username;
	string password;
	while(true){
		cout<<"kullanici adi:";
		cin>>username;
		cout<<"parola:";
		cin>>password;
		if(username==sys_username && password==sys_password){
			cout<<"hosgeldinn "<<username<<endl;
			break;
		}
		else{
			cout<<"tekrar deneyiniz."<<endl;
		}
	}
	}
