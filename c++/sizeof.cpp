#include<iostream>
using namespace std;
struct student{
	int id;
	char letter;
};
int main(){
	cout<<"int:"<<sizeof(int)<<endl;
	cout<<"char:"<<sizeof(char)<<endl;
	cout<<"float:"<<sizeof(float)<<endl;
	cout<<"student:"<<sizeof(student)<<endl;
}
