// ketika membuat c++ harus ada include iostream 
// include ios stream adalah bawaam dari windows yang bersifat file

#include<iostream>
/* ketika  mengetikan c++ perhatikan kurung tutup dan buka karena di dev tidak ada extencion ketika code salah*/

//int adalah sebuah fungsi sama dengan functionketikia di javascript

//main adalah pembuka dan memiliki arguments
int tambah(int a ,int b){
return (a+b);
}
int ambil (int a,int b){
	return (a-b);
}

int duplikat(int a,int b){
	return (a-b);
}

int main(){
	// std adalah bawaan library iostream 
	//cout pembuka endl penutup
	// bisa memiliki function juga
		std::cout << tambah(10,10) - ambil(20,15) + duplikat(tambah(10,10),ambil(20,15)) << std::endl;
	std::cout <<"ketika tombol ini di klik di folder" << std::endl;
	//ketika cin di jalankan dia bisa dibuka di folder
	
	return 0;
#include "include.cpp"
