#include<iostream>
using namespace std;
int main(){
	int dizi[5]={1,4,3,5,2};
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(dizi[j]<dizi[i]){
				int gecici=dizi[j];
				dizi[j]=dizi[i];
				dizi[i]=gecici;
			}
		}
	}
	for(int a:dizi){
		cout<<a<<" ";
	}
}
