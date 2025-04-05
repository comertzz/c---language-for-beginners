#include<iostream>
using namespace std;
int kendiniCagiranFonksiyon(int i){
	if(i>0){
		cout<<i<<endl;
		kendiniCagiranFonksiyon(i-1);
	}
}
int main(){
	cout<<" "<<kendiniCagiranFonksiyon(5);
}
