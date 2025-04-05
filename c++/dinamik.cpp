#include<iostream>
using namespace std;
int main(){
	int *ptr=new int;
	*ptr=5;
	delete ptr;
	cout<<*ptr<<endl;
}
