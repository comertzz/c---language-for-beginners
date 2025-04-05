#include<iostream>
using namespace std;
int main(){
	
	int gsskor = 0;
	int gsdata[5] = {0};
	int fbskor = 0;
	int fbdata[5] = {0};
	int bjkskor = 0;
	int bjkdata[5] = {0};
	
	
	cout<<"1. GS BJK Macinin sonucunu giriniz";
	cin>>gsskor;
	cin>>bjkskor;
	if(gsskor>bjkskor)
	{
		gsdata[0]++;
		gsdata[3]=gsdata[3]+gsskor;
		gsdata[4]+=3;
		bjkdata[1]++;
	}
	else if(gsskor<bjkskor)
	{
		bjkdata[0]++;
		bjkdata[3]=bjkdata[3]+bjkskor;
		bjkdata[4]+=3;
		gsdata[1]++;
	}
	else{
		bjkdata[2]++;
		gsdata[2]++;
		bjkdata[3]+=bjkskor;
		gsdata[3]+=gsskor;
		
	}
	cout<<"2. GS BJK Macinin sonucunu giriniz";
	cin>>gsskor;
	cin>>bjkskor;
	if(gsskor>bjkskor)
	{
		gsdata[0]++;
		gsdata[3]=gsdata[3]+gsskor;
		gsdata[4]+=3;
		bjkdata[1]++;
	}
	else if(gsskor<bjkskor)
	{
		bjkdata[0]++;
		bjkdata[3]=bjkdata[3]+bjkskor;
		bjkdata[4]+=3;
		gsdata[1]++;
	}
	else{
		bjkdata[2]++;
		gsdata[2]++;
		bjkdata[3]+=bjkskor;
		gsdata[3]+=gsskor;
		
	}
	cout<<"1. GS FB Macinin sonucunu giriniz";
	cin>>gsskor;
	cin>>fbskor;
	if(gsskor>fbskor)
	{
		gsdata[0]++;
		gsdata[3]=gsdata[3]+gsskor;
		gsdata[4]+=3;
		fbdata[1]++;
	}
	else if(gsskor<fbskor)
	{
		fbdata[0]++;
		fbdata[3]=fbdata[3]+fbskor;
		fbdata[4]+=3;
		gsdata[1]++;
	}
	else{
		fbdata[2]++;
		gsdata[2]++;
		fbdata[3]+=fbskor;
		gsdata[3]+=gsskor;
		
	}
		cout<<"2. GS FB Macinin sonucunu giriniz";
	cin>>gsskor;
	cin>>fbskor;
	if(gsskor>fbskor)
	{
		gsdata[0]++;
		gsdata[3]=gsdata[3]+gsskor;
		gsdata[4]+=3;
		fbdata[1]++;
	}
	else if(gsskor<fbskor)
	{
		fbdata[0]++;
		fbdata[3]=fbdata[3]+fbskor;
		fbdata[4]+=3;
		gsdata[1]++;
	}
	else{
		fbdata[2]++;
		gsdata[2]++;
		fbdata[3]+=fbskor;
		gsdata[3]+=gsskor;
		
	}
		cout<<"1. BJK FB Macinin sonucunu giriniz";
	cin>>bjkskor;
	cin>>fbskor;
	if(bjkskor>fbskor)
	{
		bjkdata[0]++;
		bjkdata[3]=bjkdata[3]+bjkskor;
		bjkdata[4]+=3;
		fbdata[1]++;
	}
	else if(bjkskor<fbskor)
	{
		fbdata[0]++;
		fbdata[3]=fbdata[3]+fbskor;
		fbdata[4]+=3;
		bjkdata[1]++;
	}
	else{
		fbdata[2]++;
		bjkdata[2]++;
		fbdata[3]+=fbskor;
		bjkdata[3]+=bjkskor;
		
	}
		cout<<"2. BJK FB Macinin sonucunu giriniz";
	cin>>bjkskor;
	cin>>fbskor;
	if(bjkskor>fbskor)
	{
		bjkdata[0]++;
		bjkdata[3]=bjkdata[3]+bjkskor;
		bjkdata[4]+=3;
		fbdata[1]++;
	}
	else if(bjkskor<fbskor)
	{
		fbdata[0]++;
		fbdata[3]=fbdata[3]+fbskor;
		fbdata[4]+=3;
		bjkdata[1]++;
	}
	else{
		fbdata[2]++;
		bjkdata[2]++;
		fbdata[3]+=fbskor;
		bjkdata[3]+=bjkskor;
		
	}
	
	cout<<"   "<<" G " <<" M "<< " B "<< " A " << " P "<<endl;
	cout<<"GS";
	for(int i= 0 ; i<5 ; i++)
	{
		cout<<"  "<<gsdata[i];
	}
	cout<<endl ;
	
		cout<<"FB";
	for(int i= 0 ; i<5 ; i++)
	{
		cout<<"  "<<fbdata[i];
	}
	cout<<endl ;
	
			cout<<"BJK";
	for(int i= 0 ; i<5 ; i++)
	{
		cout<<"  "<<bjkdata[i];
	}
	cout<<endl ;
	
		
}




