#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string userdaftar,usermasuk,pswrddaftar,pswrdmasuk,email;
string buku;
int kode, nomor, harga, hargatotal, jumlah;
int pmbyrn;
char reglog;
struct tanggal{
  int DD, MM, YYYY;
};

struct tanggal brw, rtn, bts;

void intro(){
		system ("color f1");
		cout <<"---------------------------------------------------------------"<<endl;
		cout <<"-                 PROGRAM PERPUSTAKAAN PARGOY       	      -"<<endl;
		cout <<"-                           KELOMPOK 3                        -"<<endl;
		cout <<"---------------------------------------------------------------\n"<<endl;
		cout<<"EKLESIA WIASTRI ZAGOTO \t\t(12220009)\n";
		cout<<"ERICK ADE HENDING FIRMANSYAH \t(12220003)\n";
		cout<<"SURYA ERLAMBA \t\t\t(12220020)\n";
		cout<<"SYAHREINA MAULIDYA JASMINE \t(12220015)\n";
		system("pause");
		system("cls");
	}
	
void judul(){
	cout <<"---------------------------------------------------------------------------------------------------------\n";
	cout <<"                                           PERPUSTAKAAN PARGOY                 "<<endl;
	cout <<"                           Jl. mantan No.4 Kel.Kenangan Kec.Rindu Kab. I Love You "<<endl;
	cout <<"                              email : perpuspargoy@gmail.com, telp : 0812345678   "<<endl;
	cout <<"---------------------------------------------------------------------------------------------------------\n";
	}
	
		
void logreg(){
		int ganti;	
		logreg :
		system("cls");
		judul();
		cout <<"\nA. Login"<<endl;
		cout <<"B. Registrasi Anggota\n"<<endl;
		cout <<"Masukkan Pilihan : ";cin >> reglog;
		system("cls");
		if(reglog=='A'||reglog=='a'){
			login :
			system("cls");
			judul();
			cout <<"Nama Lengkap : "; getline(cin,usermasuk); getline(cin,usermasuk); 
			cout <<"Password  : "; getline(cin,pswrdmasuk);
			if(usermasuk==userdaftar && pswrdmasuk==pswrddaftar){
				system("cls");
				judul();
				cout <<"\tBerhasil Masuk\n";
				system("pause");
				system("cls");
			}
			else if(usermasuk==userdaftar && pswrdmasuk!=pswrddaftar){
				system("cls");
				judul();
				cout <<"\tPassword Salah\n";
				cout<<"\n\nLupa Password ?\n";
				system("pause");
				system("cls");
				pwbaru:
				judul();
				cout<<"\n\n[1]Ganti Password \n[0] Coba masukkan password lagi : ";cin>>ganti;
				if (ganti==1){
					cout<<"\nNama Lengkap\t: "<<userdaftar;
					cout<<"\nEmail\t\t: "<<email;
					cout<<"\nMasukkan Password Baru : ";cin>>pswrddaftar;
					cout<<"Password Berhasil Diganti\n";
					system("pause");
					system("cls");
					goto logreg;
				}
				else if (ganti==0) {
					system("cls");
					goto login;
				}
				else {
					cout<<"\nAngka Yang Anda Masukkan Salah, Silahkan Input Lagi\n";
					system("pause");
					system("cls");
					goto pwbaru;
				}
			}
				
			else{
				system("cls");
				judul();
				cout <<"\tUser Tidak Terdaftar\n";
				system("pause");
				system("cls");
				goto logreg;
			}
		}
		else if(reglog=='B'||reglog=='b'){
			system("cls");
			judul();
			cout <<"Nama Lengkap : "; getline(cin,userdaftar); getline(cin,userdaftar);
			cout <<"Email     : "; getline(cin,email); 
			cout <<"Password  : "; getline(cin,pswrddaftar);
			cout <<"Pendaftaran Sukses\n";
			system("pause");
			system("cls");
			goto logreg;
		}
		else{
			system("cls");
			goto logreg;
		}
	}
	
	
void daftar(){
				cout<<"=============================================================================================\n";
			    cout<<"                                        DAFTAR BUKU                      \n";
			    cout<<"                                    PERPUSTAKAAN PARGOY                  \n";
			    cout<<"=============================================================================================\n\n";
			
			    cout<<"----------------------------------------------------------------------------------------------\n";
			    cout<<"| KODE BUKU |     JENIS BUKU      | NOMOR BUKU |          judul BUKU        |   TARIF BUKU   |\n";
			    cout<<"----------------------------------------------------------------------------------------------\n";
				cout<<"|     11    |         Fiksi       |     1      |           ANTARES          |   RP. 3.100   |\n";
				cout<<"|     11    |         Fiksi       |     2      |          MARIPOSA          |   RP. 3.100   |\n";
				cout<<"|     11    |         Fiksi       |     3      |         DILLAN 1991        |   RP. 3.100   |\n";
			    cout<<"|     14    |     Fiksi  Daerah   |     4      |  Kebangkitan Malaranggeng  |   RP. 2.900   |\n";
			    cout<<"|     14    |     Fiksi  Daerah   |     5      |    Kembalinya Mak Lampir   |   RP. 2.900   |\n";
			    cout<<"|     36    |Young Adult (English)|     6      |      Love From A to Z      |   RP. 1.500   |\n";
			    cout<<"|     36    |     Young Adult     |     7      | Cara Jitu Menjadi Tiktokers|   RP. 1.500   |\n";
				cout<<"|     80    |      Buku Puisi     |     8      |    Kumpulan Pantun Jarjit  |   RP. 1.100   |\n";
			    cout<<"|     51    |    Sains Non-Fiksi  |     9      |     Kosmos - Carl Sagan    |   RP. 4.200   |\n";
			    cout<<"|     57    |         Sains       |     10     |          Robotic           |   RP. 3.950   |\n";
			    cout<<"|     57    |         Sains       |     11     |       Electromagnetic      |   RP. 3.950   |\n";
			    cout<<"----------------------------------------------------------------------------------------------\n\n";
	}
	
void pembayaran(){
		system("cls");
		metode:
		judul();
		cout<<" Metode Pembayaran :"<<endl;
		cout<<" 1.BRIMo"<<endl;
		cout<<" 2.S-Pay"<<endl;
		cout<<" 3.GoPay"<<endl;
		cout<<" Pilih Jenis Pembayaran : ";cin>>pmbyrn;
		cout<<"=================================================\n";
		system("cls");
		judul();
		switch(pmbyrn){
			case 1: cout<<"1.Buka aplikasi BRIMo "<<endl;
					cout<<"2.Masuk ke menu briva"<<endl;
					cout<<"3.Lakukan Pembayaran ke nomor berikut 1122334455667788 "<<endl;
					break;	
			case 2: cout<<"1.Buka aplikasi Shopee "<<endl;
					cout<<"2.Masuk ke menu Transfer "<<endl;
					cout<<"3.Lakukan Transfer ke nomor berikut 1122334455667788 "<<endl;
					break;
			case 3: cout<<"1.Buka aplikasi Gojek "<<endl;
					cout<<"2.Masuk ke menu Bayar "<<endl;
					cout<<"3.Lakukan Transfer ke nomor berikut 1122334455667788 "<<endl;
					break;
			default : cout<<"Maaf Angka Yang Anda Masukkan Tidak Sesuai, Silahkan Masukkan Dangan Benar\n";
				   	  system("pause");
					  system("cls");
					  goto metode;		
		}
	}
	
void pinjam(){
	int  back;
				masukkode:
				system("cls");
				daftar();
				//memilih kode buku
			    cout<<"Masukkan Kode Buku Yang Ingin Dipinjam\t: ";cin>>kode;
			    if (kode==11) {
			    	harga=3100;
				}
				else if (kode==14) {
					harga=2900;
				}
				else if (kode==36) {
					harga=1500;
				}
				else if (kode==80) {
					harga=1100;
				}
				else if (kode==51) {
					harga=4200;
				}
				else if (kode==57) {
					harga=3950;
				}
				else {
					cout<<"\nMaaf Kode Yang Anda Masukkan Salah, Silahkan Kode Dengan Benar "<<endl;
					system("pause");
					system("cls");
					goto masukkode;
				}
				//memilih judul buku
				cout<<"Masukkan Nomor Buku Yang Ingin Dipinjam\t: ";cin>>nomor;
				if (nomor==1){
					buku="ANTARES";
					if (kode!=11) {
						cout<<"\nMaaf Nomor Buku Yang Anda Masukkan Tidak Ada di Daftar Kode Buku "<<kode<<endl;
						system("pause");
						system("cls");
						goto masukkode;
					}
				}
				else if (nomor==2){
					buku="MARIPOSA";
					if (kode!=11) {
						cout<<"\nMaaf Nomor Buku Yang Anda Masukkan Tidak Ada di Daftar Kode Buku "<<kode<<endl;
						system("pause");
						system("cls");
						goto masukkode;
					}
				}
				else if (nomor==3){
					buku="DILLAN 1991";
					if (kode!=11) {
						cout<<"\nMaaf Nomor Buku Yang Anda Masukkan Tidak Ada di Daftar Kode Buku "<<kode<<endl;
						system("pause");
						system("cls");
						goto masukkode;
					}
				}
				else if (nomor==4){
					buku="KEBANGKITAN MALARANGGENG";
					if (kode!=14) {
						cout<<"\nMaaf Nomor Buku Yang Anda Masukkan Tidak Ada di Daftar Kode Buku "<<kode<<endl;
						system("pause");
						system("cls");
						goto masukkode;
					}
				}
				else if (nomor==5){
					buku="Kembalinya Mak Lampir";
					if (kode!=14) {
						cout<<"\nMaaf Nomor Buku Yang Anda Masukkan Tidak Ada di Daftar Kode Buku "<<kode<<endl;
						system("pause");
						system("cls");
						goto masukkode;
					}
				}
				else if (nomor==6){
					buku="Love From A to Z";
					if (kode!=36) {
						cout<<"\nMaaf Nomor Buku Yang Anda Masukkan Tidak Ada di Daftar Kode Buku "<<kode<<endl;
						system("pause");
						system("cls");
						goto masukkode;
					}
				}
				else if (nomor==7){
					buku="Cara Jitu Menjadi Tiktokers";
					if (kode!=36) {
						cout<<"\nMaaf Nomor Buku Yang Anda Masukkan Tidak Ada di Daftar Kode Buku "<<kode<<endl;
						system("pause");
						system("cls");
						goto masukkode;
					}
				}
				else if (nomor==8){
					buku="Kumpulan Pantun Jarjit";
					if (kode!=80) {
						cout<<"\nMaaf Nomor Buku Yang Anda Masukkan Tidak Ada di Daftar Kode Buku "<<kode<<endl;
						system("pause");
						system("cls");
						goto masukkode;
					}
				}
				else if (nomor==9){
					buku="Kosmos - Carl Sagan";
					if (kode!=51) {
						cout<<"\nMaaf Nomor Buku Yang Anda Masukkan Tidak Ada di Daftar Kode Buku "<<kode<<endl;
						system("pause");
						system("cls");
						goto masukkode;
					}
				}
				else if (nomor==10){
					buku="Robotic";
					if (kode!=57) {
						cout<<"\nMaaf Nomor Buku Yang Anda Masukkan Tidak Ada di Daftar Kode Buku "<<kode<<endl;
						system("pause");
						system("cls");
						goto masukkode;
					}
				}
				else if (nomor==11){
					buku="Electromagnetic";
					if (kode!=57) {
						cout<<"\nMaaf Nomor Buku Yang Anda Masukkan Tidak Ada di Daftar Kode Buku "<<kode<<endl;
						system("pause");
						system("cls");
						goto masukkode;
					}
				}
				else {
					cout<<"\nMaaf Nomor Buku Yang Anda Masukkan Salah, Silahkan Nomor Dengan Benar "<<endl;
					system("pause");
					system("cls");
					goto masukkode;
				}
				
				//input data peminjaman
				cout<<"Jumlah Buku Yang Dipinjam\t: ";cin>>jumlah;
				hargatotal=jumlah*harga;
				cout<<"\nMasukkan Tanggal Peminjaman\t: ";cin>>brw.DD;
				cout<<"         Bulan Peminjaman\t: ";cin>>brw.MM;
				cout<<"         Tahun Peminjaman\t: ";cin>>brw.YYYY;
				//menentukan batas pinjaman
				bts.DD = brw.DD+7;
				bts.MM = brw.MM+(bts.DD/31);
				bts.YYYY = brw.YYYY+(bts.MM/13);
				if(bts.DD>30){
			    	bts.DD-=30;
			  	}
				if(bts.MM>12){
				    bts.MM-=12;
				}
				
				//Tampilan data peminjaman
				chekout:
				system("cls");
				judul();
				cout<<"\n Nama Peminjam\t\t\t: "<<usermasuk;
				cout<<"\n Email \t\t\t\t: "<<email;
				cout<<"\n Buku Yang dipinjam \t\t: "<<buku;
				cout<<"\n Kode Buku\t\t\t: "<<kode;
				cout<<"\n Nomor Buku\t\t\t: "<<nomor;
				cout<<"\n Tanggal Pinjam\t\t\t: "<<brw.DD<<" / "<<brw.MM<<" / "<<brw.YYYY;
			  	cout<<"\n Batas Tanggal Pengembalian\t: "<<bts.DD<<" / "<<bts.MM<<" / "<<bts.YYYY;
			  	cout<<"\n Total Pembayaran\t\t: Rp."<<hargatotal<<endl;
			  	
			  	cout<<"\n Data peminjaman sudah Benar ? \n";
			  	cout<<"[0] Kembali Input Data Peminjaman\n[1] Melanjutkan Pembayaran = ";
				cin>>back;
			  	if (back==0){
			  		goto masukkode;
				  }
				if (back==1){
					pembayaran();
				}
				else {
					cout<<"Maaf Angka Aang Anda Masukkan Salah\n";
					system("pause");
					system("cls");
					goto chekout;
				}
	
			  	system("pause");
				system("cls");
				
				//say goodbye
				judul();
			  	cout<<"\n\nSilahkan Ambil Buku Yang Anda Pinjam Di Perpustakaan Pargoy Dengan Menunjukkan Bukti Peminjaman Ke Petugas"<<endl;
			  	cout<<"\n                      Bukti Peminjaman Dapat Diakses Di Menu Cetak Bukti Peminjaman                         "<<endl;
			  	cout<<"\n\n                           Jl. mantan No.4 Kel.Kenangan Kec.Rindu Kab. I Love You                      "<<endl;
			  	cout<<"                                      Jam Operasional 09.00-17.00 WIB                                       "<<endl;
			  	cout<<"                              email : perpuspargoy@gmail.com, telp : 0812345678                            "<<endl;
			  	cout<<endl;
			  	cout<<"                             TERIMAKASIH, SAMPAI JUMPA KEMBALI "<<usermasuk<<":)                           "<<endl;
    			cout<<"                                        MEMBACA MEMBUATMU BAHAGIA                                          \n";
}	

void balik(){
	int lama, dendarsk, dendabalik, dendatotal, rsk, telat;
	
	system("cls");
	judul();
	cout<<"\n Nama Peminjam\t\t\t: "<<usermasuk;
	cout<<"\n Email \t\t\t\t: "<<email<<endl;
	cout<<"Masukkan Tanggal Pemngembalian\t: ";cin>>rtn.DD;
	cout<<"         Bulan Pemngembalian\t: ";cin>>rtn.MM;
	cout<<"         Tahun Pemngembalian\t: ";cin>>rtn.YYYY;
	cout<<"Masukkan Tanggal Peminjaman\t: ";cin>>brw.DD;
	cout<<"         Bulan Peminjaman\t: ";cin>>brw.MM;
	cout<<"         Tahun Peminjaman\t: ";cin>>brw.YYYY;
	//menghitung lama peminjaman
	//Pengurangan hari
	if (rtn.DD >= brw.DD) {
		bts.DD = rtn.DD - brw.DD;
	}
	else {
		bts.DD = (rtn.DD + 30) - brw.DD;
		rtn.MM = rtn.MM - 1;
	}
	
	//Pengurangan bulan
	if (rtn.MM >= brw.MM) {
		bts.MM = rtn.MM - brw.MM;
	}
	else {
		bts.MM = (rtn.MM + 12) - brw.MM;
		rtn.YYYY = rtn.YYYY -1;
	}
	
	//pengurangan tahun
		bts.YYYY = rtn.YYYY - brw.YYYY;
		
	lama=bts.YYYY*365+bts.MM*30+bts.DD;
	cout<<"Lama Meminjam\t\t\t: "<<lama<<" hari"<<endl;
	//menghitung keterlambatan
	if (lama>7) {
		telat=lama-7;
		dendabalik=telat*15000;
	}
	else {
		dendabalik=0;
	}
	cout<<"Keterlambatan\t\t\t: "<<telat<<" hari "<<endl;
	cout<<"Denda Keterlambatan\t\t: "<<dendabalik<<endl;
	
	rusak:
	cout<<"Ada Kerusakan Atau Tidak??\n [0]Tidak Ada Kerusakan\n [1]Sobek\n [2]Tercoret\n [3]Terkena Noda = ";cin>>rsk;
	if (rsk==0) {
		dendarsk=0;
	}
	else if (rsk==1) {
		dendarsk=10000;
	}
	else if (rsk==2) {
		dendarsk=2500;
	}
	else if (rsk==3) {
		dendarsk=3000;
	}
	else {
		cout<<"Masuukan Opsi Yang Sesuai ";
		system("pause");
		system("cls");
		goto rusak;
	}
	cout<<"Denda Kerusakan Buku\t\t\t : "<<dendarsk<<endl;
	dendatotal=dendabalik+dendarsk;
	cout<<"Denda Keseluruhan\t\t\t : "<<dendatotal<<endl;
	
	
	if (dendatotal!=0){
		system("pause");
		system("cls");
		cout<<"Tekan Bebas Untuk Melanjutkan Pembayaran"<<endl;
		pembayaran();
	}
	else {
		system("pause");
		system("cls");
		judul();
		cout<<"\n\n\n                       TERIMAKASIH, SAMPAI JUMPA KEMBALI "<<usermasuk<<":)"<<endl;
    	cout<<"\n                                 MEMBACA MEMBUATMU BAHAGIA     \n";
	}
}
void bukti (){
		if (pmbyrn==0) {
			system("cls");
			judul();
			cout<<"Anda Belum Memiliki Histori Peminjaman Buku";
		}
		else {
			system("cls");
			judul();
			cout<<"\n Nama Peminjam\t\t\t: "<<usermasuk;
			cout<<"\n Email \t\t\t\t: "<<email;
			cout<<"\n Buku Yang dipinjam \t\t: "<<buku;
			cout<<"\n Kode Buku\t\t\t: "<<kode;
			cout<<"\n Nomor Buku\t\t\t: "<<nomor;
			cout<<"\n Tanggal Pinjam\t\t\t: "<<brw.DD<<" / "<<brw.MM<<" / "<<brw.YYYY;
		  	cout<<"\n Batas Tanggal Pengembalian\t: "<<bts.DD<<" / "<<bts.MM<<" / "<<bts.YYYY;
		  	cout<<"\n Total Pembayaran\t\t: Rp."<<hargatotal<<endl;
		  	//panggil metode pembayaran
		  	if (pmbyrn==1){
		  		cout<<" Metode Pembayaran\t\t: BRImo";
			}
			else if (pmbyrn==2){
				cout<<" Metode Pembayaran\t\t: ShopeePay";
			}
			else {
				cout<<" Metode Pembayaran\t\t: GoPay";
			}
		cout<<"\n\n Dicetak Pada : "<<__DATE__<<" Pukul "<<__TIME__;   	
		}
}
		
	int main (){
		int pilih,opsi;
		
		intro();
		logreg();
		judul();
		cout<<endl;
		menu:
		cout<<" HALLO "<<usermasuk<<" SELAMAT DATANG DI PROGRAM PERPUSTAKAAN PARGOY\n\n";
		cout<<" MENU :\n";
		cout<<" 1. PEMINJAMAN BUKU\n";
		cout<<" 2. PENGEMBALIAN BUKU\n";
		cout<<" 3. CETAK BUKTI PEMINJAMAN\n";\
		cout<<"\n MASUKKAN PILIHAN  : ";cin>>pilih;
		
		switch (pilih) {
			case 1 : pinjam();
			break;
			case 2 : balik();
			break;
			case 3 : bukti();
			break;
			default : opsi!=1;	
		}
		cout<<"\n\n [1] Untuk Kembali Ke Menu Awal\n [0] Untuk Keluar"<<endl;
		cout<<"\n Masukkan Pilihan = ";cin>>opsi;
		
		system("cls");
		judul();
		while (opsi==1)
		goto menu;
}
