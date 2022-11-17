#include<iostream>
using namespace std;
int olah(int a,int b){
return (a/b);
}
	


int main (){
	int a,b;
	float d;
	// jenis scang  %d untuk int %c untuk string %f untuk float
	printf("masukan nomor");scanf("%d",&a);
	printf("masukan ini %d\n",a);
	printf("masukan nomor bagi");scanf("%f",&d);
	printf("masukan ini %f\n",d);
    cout<< olah(a,d)<<endl;
}
