#include<iostream>
using namespace std;
struct Address{
	string cityname;
	int no;
};

struct Employee{
	int id;
	string name;
	string department;
	Address* address;
};
int main(){
	Employee employee;
	employee.id=777;
	employee.name="Muhammet COMERT";
	employee.department="software";
	Address adress={"Elazig,23"};
	employee.address=&adress;
	Employee* ptr=&employee;
	cout<<ptr->address->cityname<<endl<<ptr->address->no<<endl;
}
