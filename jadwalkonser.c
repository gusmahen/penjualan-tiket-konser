void JadwalKonser(){
	int hari;
	int tutup = 1;
	while(tutup==1){
		system("cls");
	    printf("\n\n\t===================[ JADWAL MINGGU INI ]=====================\n\n");
	    printf("\t\t1. Jumat      [Sky Garden]\n");
	    printf("\t\t2. Sabtu      [LXXY]\n");
	    printf("\t\t3. Minggu     [Boshe]\n");
	    printf("\t______________________________________________________________\n");
	    printf("\tMasukkan nomor hari : ");
	    scanf("%d" ,&hari);
	    printf("\n\t=================[ KONSER YANG TERSEDIA ]===================\n\n");
		switch(hari){
			case 1:{
				printf("\n\n\t\t==============[ SKY GARDEN ]==============\n\n");
			    printf("\t\t1. Rich Brain        [10.00-12.00]\n");
			    printf("\t\t2. Joji              [13.00-15.00]\n");
			    printf("\t\t3. Post Malone       [17.00-19.00]\n");
			    printf("\t\t4. BTS               [20.00-22.00]\n");
			    printf("\t\t______________________________________________\n");
				break;
			}
			case 2:{
				printf("\n\n\t\t==============[ LXXY ]==============\n\n");
			    printf("\t\t1. Weird Genius      [10.00-12.00]\n");
			    printf("\t\t2. Feast             [13.00-15.00]\n");
			    printf("\t\t3. Rocket Rockers    [17.00-19.00]\n");
			    printf("\t\t4. Nosstress         [20.00-22.00]\n");
			    printf("\t\t______________________________________________\n");
				break;
			}
			case 3:{
				printf("\n\n\t\t==============[ BOSHE ]==============\n\n");
			    printf("\t\t1. Justin Bieber     [10.00-12.00]\n");
			    printf("\t\t2. Hindia            [13.00-15.00]\n");
			    printf("\t\t3. Ari Kencana       [17.00-19.00]\n");
			    printf("\t\t4. Fourtwnty         [20.00-22.00]\n");
			    printf("\t\t______________________________________________\n");
				break;
			}
		}
	    printf("\n\tUntuk Menutup Halaman Enter '0' Untuk Melihat Lagi Tekan '1':");
		scanf("%d", &tutup);
		system("cls");
	}
}
