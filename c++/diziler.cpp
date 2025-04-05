#include<iostream>
using namespace std;
class biklas{
	public:
	void diziler(int gelensize){
		const int size=gelensize;
		int sayilar[size];
		int i;
		for (i=0;i<size;i++){
			cout<<i<<"-"<<sayilar[i]<<endl;
			sayilar[i]=i;
		}
		for(i=0;i<size;i++){
			cout<<sayilar[i]<<endl;
		}
	}
	void diziler2(){
		int aygunleri[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		string aylar[12]={"ocak","subat","mart","nisan","mayis","haziran","temmuz","agustos","eylul","ekim","kasim","aralik"};
		for(int i=0;i<12;i++){
			cout<<aylar[i]<<"  ayi "<<aygunleri[i]<<"  gundur."<<endl;
			
		}
	}
	void diziler3(){
		int aygunleri[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		string aylar2[4][3]={{"ocak","subat","mart"},{"nisan","mayis","haziran"},{"temmuz","agustos","eylul"},{"ekim","kasim","aralik"}};
		for(int i=0;i<12;i++){
			cout<<aylar2[i/4][i%4]<<"  ayi "<<aygunleri[i]<<"  gundur"<<endl;
		}
		//dizi[0].testfonk();
	}
};
	int main(){
	biklas d1;

	d1.diziler2();
	
	
}

