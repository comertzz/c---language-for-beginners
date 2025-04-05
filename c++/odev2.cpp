#include<iostream>
using namespace std;
int main(){
	int vergilira,vergikurus,liratoplam,kurustoplam,toplam,p1lira,p2lira,p3lira,p1kurus,p2kurus,p3kurus,vergi;
	cout<<"1.lira giriniz:"<<endl;
	cin>>p1lira;
	cout<<"1.kurus giriniz:"<<endl;
	cin>>p1kurus;
	cout<<"2.lira giriniz:"<<endl;
	cin>>p2lira;
	cout<<"2.kurus giriniz:"<<endl;
	cin>>p2kurus;
	cout<<"3.lira giriniz:"<<endl;
	cin>>p3lira;
	cout<<"3.kurus giriniz:"<<endl;
	cin>>p3kurus;
	liratoplam=p1lira+p2lira+p3lira;
	kurustoplam=p1kurus+p2kurus+p3kurus;
	if(kurustoplam>100){
		liratoplam+=kurustoplam/100;
	cout<<liratoplam<<"."<<kurustoplam%100<<endl;
}
if(liratoplam>20){
	vergikurus=(liratoplam*100+kurustoplam)/10;
	vergilira=vergikurus%100;
	cout<<vergilira<<"."<<vergikurus%100<<"tl vergi odemelisiniz"<<endl;
}
else{
	cout<<"vergi odemenize gerek yoktur."<<endl;
}
}
