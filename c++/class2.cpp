#include<iostream>
#include<cmath>
using namespace std;
struct sKoordinat{
	int x;
	int y;
};
class Koordinat{

	private:
		struct sKoordinat k;
		public:
			void setKoordinat(int x,int y){
				k.x=x;
				k.y=y;
			}
			void printKoordinat(){
				cout<<k.x<<","<<k.y<<endl;
			}
			double mesafebul(Koordinat k2){
				
				return sqrt(pow(this->k.x-k2.k.x,2)+pow(this->k.y-k2.k.y,2));
			}
};
int main(){
	Koordinat k1,k2;
	k2.setKoordinat(5,3);
	k2.printKoordinat();
	k1.setKoordinat(3,5);
	k1.printKoordinat();
	cout<<k1.mesafebul(k2)<<endl;
}
