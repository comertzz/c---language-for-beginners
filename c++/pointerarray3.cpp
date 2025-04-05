#include<iostream>
using namespace std;
int main(){
	string array[]={"comert","huseyin","fatih"};
	string *ptr=array;
	cout<<ptr+1<<endl;
	cout<<*(ptr+1)<<endl;
	cout<<ptr[1]<<endl;
}
