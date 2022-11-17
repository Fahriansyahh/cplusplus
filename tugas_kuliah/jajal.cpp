#include<iostream>
using namespace std;

int main(){
  
  int a=50,b=40,c=60,d=20,seleksi1,seleksi2;
  bool var1, var2,var3;
  var1 = a > b;
  var2 = c > d;
  
 if(var1){
 	seleksi1=a;
 	cout<<"benar"<<endl;
 }else{
 	seleksi1=b;
 	cout<<"salah"<<endl;
 }
 if(var2){
 	seleksi2=c;
 	cout<<"benar"<<endl;
 }else{
 	seleksi2=d;
 	cout<<"salah"<<endl;
 }
 var3=seleksi1>=seleksi2;
 if(var3){
 	cout<<"nilai paling besar adalah "<<seleksi1<<endl;
 }else{
 	cout<<"nilai paling besar adalah "<<seleksi2<<endl;
}
 
 
  return 0;
}
