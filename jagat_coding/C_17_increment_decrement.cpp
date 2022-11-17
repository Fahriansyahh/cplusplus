//incremen dan decrement

#include<iostream>

using namespace std;
int main(){
	int a,b,c,d;
	//perbedaaan incremen dan decrement
a=10;
//konsep increment
cout<<a++<<endl;
cout<<a++<<endl;
//jadi ketika nilai di atas itu terlihat angka sudah tidak bertambah tapi sebennarnya komputer masih menyimpan data lanjutan pada kmputer yang berbentek a tanpa a++
cout<<a<<endl;
//konsep decrement
//ktika mengunakan decrement seperti biasa dia akan langsung menambahkan dan data tidak akan bertambah lagi ketika si b di munculkan pada layar
b=15;
cout<<++b<<endl;
cout<<++b<<endl;
cout<<b<<endl;	

	//contoh kasus increment ini terlalu rumit tapi yang pasti untuk menampilkan hasil harus memastikan nilai dan nilai yang benar itu penting
cout<<"contoh kasus pada increment"<<endl;	
for(c=1;c<=3;c++){
	//pada kasus ini yang tampil pada c adaah dua nah sebenarnya si c ini memiliki 3 angka tapi tidak di eksekusi oleh komputer karena increment bawaannya sudahdi set seperti itu
	//memiliki konsep seperti ini harus di perhatikan kedepanya
	cout<<c<<endl;
}	
cout<<"varibel yang di luar for berbentuk ?? \t";
	cout<<c<<endl;
	//contoh kasus decrement
	cout<<"contoh kasus pada decrement"<<endl;
while(d<=3){
	++d;
	cout<<d<<endl;

}
	
cout<<"varibel yang di luar for berbentuk ?? \t";
cout<<d<<endl;
	
}
