#include<iostream>
using namespace std;
class Employee{
	public:
		Employee(){
			cout<<"Constructor cagirildi."<<endl;
		}
		~Employee(){
			cout<<"Destructor cagirildi."<<endl;
		}
};
int main(){
	Employee *emp= new Employee();
	delete emp;
	return 0;
}
