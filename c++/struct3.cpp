#include<iostream>
using namespace std;
struct uzunluk{
	int metre;
	int santim;
};
struct Gemi{
	string adi;
	int uzunlugu;
};
void gemibilgileriniyazdir(string ad,int metre,int santim){
	cout<<ad<<" isimli geminin uzunlugu:"<<metre<<" metre ve"<<santim<<" santim"<<endl;
}
int main(){
	Gemi g1;
	gemibilgileriniyazdir("sansliS",5,5);
	g1.adi="sansliS";
	g1.uzunlugu.metre=5;
	g1.uzunlugu.santim=3;
	gemibilgileriniyazdir(g1);
	
}
