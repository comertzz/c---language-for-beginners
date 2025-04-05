
#include<iostream>
using namespace std;
class koordinat{
	private:
		int x;
		int y;
	public:
		static int nesnesayisi;
		koordinat(): x(0),y(0){
			nesnesayisi++;
			cout<<"const working without parameters"<<endl;
		}
			koordinat(int x,int y){
			nesnesayisi++;
			cout<<"const working with parameters"<<endl;
			this->x=x;
			this->y=y;
		}
		~koordinat(){
			cout<<"deconstructing"<<endl;
		}
		void ata(int x, int y){
			this->x=x;
			this->y=y;
		}
		void yazdir(){
			cout<<x<<","<<y<<endl;
		}
		const void SinifAdi(){
			x=7;
			cout<<"bu koordinat sinifin nesnesidir"<<endl;
		}
};
int koordinat::nesnesayisi=0;
int main(){
	cout<<koordinat::nesnesayisi<<endl;
	koordinat k1(7,7);
	cout<<koordinat::nesnesayisi<<endl;
	k1.yazdir();
	koordinat k2;
	cout<<koordinat::nesnesayisi<<endl;
	k2.yazdir();
	cout<<koordinat::nesnesayisi<<endl;
	k1.SinifAdi();
	return 0;
}

