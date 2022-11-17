//! konsep boolean pada c++
/*
di c++ nulis boolean ada dua cara mengunakan or and not atau sama kaya js
*/
#include<iostream>

using namespace std;

int main(){
	int a=10;
	int b=12;
	int hasil;
	//boolean sama kya di js
	//not
	
	hasil =!(a<12);//di balik namanya not
	cout<<hasil<<endl;
	
	//and

	hasil =(a<=b) && (b<=a);//jika nilai meiliki true dan false salah jika true dan true barubener
	cout <<hasil<< endl; 
	hasil =(a<=b) && (b>=a);
	cout <<hasil<< endl; 
	
	//or
	hasil =(a<=b) || (b<=a);//jika nilai memiliki true dan false bener jika false faslse salahh
	cout<<hasil<<endl;
	hasil =(a>=b) ||(b==3);
	cout << hasil<<endl;	
	hasil =!((a>=b)) ||(b==3);//konsep not kenapa hasilnya true karena sebelum or di jalankan c++ mendekteksi kebalikan not dulu ri
	cout<< hasil<<endl;
	return 0;
	
}
