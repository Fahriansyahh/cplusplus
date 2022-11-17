#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"masukan nilai anda"<<endl;
	cin>>x;
	if(x>0){
		cout<<"adalah bilangan positif"<<endl;
	}else if(x<0){
		cout<<"adalah bilangan negatif"<<endl;
	}else if(x == 0){
		cout<<"adalah bilangan 0"<<endl;
	}
}
