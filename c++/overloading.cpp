#include<iostream>
using namespace std;
void selamla(string name){
	cout<<"kimle gorusuyorum?"<<endl;
	cin>>name;
	cout<<"selamun aleykum "<<name<<endl;
}
int main(){
	string name;
	selamla(name);
}
