//swictch sama seperti di js
#include<iostream>

using namespace std;

int main(){
	
	int a;
	cout<<"masukan data anda"<<endl;
	cin>>a;
	
	switch(a){
		case 1:
			cout<<"ini adalah 1"<<endl;
			break;
		
		case 2:
			cout<<"ini adalah 2"<<endl;
			break;
			
		case 3:
			cout<<"ini adalah 3"<<endl;
			break;
			
		case 4:
			cout<<"ini adalah 4"<<endl;
			break;
		default:
			cout<<"ini tidak ada"<<endl;
			break;
	}
	return 0;
}
