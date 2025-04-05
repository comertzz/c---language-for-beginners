#include<iostream>
#include<C:\Users\Muhammet\Desktop\masaustu\c++\stopwatch.h>
void test1onek(){
	stopwatch sw;
	sw.settime(0,2,20);
	++sw;
	while(--sw){
		sw.readtime();
	}
}
int main(){
	test1onek();
}
