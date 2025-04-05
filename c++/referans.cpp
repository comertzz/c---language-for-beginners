#include<iostream>
using namespace std;
void degerDegistir(int &ref){
	ref=20;
}
int main(){
int a=10;
int &ref=a;
ref++;
cout<<"a nin degeri:"<<a<<endl;
degerDegistir(a);
cout<<"a nin yeni degeri:"<<a<<endl;
}
