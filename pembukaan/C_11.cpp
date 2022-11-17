#include<iostream>

using namespace std;

int main(){
	//konsep boolean pada c++
	int a=10;
	int b=20;
	int hasil;
	//jika true dia akan menghasilkan 1 jika false dia akan menghasilan 0
	hasil=(a==b);
	cout <<hasil<<endl;
	hasil=(a!=b);
	cout <<hasil<<endl;
	hasil =(a<b);
	cout <<hasil<<endl;
	hasil=(a>b);
	cout <<hasil<<endl;
	int c=10;
	int d=10;
	int hasil1=(c <= d);
	int hasil2=(c >= d);
	//ini konsep nya sama seperti di js cuma berbeda penulisan true dan false
	cout <<hasil1<<endl;
	cout <<hasil2<<endl;
	return 0 ;
}
