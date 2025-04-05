#include<iostream>
using namespace std;
class Matematik{
	private:
		int b;
		int a;
	public:
		void setA(int gelen){
			if(gelen>=0 && gelen<100)
			a=gelen;
		}
		int getA(){
			return a;
		}
		void setB(int gelen){
			if(gelen>=0 && gelen<100)
			b=gelen;
		}
		int getB(){
			return b;
		}
		int topla(){
			return a+b;
		}
		int carp(){
			return a*b;
		}
		int bolme();
};
int Matematik::bolme(){
	return a/b;
}
int main(){
	Matematik islem;
	islem.setA(25);
	islem.setB(13);
	cout<<islem.getA()<<endl;
	cout<<islem.getB()<<endl;
	cout<<islem.topla()<<endl;
	cout<<islem.carp()<<endl;
	cout<<islem.bolme()<<endl;
	
}
