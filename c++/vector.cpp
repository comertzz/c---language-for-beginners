#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v1;
	v1.push_back(1);
	cout<<v1.size()<<endl;
	cout<<v1[0];
	vector<int>v2(10);
	for(int i=0;i<10;i++){
		cout<<v2[i]<<endl;
	}
	vector<int>v3(10,-2);
	for(int i=0;i<10;i++){
		cout<<v3[i]<<endl;
	}
	vector<int>v4;
	v4.assign(5,23);
	for(int i=0;i<5;i++){
		cout<<v4[i]<<endl;
	}
	int a=v4.back();
	cout<<endl;
	cout<<a<<endl;
	vector<float>v5;
	float b= 0;
	while(b!=-1){
		cout<<"bir sayi giriniz (durdurmak icin -1)";
		cin>>b;
		v5.push_back(b);
	}
	v5.pop_back();
	float toplam=0,c;
	while(!v5.empty()){
		c=v5.back();
		toplam+=c;
		v5.pop_back();
	}
	cout<<"toplam="<<toplam<<endl;
}

