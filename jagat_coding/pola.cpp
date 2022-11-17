//membuat pola 
#include<iostream>
using namespace std;

int main(){
	//kotak
	cout<<"ini adalah kotak"<<endl;
	for(int a=0;a<=4;a++){		
	
		for(int b=0;b<4;b++){
			cout<<"* ";
		}
			cout<<"*"<<endl;
	}
	//tutup kotak
	//segitiga
	cout<<"ini adalah segitiga"<<endl;
	for(int c=0;c<=6;c++){
		for(int d=6;d>c;d--){
			cout<<" ";
		}
		for(int d=0;d<=c-1;d++){
			cout<<"*";
		}
		for(int d=0;d<=c ;d++){
			cout<<"*";
		}
			cout<<endl;	
	}
	//segitiga kebalik

for(int a=0;a <= 6;a++){
	for(int d=0;d<=a-1;d++){
			cout<<" ";
		}
		for(int d=6;d>a-1;d--){
			cout<<"*";
		}
		for(int d=6;d>a;d--){
			cout<<"*";
}
	
	cout<<endl;
}
	cout<<"segitiga terbalik"<<endl;


//jajar genjang

cout<<"jajar genjang"<<endl;
for(int a=0;a<=6;a++){
	
	for(int b=6;b>=a;b--){
		cout<<" ";
	}
	for(int b=0;b<=20;b++){
		cout<<"*";
	}
	
	cout<<endl;
}	
	

//roket

	cout<<"ini adalah segitiga roket"<<endl;
	for(int c=0;c<=6;c++){
		for(int d=6;d>c;d--){
			cout<<" ";
		}
		for(int d=0;d<=c-1;d++){
			cout<<"*";
		}
		for(int d=0;d<=c ;d++){
			cout<<"*";
		}
			cout<<endl;	
	}

	for(int a=0;a<=13;a++){		
	
		for(int b=0;b<12;b++){
			cout<<"*";
		}
			cout<<"*"<<endl;
	}
	//rumah
	cout<<"ini adalah rumah"<<endl;
	for(int c=0;c<=6;c++){
		for(int d=6;d>c;d--){
			cout<<" ";
		}
		for(int d=0;d<=c-1;d++){
		  if(c==6){
			cout<<".";	
			}else{
			cout<<"*";
		}
		}
		for(int d=0;d<=c ;d++){
			if(c==6){
			cout<<".";	
			}else{
			cout<<"*";
		}
		}
		for(int d=0;d<=20 ;d++){
				if(c==6){
			cout<<".";	
			}else{
			cout<<"*";
		}
		}
			cout<<endl;	
	}

	for(int a=0;a<=5;a++){		
	
		for(int b=0;b<12;b++){
			if(a>=2){
				if(b<=3 || b>9){
					cout<<"*";
				}else{
				cout<<" ";
			}
			}else{
				cout<<"*";
				}
				
		}
		for(int d=0;d<=20 ;d++){
			if(d==0){
			cout<<"|";
		}else{
			if(a==2||a==3){
				if(d==3||d==4||d==5 ||d==12 ||d==13||d==14){
					cout<<" ";
				}else{
					cout<<"*";
				}
				
			}else{
				cout<<"*";
			}
		}
		}
			cout<<"*"<<endl;
	}
	
}

