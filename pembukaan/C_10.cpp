//! konsep arit matika pada c++

#include<iostream>

int ad(int a,int b){
	return (a+b);
}

using namespace std;
int main(){
	int a=10;
	int b=102;
	int hasil= a + b ;
	// konsep menghasilkan bilangan 0.1 1.0 blabla
	/*jadi jika ingin memunculkan bilangan desimal adalah*/
	
    cout << ad(12,8)<<endl;
    
	int c=11.7;
	//harus ada variable float jika hasil yang di inginkan bilangandesimal sebab int tidak mengandung desimal melainkan bulat dan C++ tidak akan membacanya
	//dan ada kasus lagi yaitu modullus atau sisa bagi % sisa bagi itu tidak memiliki desimal sehinnga si C++ akan error jika di tanya sisa bagi pada object yang
	// memiliki variabel desimal dalam kasus ini float
	float d=90;
	float ini;
	ini =c/d;
	cout << c << " dan "<< d << " jadi "<< ini <<endl;
	cout << c << " dan "<< d << " jadi "<< ini <<endl;
	cout << a << " + "<< b<< " = " << hasil <<endl;
	

	
	//! konsep di c++ bukan kukabataku tetapi memihak pada * dan /
	cout << 10 + 12 * 2 /*dia akan memihak pada * untuk di eksekusi pertama kali*/<<endl;
	cout << 10 + 12 / 2 /*dia akan memihak pada / untuk di eksekusi pertama kali*/<<endl;
	cout << 10 + 12 - 2<<endl;
	
		cout << 10 / 2 * 2<<endl; // jika nilai * / itu sama seperti dia tidak akan memihak
		cout << (10 + 12 ) / 2 /*pakai tanda kurung untuk mengutamakan*/<<endl;
		int sisa=b%a;
		cout << sisa <<endl;
	return 0;
}
