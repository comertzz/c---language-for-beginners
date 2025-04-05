#include<iostream>
using namespace std;
int main(){
	int array[]={1,2,3,4};
	int *ptr=array;
	cout<<ptr<<endl;
	ptr+=1;
	cout<<"pointerin yeni degeri:"<<ptr<<endl;
}
