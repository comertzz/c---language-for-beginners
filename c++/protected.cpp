#include<iostream>
using namespace std;
class Sekil{
	private:
		int pr_sayi=5;
	protected:
		int pro_sayi=7;
	public:
		int pub_sayi=9;
		
};
int main(){
	Sekil sekil1;
	cout<<sekil1.pub_sayi<<endl;
	
}
