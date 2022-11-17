#include<iostream>

using namespace std;

int data(int b){
	int d;
	printf("masukan nilai d ");scanf("%d",&d);
	printf("nilai a adalah %d\n ",d);
	return (d + b);
}

int main(){
	cout<<"halo dunia"<<endl;
	int b;
	cout<<"masukan angka"<<endl;
	cin>>b;
	if(b<=10){
		cout<<"angka ini valid "<<b<<endl;
			if(b % 2 == 0){
			cout<<"angka ini genap"<<endl;
			for(int a=1;a<b;a++){
				cout<<b<<endl;
			}
		}else{
			cout <<"angka ini ganjil"<<endl;
			for(int a=1;a<b;a++){
				if(a==5){
					cout<<5<<endl;
					break;
				}
			}
		}
	}else if(b>=30 && b<=40 ) {
		cout<<"angka ini lebih besar dari 10 angka ini adalah "<<b<<endl;
		if(b % 2 == 0){
			cout<<"angka ini genap "<<endl;
		}else{
			cout<<data(b)<<"ini adalah data yang sudah ditambahkan "<<endl;
			cout <<"angka ini ganjil"<<endl;
		}
	}else{
		
		cout<<"angka ini tidak valid "<<endl;
	}
	
}
