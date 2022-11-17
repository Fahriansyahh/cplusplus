#include<iostream>
using namespace std;
int main(){
	//belajar array
	string daftar[5]={"data","ian ","fahri","asd","ok"};
	cout<<daftar[2]<<endl;
	for(int a=0;a<=5;a++){
	string lulus[2]={"data","ian"};
	for(int b=0;b <=3;b++){	
		if(daftar[a]== lulus[a]){
			cout<<lulus[a]<<endl;
			int umur,kelas;
			cout<<"masukan umur anda \t";
			cin>>umur;
			string semester;
			cout<<"masukan ruang kelas anda \t";
			cin>>kelas;
			cout<<"masukan semester"<<endl;
			cin>>semester;
			if(kelas == 1 || kelas ==2 || kelas==3){
				cout<<"selamat belajar anda sudah terdaftar"<<endl;
			}else{
				cout<<"kelas anda salah"<<endl;
			}
		}
	}
}
}
