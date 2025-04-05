#include<iostream>
using namespace std;
class Employee{
	public:
		string name;
		int id;
		int salary;
		void showInfos(){
		cout<<"Id:"<<id<<endl;
		cout<<"Isim:"<<name<<endl;
		cout<<"Maas:"<<salary<<endl;
	}
};
int main(){
	Employee employee;
	employee.id=23;
	employee.name="Comert";
	employee.salary=9000;
	employee.showInfos();
	
}
