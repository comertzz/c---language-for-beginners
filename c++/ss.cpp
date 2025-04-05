#include<iostream>
using namespace std;
int main(){
	int gsdata[5]= {0};
	int bjkdata[5]={0};
	int fbdata[5]={0};
string matris[4][6];
	matris[0][0]="  ";
	matris[0][1]="G";
	matris[0][2]="M";
	matris[0][3]="B";
	matris[0][4]="A";
	matris[0][5]="P";
	matris[1][0]="Takim";
	matris[2][0]="GS";
	matris[3][0]="FB";
	matris[4][0]="BJK";
	matris[2][1]=gsdata[0];
	matris[3][1]=fbdata[0];
	matris[4][1]=bjkdata[0];
	matris[2][2]=gsdata[1];
	matris[3][2]=fbdata[1];
	matris[4][2]=bjkdata[1];
	matris[2][3]=gsdata[2];
	matris[3][3]=fbdata[2];
	matris[4][3]=bjkdata[2];
	matris[2][4]=gsdata[3];
	matris[3][4]=fbdata[3];
	matris[4][4]=bjkdata[3];
	matris[2][5]=gsdata[4];
	matris[3][5]=fbdata[4];
	matris[4][5]=bjkdata[4];
	matris[2][6]=gsdata[5];
	matris[3][6]=fbdata[5];
	matris[4][6]=bjkdata[5];
	
	
	
	for(int i=0;i<4;i++){
		
	for(int j=0;j<6;j++){
		cout<<matris[i][j];
	}
	cout<<endl;
}
	}
