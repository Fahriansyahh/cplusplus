#include<iostream>
#include <limits>
using namespace std;

int main(){

	/*belajar tipe data C++ 
	contoh kasus int
	int memiliki 4byte sedangkann 1byte = 8 bit
	maka jika 8 + 4byte yang dimiki int 
	hasilnya 32bit 
	maka si int ini mempunyai 010101010 sebnayak 32 
	dan tipe data ini memiliki batas max dan min bagaimana ri lu bisa liat batas itu
	dengan menggunakan numeric_limits<tipe>::max()
	
	
	*/
	//JENIS JENIS TIPE DATA BILANGAN BULAT
	int a=90;//32 bit batas min max 2147483647
	long b=100;//32 bit batas min max 2147483647
	short c=32;//16 bit batas min max 32767
	
	//tipe data jenis bilangan 1.0
	float d=8.0;//32 bit batas min max 3.40282e+038
	double e=9.0;//62 bit batas min max 1.79769e+308
	
	//tipe data chracter
	char f=0; // 1byte dan tidak memiliki kapasitas hanya satu huruf?maybe
	
	//tipe data boolean
	bool g=true;
	cout<<a <<" ini datanya"<<endl;
	
	cout << sizeof(a) <<endl;
	cout << numeric_limits<int>::max()<<endl;
	cout << numeric_limits<int>::min()<<endl;
	return 0;
	
}
