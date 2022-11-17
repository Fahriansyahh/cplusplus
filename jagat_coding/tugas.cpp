#include<iostream>
using namespace std;
int main(){
	int pilihan;
	cout<<"ini adalah pilihan untuk menghitung ";
	cin>>pilihan;
	float keliling,luas;
	switch(pilihan){
		case 1:
			cout<<"luas dan keliling segitiga"<<endl;
			float tinggi,alas,sisi;
			cout<<"masukan alas \t";
			cin>>alas;
			cout<<"masukan tinnggi";
			cin>>tinggi;
			luas=0.5*alas*tinggi;
			keliling=3*sisi;
			cout<<"maka luas  segitiga adalah "<<luas<<endl;
			cout<<"maka luas keliling adalah "<<keliling<<endl;
			break;
		case 2:
			cout<<"luas dan keliling persegi panjang"<<endl;
			int panjang,lebar,luas;
			cout<<"masukan panjang \t";
			cin>>panjang;
			cout<<"masukan lebar \t";
			cin>>lebar;
			luas = panjang*lebar;
			keliling=2 * (panjang+lebar);
			cout<<"jadi luasnya adalah "<<luas<<endl;
			cout<<"jadi kelilingnya adalah "<<keliling<<endl;
			break;
		case 3:
			
			cout<<"luas dan keliling panjang lingkaran"<<endl;
			int r;
			float phi=3.14;
			cout<<"masukan jari jari lingkaran: ";
			cin>>r;
			luas=phi*r*r;
			keliling=2*phi*r;
			cout<<"luas luas adalah "<<luas<<endl;
			cout<<"luas keliling adalah"<<keliling;
			break;			
		
	}
	
	
}
