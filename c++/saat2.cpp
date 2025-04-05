#include<iostream>
using namespace std;
class Saat{
	private:
		int saat;
		int dakika;
		int saniye;
	public:
		Saat(int s=0,int d=0,int y=0){
			saat=s;
			dakika=d;
			saniye=y;
		}
		void setSaat(int s){
			saat=s;
		}
		void setDakika(int d){
			dakika=d;
		}
		void setSaniye(int y){
			saniye=y;
		}
		int getSaat(){
			return saat;
		}
		int getDakika(){
			return dakika;
		}
		int getSaniye(){
			return saniye;
		}
		void Arttir(int y){
			saniye+=y;
			while(saniye>=60){
				saniye-=60;
				dakika++;
			}
			while(dakika>=60){
				dakika-=60;
				saat++;
			}
		}
};
int main(){
	int art;
	Saat zaman(17,34,40);
	cout<<"saat:"<<zaman.getSaat()<<endl;
	cout<<"dakika:"<<zaman.getDakika()<<endl;
	cout<<"saniye:"<<zaman.getSaniye()<<endl;
	cin>>art;
	zaman.Arttir(art);
	cout<<"Arttiktan Sonra:"<<endl;
	cout<<"saat:"<<zaman.getSaat()<<endl;
	cout<<"dakika:"<<zaman.getDakika()<<endl;
	cout<<"saniye:"<<zaman.getSaniye()<<endl;
}
