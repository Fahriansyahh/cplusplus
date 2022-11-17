#include<iostream>
using namespace std;
int main(){
	int kode,jumlah,sks,semester;
    string nama;
	
	cout<<"kode masukan \t";
	cin>>kode;
	cout<<"jumlah sks persemestr [20-25] : \t";
	cin>>sks;
	if(kode==1){
		nama="fahri";
		cout<<nama<<"\t teknik informatika"<<endl;
		jumlah=30000*sks;
		semester=jumlah*2;
	}else if(kode == 2){
		
		nama="iyan";
		cout<<nama<<"\t akuntansi"<<endl;
		jumlah=30000*sks;
		semester=jumlah*2;
	}else if(kode == 3){
		
		nama="iyan";
		cout<<nama<<"\t manajemen"<<endl;
		jumlah=30000*sks;
		semester=jumlah*2;
	}else{
		cout<<"angka yang anda masukan salah"<<endl;
	}
}
