#include <iostream>
#include "kasus.h"
using namespace std;

	struct jml{
 	char men, top;
 	int jum, total;
 	float pay, py, bayar;
	string pilih, plus;
	};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	char pil[100];
	int jum, p , total, kembali, tunai, diskon;
	
	cout<<"======================================================"<<endl;
	cout<<"DAFTAR MENU "<<endl;
	cout<<"======================================================"<<endl;
	cout<<"a. Ayam Goreng \t\t 17000"<<endl;
	cout<<"b. Ayam Bakar \t\t 21000"<<endl;
	cout<<"======================================================"<<endl;
	cout<<"\nMasukkan Jumlah Pesanan : "; cin>>jum;
	 jml j[jum];
	cout<<"======================================================"<<endl;
	
	for (int i=0; i<jum; i++){
	cout<<"\nPilih menu\t: "; cin>>j[i].men;
	
	if(j[i].men == 'a'){
		j[i].pilih = "Ayam Goreng      ";
		j[i].pay = 17000;
	}
	else if(j[i].men == 'b'){
		j[i].pilih = "Ayam Bakar       ";
		j[i].pay = 21000;
	}
	else{
		return 0;
	}
	}
	cout<<endl;
	
	cout<<"========================================="<<endl;
	cout<<"\t\tNOTA"<<endl;
	cout<<"========================================="<<endl;
	for (int i=0; i<jum; i++){
  		j[i].total = bayar(j[i].pay,j[i].py);
  		int a = j[i].total;
		cout<<j[i].pilih<<j[i].plus<<"\t: "<<j[i].total<<endl;
		total = bayar(total, j[i].total);
		
		if(total >= 45000){
			diskon = total*0.1;
		}
		else{
			diskon = 0; 
		}
	}

	cout<<"========================================="<<endl;
	cout<<"Total \t\t\t: "<<total<<endl;
	cout<<"Tunai \t\t\t: "; cin>>tunai;
	cout<<"diskon \t\t\t: "<<diskon<<endl;
	cout<<"========================================="<<endl;
	kembali = tunai - total - diskon;
	cout<<"Kembalian \t\t: "<<kembali<<endl;
	cout<<"========================================="<<endl;
	cout<<"========================================="<<endl;
	


	return 0;
}
