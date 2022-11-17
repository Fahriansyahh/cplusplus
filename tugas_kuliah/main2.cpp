#include<iostream>
using namespace std;
int main(){


float pi=3.14,r,volume,luas;
//! versi C	
//    printf ("masukan jari-jari ;");scanf("%f",&r); 
//    luas = 4 *pi *(r * r);
//    volume= (4/3 )* pi * (r *r *r);
//    printf ("jawaban luass %f\n ",luas);
//    printf ("jawaban volume %f\n " ,volume);

//C++
     cout<<("masukan jari jari ");
     cin>>r;
     luas =4*pi*(r*r);
     float a=4;
     volume=(a/3) * pi * (r*r*r);
     cout<<("jawaban luas adalah")<<luas <<endl;
     cout<<("jawaban volume adalah")<<volume <<endl;
}
