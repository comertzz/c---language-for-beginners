#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
//#include "TarihSaat.h";
using namespace std;
class TarihSaat
{
private:
	unsigned int saat, dakika, saniye;
public:
	
	~TarihSaat() {
		cout << " nesne yok oldu ";
	} 
	TarihSaat() :TarihSaat(0, 0, 0)
	{
		
	}
	TarihSaat(int saat, int dakika, int saniye)
	{
		tarihSaatAyarla(saat, dakika, saniye);
	}
	//void tarihSaatAyarla(int saat=0, int dakika=0, int saniye=0)
	void tarihSaatAyarla(int saat, int dakika, int saniye)
	{
		
		if (saat >= 0 && saat < 24)
		{
			this->saat = saat;
			this->dakika = dakika;
			this->saniye = saniye;
		}
		else
			throw invalid_argument("saat geçerli deðil\n");
	}
	void uzunFormatYazdir() 
	{
		cout << "Saat :" << setfill('0') << setw(2) << saat%12;
		cout << ":" << setfill('0') << setw(2) << dakika;
		cout << ":" << setfill('0') << setw(2) << saniye;
		cout << (saat >= 12 ? " PM" : " AM") << endl;
	}
	void kisaFormatYazdir() {
		cout << "Saat :" <<setfill('0')<<setw(2) << saat << ":" << setfill('0') << setw(2)<<dakika<<endl;
	}
	TarihSaat topla(TarihSaat t1,TarihSaat t2)
	{
		t1.saat += t2.saat;
		t1.dakika += t2.dakika;
		
		return t1;

	}
	//operator overloading
	TarihSaat operator +(TarihSaat eklenecek) 
	{
		dakika += eklenecek.dakika;
		saat += eklenecek.saat;
		saniye += eklenecek.saniye;
		return *this;
	}
	TarihSaat operator -(TarihSaat cikarilacak)
	{
		TarihSaat temp;
		temp.saat = saat - cikarilacak.saat;
		temp.dakika= dakika- cikarilacak.dakika;
		temp.saniye = saniye - cikarilacak.saniye;
		return temp;
	}
	TarihSaat &setDakika(int d)
	{
		dakika = d;
		return *this;
	}
	TarihSaat& setSaniye(int s)
	{
		saniye = s;
		return *this;
	}
	
	string saatver()
	{
		string sonuc = "Sonuç:";
		sonuc += saat + ":" + dakika;
		sonuc += ":" + saniye;
		return sonuc;

	}
};
int main()
{

	setlocale(LC_ALL, "Turkish");
	
	TarihSaat t;
	TarihSaat tToplanacak,tCikar;
	t.setDakika(25).setSaniye(23);
	tToplanacak.setDakika(5);
	tCikar.setSaniye(3);
	t = t + tToplanacak;
	t.uzunFormatYazdir();
	t = t - tCikar;
	t.uzunFormatYazdir();
//	//TarihSaat &referans = t;
	TarihSaat *ptrT = &t;
	t.tarihSaatAyarla(22, 0, 0);
	t.tarihSaatAyarla(22, 0, 0);
	t.kisaFormatYazdir();
	cout << t.saatver();
	ptrT->kisaFormatYazdir();
//	
//	
	try
	{
		t.tarihSaatAyarla(25, 0, 0);
	}
	catch (exception& e)
	{
		cout << e.what();
	}
	t.uzunFormatYazdir();
	TarihSaat tYeni;
	tYeni.uzunFormatYazdir();
	
	TarihSaat t3;
	tYeni.tarihSaatAyarla(5, 12, 0);
	
	t3=t3.topla(t, tYeni);
	
	cout << "t3:";
	t3.kisaFormatYazdir();
}

