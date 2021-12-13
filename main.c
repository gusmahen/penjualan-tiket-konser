#include <stdio.h>
#include <string.h>
#include "datapembelian.c"
#include "jadwalkonser.c"
//PEMBELIAN TIKET KONSER
//Ida Bagus Gede Surya Mahendra 2105551040
//Ni Kadek Yumitha Septyandari 2105551045
int main(){
	int i;
	DataPembelian data[20];
    int input = 0;
	while(input!=5){
		system("cls");
		printf("\t\t-------------------------------------------\n");
		printf("\t\t--      PROGRAM PENJUALAN TIKET KONSER   --\n");
		printf("\t\t-------------------------------------------\n");
		printf("\t\t==============[ MENU KONSER ]==============\n");
		printf("\t\t              1. Beli Tiket                \n");
		printf("\t\t              2. Lihat Tiket               \n");
		printf("\t\t              3. Cari Kode Tiket           \n");
		printf("\t\t              4. Lihat Jadwal Konser       \n");
		printf("\t\t              5. Exit                      \n");
		printf("\t\tInput Angka Menu : ");
		scanf("%d", &input);
		system("cls");
		switch(input){
			case 1:{
				int tutup = 1;
                printf("\t\t\n");
				printf("\t\t----------------------------------------------\n");
				printf("\t\t==========[ PENJUALAN TIKET KONSER ]==========\n\n");
		   		printf("\t\t--                Menu Kelas                --\n");
		  		printf("\t\t----------------------------------------------\n");
		    	printf("\t\t:   Kode Kelas  :   Kelas   :       Harga    :\n");
		    	printf("\t\t:_______________:___________:________________:\n");
		    	printf("\t\t:       1       :   VVIP    : Rp 1.000.000,00:\n");
		    	printf("\t\t:       2       :   VIP     : Rp   750.000,00:\n");
		    	printf("\t\t:       3       : Festival  : Rp   500.000,00:\n");
		    	printf("\t\t:       4       :  Biasa    : Rp   250.000,00:\n");
		    	printf("\t\t______________________________________________\n\n\n\n");
				while(tutup==1){
					i=i+1;
					printf("\t\t=============[ DATA PEMBELIAN %d ]=============\n", i);
					printf("\t\tKode Tiket Konser      : %d\n", i);
					printf("\t\tNama                   : ");
					scanf(" %[^\n]s", &data[i].nama_pembeli);
					printf("\n\n\t\t==============[ PILIHAN KONSER ]==============\n\n");
				    printf("\t\t1. Jumat      [Sky Garden]\n");
				    printf("\t\t2. Sabtu      [LXXY]\n");
				    printf("\t\t3. Minggu     [Boshe]\n");
				    printf("\t\t______________________________________________\n");
				    do{
				    	printf("\t\tMasukkan nomor hari : ");
				    	scanf("%d" ,&data[i].no_hari);
					}while(data[i].no_hari<1 || data[i].no_hari>3);

				    printf("\n\t\t===========[ KONSER YANG TERSEDIA ]===========\n\n");
				    if(data[i].no_hari==1){
				        data[i].no_konser=1;
			            strcpy(data[i].nama_hari,"Jumat");
			            strcpy(data[i].nama_konser,"Sky Garden");
				    }else if(data[i].no_hari==2){
			            data[i].no_konser=2;
			            strcpy(data[i].nama_hari,"Sabtu");
				        strcpy(data[i].nama_konser,"LXXY");
			        }else{
			            data[i].no_konser=3;
			            strcpy(data[i].nama_hari,"Minggu");
				        strcpy(data[i].nama_konser,"Boshe");
				    }
				    printf("\t\t%d.%s      [%s]\t\n" , data[i].no_konser, data[i].nama_hari, data[i].nama_konser);
				    printf("\t\t______________________________________________\n");
				    printf("\t\tPilihan hari  Anda      : %s\n" , data[i].nama_hari);
				    printf("\t\tPilihan konser  Anda    : %s\n" , data[i].nama_konser);
					printf("\t\tPilihan kelas konser    : ");
					scanf("%d", &data[i].kelas_tiket);
					switch(data[i].kelas_tiket){
						case 1:{
							data[i].harga_tiket = 1000000;
							break;
						}
						case 2:{
							data[i].harga_tiket = 750000;
							break;
						}
						case 3:{
							data[i].harga_tiket = 500000;
							break;
						}
						case 4:{
							data[i].harga_tiket = 250000;
							break;
						}
					}
					printf("\t\tJumlah pembelian tiket  : ");
					scanf("%d", &data[i].jumlah_tiket);
					data[i].total_harga = data[i].jumlah_tiket * data[i].harga_tiket;
					printf("\t\t_______________________________________________\n");
					printf("\t\tTotal harga             : %d\n", data[i].total_harga);
					do{
						printf("\t\tUang yang Dibayarkan    : ");
						scanf("%d", &data[i].total_bayar);
					}while(data[i].total_bayar < data[i].total_harga);
					data[i].kembalian = data[i].total_bayar-data[i].total_harga;
					printf("\t\tKembalian Uang          : %d\n", data[i].kembalian);
					printf("\t\tUntuk memasukkan data lagi Enter 1 [MAX 20 DATA], untuk menutup menu Enter 0:");
					scanf("%d", &tutup);
				}
				break;
			}
			case 2:{
				HistoryTransaksi(data, i);
				break;
			}
			case 3:{
				PencarianHistory(data, i);
				break;
			}
			case 4:{
				JadwalKonser();
				break;
			}
			case 5:{
				printf("Anda Telah Keluar Dari Program");
				break;
			}
			default:{
				printf("Input Menu Salah");
				break;
			}
		}
	}
	return 0;
}
