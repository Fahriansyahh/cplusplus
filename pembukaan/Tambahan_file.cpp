#include<iostream>
// materi tambahan
#include <limits>
using namespace std;

int main(){
	cout <<"ini adalah tambahan data"<<endl;
	
	//tambahan tentang tipe data
	
	//data string
//	tipe ini tidak seperti char yang menampilkan hanya satu angka
	string name="fahriansyah atau iyan";
	cout<<"saya biasa dipangil "<<name<<endl;
	
//data double

double data =123.34341121;
//data ini sama seperti float tapi perbedaanya data ini bisa mengunakan data yang banyak
//penyimpananya juga lebih besar dari float sehingga bisa menyimpan data lebih banyak
cout<<"ini adalahdata double "<<data<<endl;
cout<<sizeof(double)<<endl;
cout<<numeric_limits<double>::max()<<endl;	
	
//perbedaan string pada cin dan pengunaan getline

string nama,da;
//untuk mengatasi masalah string
cout<<"masukan nama anda menggunakan getline()"<<endl;
getline(cin,da);
cout <<"ini mengunakan getline()"<<da<<endl;
cout<<"masukan nama anda "<<endl;
cin>>nama;
//jika mengunakan cin ketika string ada spasiya dia akan menambil nilai yang pertama
cout <<"ini mengunakan cin "<<nama<<endl;
	
//pengabungan antara if dan else

int a,b;
string hasil;
cout<<"masukan angka a ";
cin>>a;
b = a % 2;
string nam= b == 1 ? "iya ":"bukan";  


cout<<"apakah angka ini ganjil? "<< nam <<endl;


	
}
