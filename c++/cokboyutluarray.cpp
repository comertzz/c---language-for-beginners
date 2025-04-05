#include<iostream>
using namespace std;
int main(){
	int matris[3][3];
	int i=0;
	int j=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>matris[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<" "<<matris[i][j];
		}
		cout<<endl;
	}
}

