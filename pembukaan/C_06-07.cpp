#include<iostream>

	int kali(int angka){
		return (angka * angka);
	}
int main(){
	/*! fungsi std endl adalah untuk menambahkan bari baru sama seperti 
	\n endl singkatan dari akhir line sedangkan cout console out*/
	std::cout<<"ini adalah string pakai std::endl"<<std::endl;
	std::cout<<"ini adalah sting tanpa memakai std";
	std::cout<<"ini adalah string mengunakan newLine \n";
	std::cout<<"ini adalah string tanpa mengunakan new line";
	std::cout<<"ini adalah string pakai std::endl"<<std::endl;
	
	/*sebuah variable int*/
	
	int a=10;
	int b=20;
	int hasil=a+b;
	std::cout<< hasil<<std::endl;
	

	std::cout<<kali(hasil)<<std::endl;
	return 0;
}
