#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

//membuat struct menggunakan typedef agar bisa membuat alias
typedef struct{
	int total_jamKerja;
	int total_gaji;
	int jamPokok;
	int jamLembur;
	int gajiPokok;
	int gajiLembur;
}gajiPegawai;

//Validari angka
int validInt(int *var){
	char buff[1024];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%d %c", var, &cek) == 1) {
			return 1;
		}
	}
	return 0;
}
void cek_valid(int *var, char *msg){
	while(1){
		printf(msg);
		if(validInt(var))
			break;
		printf("\t\t\t\t\t    [ERROR] Input hanya berupa angka!");
		sleep(1);
		printf("\n");
	}
}

//untuk ngulang program sekalian validasi
void reset(){
 	int ulangi;
 	system("cls");
 	printf("\n\n\t\t\t\t\t    Ingin mengulangi? (y / t): ");
 	ulangi = getch();

 	if (ulangi == 'y' || ulangi == 'Y'){
		system("cls");
 		main();
 	}else if (ulangi == 't' || ulangi == 'T'){
 	    system("cls");
 	    printf("\n\n\n");
        printf("\t\t\t\t    ============================================\n");
        printf("\t\t\t\t    Terima kasih telah menggunakan layanan kami.\n");
        printf("\t\t\t\t    ============================================\n\n\n");
 		exit(1);
 	}else{
 		printf("\n\n\t\t\t\t    Input Invalid! Masukkan ulang pilihan Anda!\n");
 		sleep(1);
 		system("cls");
 		reset();
 	}
}

int main(){
	system("cls");
	gajiPegawai gp; //menggunakan alias gp

	gp.total_jamKerja=0;
	gp.total_gaji=0;
	gp.jamPokok=8;
	gp.jamLembur=0;
	gp.gajiPokok=0;
	gp.gajiLembur=0;

	printf("\n\n\n");
    printf("\t\t\t\t          Praktikum Algoritma dan Pemrograman Modul IV       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t============= Program Menghitung Gaji Karyawan ==============\n");
    printf("\t\t\t\t====================== Oleh Kelompok 13 =====================\n");
    printf("\t\t\t\t-------------------------------------------------------------\n");
    printf("\t\t\t\t|                      ANGGOTA KELOMPOK:                     |\n");
    printf("\t\t\t\t|>>> I Made Widya Prajna Dharmajati           |  2205551080  |\n");
    printf("\t\t\t\t|>>> Sultan Alifatur Rozak                    |  2205551094  |\n");
    printf("\t\t\t\t|>>> I Komang Indra Pramana                   |  2205551095  |\n");
    printf("\t\t\t\t|>>> Sinta Purnama Dewi                       |  2205551100  |\n");
    printf("\t\t\t\t|>>> I Putu Fardeen Bagas Mahottama           |  2205551112  |\n");
    printf("\t\t\t\t|>>> Sang Kompiang Raynor Prabandana Kengetan |  2205551113  |\n");
    printf("\t\t\t\t--------------------------------------------------------------\n");
    printf("\t\t\t\t                Selamat menggunakan layanan kami.             \n");
system ("pause");

	system("cls");
	printf ("\n\t\t\t\t=========================================================\n");
	printf ("\t\t\t\t||               MENGHITUNG GAJI KARYAWAN              ||\n");
	printf ("\t\t\t\t=========================================================\n");
	cek_valid(&gp.total_jamKerja,"\n\t\t\t\t\t\tInput Jam Kerja Anda : ");

	if(gp.total_jamKerja > 8){
		gp.jamLembur = gp.total_jamKerja - gp.jamPokok;
		gp.gajiPokok = gp.jamPokok * 10625;
		gp.gajiLembur= gp.jamLembur * gp.gajiPokok;
	}
	else{
		gp.gajiPokok= 10625 * gp.total_jamKerja;
		gp.jamPokok = gp.total_jamKerja;
	}

	gp.total_gaji = gp.gajiLembur + gp.gajiPokok;
    sleep(1);
	printf("\n\t\t\t\t---------------------------------------------------------\n");
	printf("\t\t\t\t\t        Total Jam Kerja Anda : %d jam\n", gp.total_jamKerja);
	printf("\n\t\t\t\t\t    Dengan rincian sebagai berikut\n");
	printf("\t\t\t\t\t>> Jumlah Jam Kerja Pokok    : %d jam\n", gp.jamPokok);
	printf("\t\t\t\t\t>> Jumlah Jam Kerja Lembur   : %d jam\n", gp.jamLembur);
	printf("\n\t\t\t\t       Sehingga rincian gaji Anda sebagai berikut\n");
	printf("\t\t\t\t\t>> Jumlah Gaji Pokok         : Rp %d\n", gp.gajiPokok);
	printf("\t\t\t\t\t>> Jumlah Gaji Lembur        : Rp %d\n\n", gp.gajiLembur);
	printf("\t\t\t\t---------------------------------------------------------\n");
	printf("\t\t\t\t\t|| Total Gaji Anda           : Rp %d ||\n", gp.total_gaji);
	printf("\t\t\t\t---------------------------------------------------------\n");
	system("pause");
	reset();
}
