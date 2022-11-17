#include<iostream>
using namespace std;

int main(){
	int tugas;
	cout<<"masukan nomor tugas cth 1/2/3 \t";
	cin>>tugas;
	
	switch(tugas){
	case 1:{
	
	cout << "##  Program C++ Konversi Biner ke Desimal  ##" << endl;
  cout << endl;

    int angka_biner, angka_desimal=0, i=1, digit;
    cout << "Input angka biner: ";
    cin >> angka_biner;

    cout << "Angka desimal dari biner "<< angka_biner;

    while(angka_biner!=0)
    {
      digit = angka_biner % 10;
      angka_desimal = angka_desimal + (digit*i);
      i = i*2;
      angka_biner = angka_biner/10;
    }

    cout << " adalah = " << angka_desimal;
    cout << endl;
    return 0;
    break;
}
    case 2:{
	cout<<"membuat kpk"<<endl;
	
    int hasil;
	int input1, input2;
	cout << "Masukan angka pertama : ";
	cin >> input1;
	cout << "Masukan angka kedua : ";
	cin >> input2;
	hasil = input1;
	while(hasil%input2!=0){
		hasil = hasil + input1;
	}
	
	cout << "Kpk dari " << input1 << " dan " << input2 << " adalah " << hasil;
	break;
}
case 3:{
	cout<<"membuat segitiga pascal"<<endl;
	int arr[10];
	for(int a=0;a<10;a++){
		arr[a]=1;
		for(int b=10;b>a;b--){
			cout<<" ";
		}
			for(int b=0;b<a-1;b++){
			cout<<arr[a];
		}
		for(int b=0;b<a;b++){
	cout<<"1";
		}
		cout<<endl;
	}

	break;
}
}
}
