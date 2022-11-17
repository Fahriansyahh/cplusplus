#include<iostream>
using namespace std;

int main (){
	cout<<"Anda telah masuk ke program kalkulator "<<endl;
	float a,b;
	char c;
	cout<<"masukan nilai ";
	cin>>a;
	cout<<"masukan nilai + * / -  ";
	cin>>c;
	cout<<"masukan nilai ";
	cin>>b;
	
	cout<<a << c << b<<" = ";
	float hasil;
	if(c == '+'){
		hasil=a+b;
	}else if(c=='-'){
		hasil=a-b;
	}else if(c=='/'){
		hasil=a/b;
	}else{
		cout<<"nilai yang anda masukan salah"<<endl;
	}
	cout<<hasil<<endl;
	
	
}
