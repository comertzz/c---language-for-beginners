#include<iostream>
using namespace std;
int aygunleri[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    string aylar[12]= {"Ocak","Subat","Mart","Nisan","Mayis","Haziran","Temmuz","Agustos"
    ,"Eylul","Ekim","Kasim","Aralik"};
       
    for(int i=0;i<12;i++)
    {
        cout<<aylar[(i+3)%12]<<" ayi "<<aygunleri[i]<<" gundur"<<endl;
    }
