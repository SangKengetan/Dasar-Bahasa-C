#include <stdio.h>
#include <string.h>

char nama[30];
char bulan[10];
int tanggal=0;
char *bintang;

void caribintang();
void cover(){
    printf("\n\n\n");
    printf("\t\t\t\t          Praktikum Algoritma dan Pemrograman Modul II       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t=Program Mencari Zodiak dengan Input Bulan dan Tanggal Lahir=\n");
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
    system ("pause");
    system ("cls");
}

void end(){
	printf(" ====================================================================\n");
	printf("||     Terimakasih telah menggunakan Program Penentuan Zodiak!!!     ||\n");
	printf(" ====================================================================\n");

}

int cekvalidasiInt(int *var)
{
    char buff[10];
    char cek;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) != NULL)
    {
        if (sscanf(buff, "%d %c", var, &cek) == 1)
        {
            return 1;
        }
    }
    return 0;
}

void UlangValidasiInt(int *var, char *prompt)
{
    while (1)
    {
        if (cekvalidasiInt(var))
            break;
        printf("Input salah!");
        printf("\n");
        printf(prompt);
    }
}

int main()
{
    int loop, menu;
	cover();

        do{
		menu:
		printf(" ======================================\n");
		printf("||     Program Menentukan Zodiak      ||\n");
		printf(" ======================================\n");
        printf("SELAMAT DATANG DI PROGRAM MENCARI BINTANG\n");
        printf("Masukan tanggal lahir anda : ");
        scanf("%d", &tanggal);
        printf("Masukan bulan lahir anda : ");
        scanf("%s", &bulan);

        caribintang(tanggal,bulan);

int ulang;
 	printf("\n\nIngin Mengulangi? [y / t] ");
 	ulang = getch();

 	if (ulang == 'y' || ulang == 'Y'){
 		system("cls");
		goto menu;

 	}else if (ulang == 't' || ulang == 'T'){
 		system("cls");
 		end();

 	}else{
 		system("cls");
 		printf("Input yang anda masukkan tidak valid\n");
 		goto menu;
 	}
    }while (loop == 1);
}

void caribintang()
{
	if ((strcmp(bulan, "Januari") == 0) || (strcmp(bulan, "januari") == 0))  {
		if (tanggal >= 0 && tanggal <= 19) {
			bintang = "Carpicron";
		} else if (tanggal >= 20 && tanggal <= 31) {
			bintang = "Aquarius";
		} else {
			printf("Tanggal tidak sampai\n");
			bintang = "-";
		}
        } else if ((strcmp(bulan, "Februari") == 0) || (strcmp(bulan, "februari") == 0)) {
		if (tanggal >= 0 && tanggal <= 18) {
			bintang = "Aquarius";
		} else if (tanggal >= 19 && tanggal <=29) {
			bintang = "Pisces";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Maret") == 0) || (strcmp(bulan, "maret") == 0))  {
		if (tanggal >= 0 && tanggal <=20) {
			bintang = "Pisces";
		} else if (tanggal >= 21 && tanggal <=31) {
			bintang = "Aries";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "April") == 0) || (strcmp(bulan, "april") == 0)) {
		if (tanggal >= 0 && tanggal <= 19) {
			bintang = "Aries";
		} else if (tanggal >= 20 && tanggal <=31) {
			bintang = "Taurus";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Mei") == 0) || (strcmp(bulan, "mei") == 0)) {
		if (tanggal >= 0 && tanggal <=20) {
			bintang = "Taurus";
		} else if (tanggal >= 21 && tanggal <=31) {
			bintang = "Gemini";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Juni") == 0) || (strcmp(bulan, "juni") == 0))  {
		if (tanggal >= 0 && tanggal <=20) {
			bintang = "Gemini";
		} else if (tanggal >= 21 && tanggal <=31) {
			bintang = "Cancer";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Juli") == 0) || (strcmp(bulan, "juli") == 0))  {
		if (tanggal >= 0 && tanggal <=22) {
			bintang = "Cancer";
		} else if (tanggal >= 23 && tanggal <=31) {
			bintang = "Leo";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Agustus") == 0) || (strcmp(bulan, "agustus") == 0))  {
		if (tanggal >= 0 && tanggal <=22) {
			bintang = "Leo";
		} else if (tanggal >= 23 && tanggal <= 31) {
			bintang = "Virgo";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "September") == 0) || (strcmp(bulan, "september") == 0))  {
		if (tanggal >= 0 && tanggal <= 22) {
			bintang = "Virgo";
		} else if (tanggal >= 23 && tanggal <= 31) {
			bintang = "Libra";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Oktober") == 0) || (strcmp(bulan, "oktober") == 0))  {
		if (tanggal >= 0 && tanggal <= 22) {
			bintang = "Libra";
		} else if (tanggal >= 23 && tanggal <= 31) {
			bintang = "Scorpio";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "November") == 0) || (strcmp(bulan, "november") == 0))  {
		if (tanggal >= 0 && tanggal <= 21) {
			bintang = "Scorpio";
		} else if (tanggal >= 22 && tanggal <= 31) {
			bintang = "Sagitarius";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
		}
	} else if ((strcmp(bulan, "Desember") == 0) || (strcmp(bulan, "desember") == 0))  {
		if (tanggal >= 0 && tanggal <= 21) {
			bintang = "Sagitarius";
		} else if (tanggal >= 22 && tanggal <= 31) {
			bintang = "Carpicorn";
		} else {
			printf("Tanggal tidak sampai %d\n", tanggal);
			bintang = "-";
			system("cls");
		}
	} else{
 		system("cls");
 		printf("Input yang anda masukkan tidak valid\n");

 	}
    printf("\n===============================================\n");
	printf("Dari data yang dimasukan anda merupakan seorang\n");
	printf("Zodiak: %s\n", bintang);
	printf("Tanggal Lahir: %d %s\n", tanggal, bulan);



}
