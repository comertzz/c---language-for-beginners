#include <iostream>
#include <array>
#include <vector>
using namespace std;
void arttir(int n[],int boyut)
{
	
	for (size_t i = 0; i < boyut; i++)
	{
		n[i] += 10;
	}
}
int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[5] = { 20,25,30,35,2 };
	dizi[0] = 3;
	dizi[1] = 7;
	dizi[2] = 5;
	int boyut = sizeof(dizi) / sizeof(dizi[0]);
	arttir(dizi,boyut);
	
	cout << "dizi boyutu :" << boyut << endl;
	int toplam = 0;
	int enKucuk = dizi[0];
	for (size_t i = 0; i < boyut; i++)
	{
		cout << dizi[i] << "\t";
		toplam += dizi[i];
		if (dizi[i] < enKucuk) enKucuk = dizi[i];
	}
	cout << "Elemanlar toplamý :" << toplam << endl;
	cout << "En küçük eleman :" << enKucuk << endl;

	for (auto eleman : dizi)
		cout << eleman << "\t";


	cout <<"\n\n------array library-----" <<endl;
	array<int, 5> dizi2 = { 14,25,42,1,8 };
	cout << "dizi2 boyutu : " << dizi2.size()<<endl;
	for (int eleman : dizi2)
		cout << eleman << "\t";
	cout << "\n----matris tanýmlamasý---" << endl;

	array< array<int, 4>, 5> dizi3{};
	dizi3[1][1] = 15;
	dizi3[1][1]++;
	dizi3[4][3] = 10;

	for (auto satir : dizi3)
	{
		for (int eleman : satir)
		{
			cout << eleman << "\t";
		}
		cout << endl;
	}

	cout << "\n----vector tanýmlamasý---" << endl;
	vector<int> vektor1 = { 10,36,45,78,10,2 };
	for (int eleman : vektor1)
	{
		cout << eleman << "\t";
	}
	cout << endl;
	vektor1.push_back(5);
	vektor1.push_back(34);
	vektor1.pop_back();
	vektor1.erase(vektor1.begin() + 2);
	for (int eleman : vektor1)
	{
		cout << eleman << "\t";
	}
	cout << "son eleman " << vektor1.back();

}
