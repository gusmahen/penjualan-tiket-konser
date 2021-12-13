#include "datapembelian.h"

void HistoryTransaksi(DataPembelian data[],int jumlah_pembelian){
	int i;
	int tutup=1;
	while(tutup==1){
		for(i=1; i <= jumlah_pembelian; i++ ){
		    	printf("\t\t==============[ DATA PEMBELIAN ]==============\n");
		    	printf("\t\tKode Tiket Konser      : %d\n", i);
				printf("\t\tNama                   : %s\n", data[i].nama_pembeli);
				printf("\t\tHari Konser Berlangsung: %s\n", data[i].nama_hari);
				printf("\t\tNama Konser            : %s\n", data[i].nama_konser);
				printf("\t\tPilihan kelas konser   : %d\n", data[i].kelas_tiket);
				printf("\t\tHarga Per-Tiket        : %d\n", data[i].harga_tiket);
				printf("\t\tJumlah pembelian tiket : %d\n", data[i].jumlah_tiket);
				printf("\t\tTotal harga            : %d\n", data[i].total_harga);
				printf("\t\tUang yang Dibayarkan   : %d\n", data[i].total_bayar);
				printf("\t\tKembalian Uang         : %d\n", data[i].kembalian);
				printf("\n\n");
		    }
		printf("\t\tUntuk Menutup Halaman Enter '0':");
		scanf("%d", &tutup);
	}
}

void PencarianHistory(DataPembelian data[],int jumlah_pembelian){
	int cari;
	int i;
	int tutup=1;
	printf("Cari Data Tiket Berdasarkan Kode Tiket Konser :");
	scanf("%d", &cari);
	while(tutup==1){
		for(i = 1; i <= jumlah_pembelian; i++ ){
			if(cari == i){
				printf("\t\t=============[ DATA PEMBELIAN %d]=============\n", i);
				printf("\t\tKode Tiket Konser      : %d\n", i);
				printf("\t\tNama                   : %s\n", data[i].nama_pembeli);
				printf("\t\tHari Konser Berlangsung: %s\n", data[i].nama_hari);
				printf("\t\tNama Konser            : %s\n", data[i].nama_konser);
				printf("\t\tPilihan kelas konser   : %d\n", data[i].kelas_tiket);
				printf("\t\tHarga Per-Tiket        : %d\n", data[i].harga_tiket);
				printf("\t\tJumlah pembelian tiket : %d\n", data[i].jumlah_tiket);
				printf("\t\tTotal harga            : %d\n", data[i].total_harga);
				printf("\t\tUang yang Dibayarkan   : %d\n", data[i].total_bayar);
				printf("\t\tKembalian Uang         : %d\n", data[i].kembalian);
			}
		}
		printf("\t\tUntuk Menutup Halaman Enter '0':");
		scanf("%d", &tutup);
	}
}
