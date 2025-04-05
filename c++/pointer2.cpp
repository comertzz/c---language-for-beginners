#include<iostream>
using namespace std;
void degerDegistir(int *ptr){
	*ptr=20;
	cout<<"fonksiyon icindeki deger:"<<*ptr<<endl;
}
int main(){
	int a=10;
	cout<<"a degiskeninin degeri:"<<a<<endl;
	degerDegistir(&a);
	cout<<"a degiskeninin yeni degeri:"<<a<<endl;
}
