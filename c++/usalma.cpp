#include <iostream>
using namespace std;
int usAlma(int x,int y)
{
	if(y==0) return 1;
	else if(y==1) return x;
	//else if(y==2) return x*x;
	else 
	{
			int parca=usAlma(x,y/2);
		return (y%2==1 ? x*parca*parca : parca*parca);
	}
}
int main()
{
	cout << usAlma(2,3)<<endl;	
	cout << usAlma(2,4)<<endl;	
	cout << usAlma(2,5)<<endl;	
}

//2^8= 2^4 * 2^4
//2^4 =2^2 * 2^2
//2^2 = 2 * 2
