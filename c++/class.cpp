#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		
};
int main(){
	Student student1;
	Student student2;
	student1.name="Comert";
	student2.name="Huso";
	cout<<"ogrenci 1 ismi:"<<student1.name<<endl;
	cout<<"ogrenci 2 ismi:"<<student2.name<<endl;
	return 0;
}
