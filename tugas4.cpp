#include<iostream>
using namespace std;
int main(){
	int nilai;
	cout<<"masukan nilai"<<endl;
	cin>>nilai;
	if(nilai >= 81 && nilai <= 100){
		cout<<"A"<<endl;
	}else if(nilai >=71 && nilai <=81){
		cout<<"B"<<endl;
	}else if(nilai >=61 && nilai <=71){
		cout<<"C"<<endl;
	}else if(nilai >= 51 && nilai <=61){
		cout<<"D"<<endl;
	}else if(nilai <=51){
		cout<<"E"<<endl;
	}
}
