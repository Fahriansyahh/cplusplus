//toko bunga bae

#include<iostream>
using namespace std;




int main(){
	
	int melati=10000,mawar=15000,matahari=20000,edelwis=50000,jmlh=0;
	cout<<"selmat datang di toko bunga"<<endl;
	cout<<"apakah anda mao membeli bunga ya/tidak ? \t";
	string jawab;
	cin>>jawab;
	if(jawab =="ya"){
		cout<<"\n\n menu pilihan"<<endl;
		cout<<"melati mawar matahari edelwis"<<endl;
		
		//pengcekan harga
		string cek;
		cout<<"\n\n cek harga cek/ya \t";
		cin>>cek;
		if(cek=="cek"||cek=="ya"){
			cout<<"harga melati = "<<melati<<endl;
			cout<<"harga mawar = "<<mawar<<endl;
			cout<<"harga matahari = "<<matahari<<endl;
			cout<<"harga edelwis = "<<edelwis<<endl;
		}
		//tutup
		//beli
		string beli,lagi="";
		cout<<"\n\n anda mao membeli apa ?"<<endl;
		cin>>beli;
					
		if(beli == "mawar"){
			jmlh += mawar;
		}else if(beli == "melati"){
			jmlh += melati;
		}else if(beli =="matahri"){
			jmlh += matahari;
		}else if(beli =="edelwis"){
			jmlh += edelwis;
		}
		cout<<"\n total harga = "<<jmlh<<endl;
		
	cout<<"\n apakah anda ingin membeli lagi? ya/tidak \t";
	cin>>lagi;
		
	if(lagi != ""){
	while(lagi=="ya"){
		cout<<"\n\n anda mao membeli apa ?"<<endl;
		cin>>beli;					
		if(beli == "mawar"){
			jmlh += mawar;
		}else if(beli == "melati"){
			jmlh += melati;
		}else if(beli =="matahari"){
			jmlh += matahari;
		}else if(beli =="edelwis"){
			jmlh += edelwis;
		}
	cout<<"\n total harga = "<<jmlh<<endl;
	cout<<"\n apakah anda ingin membeli lagi? ya/tidak \t";
	cin>>lagi;
      }
	}
	cout<<"\n total harga = "<<jmlh<<endl;
		
		
	}else if(jawab == "tidak"){
		cout<<" oke sampai jumpa kembali"<<endl;
	}else{
		cout<<"jawaban tidak ada"<<endl;
	}
	
	
	
	
	
	
	
	
}
