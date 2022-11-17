#include<iostream>
using namespace std;
int main(){
	// C
//	int panjang,lebar,tinggi,luas,volume;
//	printf ("masukan panjang ;");scanf("%d",panjang);
//	printf ("masukan lebar ;");scanf("%d",lebar);
//	printf ("masukan tinnggi ;");scanf("%d",tinggi);
//	luas =(2*panjang * lebar) + (2*panjang*tinggi )+(2*tinggi*lebar);
//	volume=panjang*lebar *tinggi;
//	printf("jadi luasnya adalah : %d\n",luas);
//	printf("jadi luasnya adalah : %d\n",volume);
//	return 0;
	//C++
	int panjang,lebar,tinggi,luas,volume;
	cout<<"masukan panjang ";
	cin>>panjang ;
	cout<<"masukan lebar " ;
	cin>>lebar;
	cout<<"masukan tinggi " ;
	cin>>tinggi;	
	luas =(2* panjang *lebar)+(2*panjang * tinggi)+(2*tinggi*lebar);
	volume=(panjang*lebar*tinggi);
	cout<<"jadi luasnya adalah"<<luas<<endl; 
	cout<<"jadi volumenya adalah"<<volume<<endl;
}
