/*
	Nama : MUHAMAD FAKHRI KHAIRIL IMAM
	kelas : SEM-1 TI B
	Nim : 2230511085
	Prodi : TEKNIK INFORMATIKA
	Matkul : DASAR PEMROGRAMAN
*/

#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

#define ppn 0.5 //ppn = 5%
const int diskon = 5000;

int main(){
	char nama[50], menu[20], back;
	int jumlah, mie, total, bayar, kurang, bonus, pajak, kembalian,
	harga[5]={15000, 18000, 20000, 25000, 30000}, i=0;
	bool saldo;
	
	do{
		system("CLS");
		cout<<"===========================BAKMIE AYAM=============================="<<endl;
		cout<<"============================MasGundul==============================="<<endl;
		cout<<endl;
		cout<<"Masukkan Nama Anda : "; cin>>nama;
		cout<<"pilih menu yang tersedia---"<<endl;
		cout<<"--------------------------------------------------------------------"<<endl;
		cout<<"         [1] Mie Ayam Original       = 15.000                       "<<endl;
		cout<<"         [2] Mie Ayam Pangsit        = 18.000                       "<<endl;
		cout<<"         [3] Mie Ayam Bakso          = 20.000                       "<<endl;
		cout<<"         [4] Mie Ayam Crispy         = 25.000                       "<<endl;
		cout<<"         [5] Mie Ayam Jumbo          = 30.000                       "<<endl;
		cout<<"--------------------------------------------------------------------"<<endl;
		
		cout<<"             (Masukkan Menu Mie Ayam Berdasarkan Nomer)             "<<endl;
		cout<<"Silahkan Pilih Pesanan Anda :"; cin>> mie;
		
		//percabangan
		switch (mie){
			case 1:
				strcpy(menu,"Mie Ayam Original");
				break;
			case 2:
				strcpy(menu,"Mie Ayam Pangsit");
				i=1;
				break;
			case 3:
				strcpy(menu,"Mie Ayam Bakso");
				i=2;
				break;
			case 4:
				strcpy(menu,"Mie Ayam Crispy");
				i=3;
				break;
			case 5:
				strcpy(menu,"Mie Ayam Jumbo");
				i=4;
				break;
			default:
				cout <<"Pilih menu yang anda pilih tidak tersedia..."<<endl;
				goto ulang;
				
		}
		cout<<"Anda memilih "<<menu <<endl;
		cout<<endl;
		cout<<"jumlah makanan yang di beli : ";cin>> jumlah;
		
		mie= jumlah*harga[i];
		pajak = mie*ppn;
		total = pajak + mie;
		cout<<endl;
		cout<<"--------------------------------------------------------------------"<<endl;
		cout<<"              BAKMIE AYAM MAS GUNDUL AUTHENTIC RECIPE               "<<endl;
		cout<<"--------------------------------------------------------------------"<<endl;
		cout<<"\tNama Pemesan               : " <<nama      <<endl;
		cout<<"\tMenu Mie                   : " <<menu      <<endl;
		cout<<"\tJumlah Mie                 : " <<jumlah    <<endl;
		cout<<"\tHarga Mie                  : " <<harga[i] <<" * " <<jumlah <<endl;
		cout<<"\tPajak toko                 : " <<pajak        <<endl;
		cout<<"\tTotal Pembayaran           : Rp " <<total        <<endl;
		
		if (jumlah>=4){
			bonus = total - diskon;
			total = bonus;
			cout << endl;
			cout << "# Anda Mendapatkan diskon potongan harga : Rp" <<diskon <<" #"<<endl;
			cout << "Total Pembayaran setelah diskon : Rp "<<total<<endl;
			
		}
		
		cout <<"-----------------------------------------------------------------"<< endl;
		cout <<" Silahkan Bayar Disini         : Rp.";               cin>>bayar;
		
		//perulangan
		while (saldo= bayar<total){
			  cout <<"Saldo anda kurang!, Silahkan Bayar lagi :Rp. "; cin>>kurang;
			  bayar+=kurang;
		};
			   kembalian=bayar-total;
			   cout<< "uang yang anda bayar t\t\t  Rp. "<<bayar<<endl;
			   cout<< "uang kembalian t\t\t\t Rp.  "<<kembalian<<endl;
			   cout<< "##########################################"<<endl;
			   
			   ulang:
			   	cout << "                 [Y = ya/T= tidak]"<<endl;
			   	cout << "          apakah anda ingin memesan lagi ? [Y/T] = "; cin>>back;
			
	}while (back=='Y'||back=='Y');
	cout <<endl;
	cout <<"      Terimakasih Telah Memesan Mie Ayam di Authentic Recipe Mas Gundul       "<<endl;
	cout <<"                           Selamat Menikmati                                  "<<endl;
	
	return 0;
}
