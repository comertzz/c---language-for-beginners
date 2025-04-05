#include<iostream>
using namespace std;
int main(){
	int n,r,fact1=1,fact2=1,fact3=1,perm;
	int islem,komb;
	cout<<"yapmak istediginiz islemi giriniz:"<<endl;
	cout<<"1=Permutasyon"<<endl<<"2=Kombinasyon"<<endl;
	cin>>islem;
	switch(islem){
		case 1:
			cout<<"permutasyonunu istediginiz iki sayiyi giriniz"<<endl;
			cin>>n;
			cin>>r;
			if(n>=r && n>0 && r>0){
			while(n!=0){
				fact1*=n;
				n--;
			}
			while(r!=0){
				fact2*=r;
				r--;
			}
			perm=fact1/fact2;
			cout<<"permutasyon:"<<perm<<endl;
		}
			break;
		case 2:
			cout<<"kombinasyonu istediginiz iki sayiyi giriniz:"<<endl;
			cin>>n;
			cin>>r;
			if(n>=r && n>0 && r>0){
				while(n!=0){
				fact1*=n;
				n--;
			}
			while(r!=0){
				fact2*=r;
				r--;
			}
			while((n-r)!=0){
				fact3*=(n-r);
				n--;
				r--;
			}
			perm=fact1/fact2;
			komb=perm/fact3;
			cout<<"kombinasyon:"<<komb<<endl;
			}
			break;

			}			
			
	}

