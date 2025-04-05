#include<iostream>
using namespace std;
class publication{
	public:
		char a;
		float f;
		book(char ad, float fiyat){
			fiyat=f;
			ad=a;
		}
			char ad=a;
			float fiyat=f;
			void setFiyat(float){
				fiyat=f;
			}
			void getFiyat(){
				cin>>fiyat;
			}
			void getAd(char){
				ad=a;
			}
			void putFiyat(){
				cout<<"fiyat:"<<fiyat;
			}
			void putAd(){
				cout<<"ad:"<<ad;
							
							}

};
class book:public publication{
	private:
		int s;
		int sayfa;
	public:
		Sayfa(int s){
	}
		void getSayfa(int s){
			sayfa=s;
			cin>>sayfa;
		}
		void putSayfa(){
			cout<<"sayfa:"<<sayfa;
		}
};
class tape:public publication{
	public:
		int calma;
		int c;
	public:
		Calma(int calma,int c){
		}
			void getCalma(int c){
				int calma=c;
				cin>>calma;
			}
			void putCalma(){
				cout<<"calma:"<<calma;
		
			}
		
};
int main(){
	book kitap1;
	cout<<"fiyat:"<<kitap1.putFiyat()<<endl;
	cout<<"ad:"<<kitap1.putAd()<<endl;
	cout<<"sayfa:"<<kitap1.putSayfa()<<endl;
}
