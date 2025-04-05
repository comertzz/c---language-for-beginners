#include<iostream>
using namespace std;
class Personel{
	private:
		string adSoyad;
		int tckimlik;
		//maas private olunca fonksiyondan erisemiyordum onun icin public yaptim.
	public:
		int maas;
		void setadSoyad(string adsad){
			adSoyad=adsad;
		}
		string getadSoyad(){
			return adSoyad;
		}
	
		void settckimlik(int tcKimlik){
			tckimlik=tcKimlik;
		}
		int gettckimlik(){
			return tckimlik;
		}
		void setmaas(int Maas){
			maas=Maas;
		}
		int getmaas(){
			return maas;
		}

};
class Memur: public Personel{
	private:
		string gorevYeri;
	public:
		void setgorevYeri(string gorev){
			gorevYeri=gorev;
		}
		string getgorevYeri(){
			return gorevYeri;
		}
	
};
class Ogretmen: public Personel{
	public:
		int ekders=4;
	
};
int memurmaasgoster(int){
		Memur m1;
	
		m1.setmaas(1000);
		m1.maas-=m1.maas*15/100;
	return m1.maas;
	
}
int ogretmenmaasgoster(int){
	Ogretmen o1;
	
		o1.setmaas(1000);
		//ekders ucretini ders basina 100 tl olarak belirledim.
		o1.maas+=(o1.ekders*100);
		o1.maas-=o1.maas*20/100;
	return o1.maas;
	
}

int main(){
	Ogretmen o1;
	Memur m1;
	o1.setadSoyad("comert");
	cout<<"ogretmen ismi:"<<o1.getadSoyad()<<endl;
	o1.settckimlik(454);
	cout<<"ogretmen tc:"<<o1.gettckimlik()<<endl;
	cout<<"ogretmen maasi:"<<ogretmenmaasgoster(o1.maas)<<endl;
	m1.setadSoyad("huseyin");
	cout<<"memur ismi:"<<m1.getadSoyad()<<endl;
	m1.settckimlik(288);
	cout<<"memur tc:"<<m1.gettckimlik()<<endl;
	m1.setgorevYeri("elazig");
	cout<<"memur gorev yeri:"<<m1.getgorevYeri()<<endl;
	cout<<"memur maasi:"<<memurmaasgoster(m1.maas);
	
	
}

