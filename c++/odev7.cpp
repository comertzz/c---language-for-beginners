#include<iostream>
using namespace std;
class Islem{
	private:
		int pay1;
		int payda1;
		int pay2;
		int payda2;
		int pay;
		int payda;
	public:
		void setPAY1(int gelen){
			if(gelen>=0 && gelen<100)
			pay1=gelen;
		}
		int getPAY1(){
			return pay1;
		}
		void setPAYDA1(int gelen){
			if(gelen>=0 && gelen<100)
			payda1=gelen;
		}
		int getPAYDA1(){
			return payda1;
		}
		void setPAY2(int gelen){
			if(gelen>=0 && gelen<100)
			pay2=gelen;
		}
		int getPAY2(){
			return pay2;
		}
		void setPAYDA2(int gelen){
			if(gelen>=0 && gelen<100)
			payda2=gelen;
		}
		int getPAYDA2(){
			return payda2;
		}
			void setPAY(int gelen){
			if(gelen>=0 && gelen<100)
			pay=gelen;
		}
		int getPAY(){
			return pay;
		}
		void setPAYDA(int gelen){
			if(gelen>=0 && gelen<100)
			payda=gelen;
		}
		int getPAYDA(){
			return payda;
		}
		int paytopla(){
			pay=pay1+pay2;
			return pay;
		}
		int paydatopla(){
			payda=payda1;
			return payda;
		}
		int carppay(){
			pay=pay1*pay2;
			return pay;
		}
		int carppayda(){
			payda=payda1*payda2;
			return payda;
		}
		int bolpay(){
			pay=pay1/pay2;
			return pay;
		}
		int bolpayda(){
			payda=payda1/payda2;
			return payda;
		}
		int cikarpay(){
			pay=pay1-pay2;
			return pay;
		}
		int cikarpayda(){
			payda=payda1;
			return payda;
		}
};
int main(){
	Islem baba;
	baba.setPAY1(2);
	baba.setPAY2(1);
	baba.setPAYDA1(4);
	baba.setPAYDA2(4);
	cout<<baba.paytopla()<<"/";
	cout<<baba.paydatopla()<<endl;
	cout<<baba.carppay()<<"/";
	cout<<baba.carppayda()<<endl;
	cout<<baba.bolpay()<<"/";
	cout<<baba.bolpayda()<<endl;
	cout<<baba.cikarpay()<<"/";
	cout<<baba.cikarpayda()<<endl;
}

