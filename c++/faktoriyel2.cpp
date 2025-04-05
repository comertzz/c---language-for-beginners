#include<iostream>
using namespace std;
int faktoriyel(int i){
	if(i==1){
		return 1;
	}
	else{
		return i*faktoriyel(i-1);
	}
}
int main(){
	cout<<faktoriyel(5);
}
