#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"\tNama :haidir"<<endl;
	cout<<"\tkelompok : 12 "<<endl;
	
int i,x;
int matriks_1[5][9],
matriks_2[3][3],
matriks_3[6][0];
char ulang;	
do
{
int cls;	
cout<< "\nPenjumlahan 2 matriks Ordo 2x2 \n\n";
	//Input data matriks 1
cout<< "\nData matriks 1 \n";
for ( i=0; i<=1; i++ ) 
{
for ( x=0; x<=1; x++ ) 
{ 
cout<< "["<<i<<"]["<<x<<"] : "; 
cin>>matriks_1[i][x];
}
}
cout<<"\n._______.\n";
//Input data matriks 2
cout<< "\nData matriks 2 \n";
for ( i=0; i<=1; i++ ) 
{
for ( x=0; x<=1; x++ ) 
{ 
cout<< "["<<i<<"]["<<x<<"] : "; 
cin>>matriks_2[i][x];
}
}
cout<<"\n._______.\n";
//Output hasil penjumlahan Matriks 1 + Matriks 2
cout<< "\nMatriks 1 + Matriks 2 : "<<endl<<endl;
for ( i=0; i<=1; i++ ) { 
for ( x=0; x<=1; x++ ) {
matriks_3[i][x]=matriks_1[i][x]+matriks_2[i][x];
cout<<"\t"<<matriks_3[i][x];
}
cout<<endl;
}
cout<<"\n._______.\n";
cout<<"\nHitung lagi ? [y/t] : ";
cin>>ulang;
}
while(ulang!='t');
}

