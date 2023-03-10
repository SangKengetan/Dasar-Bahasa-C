#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void cover();
void header();
void refresh();
void new_enkripsi();
void new_deskripsi();

void header(){
printf("\t\t\t\t====================================================\n");
printf("\t\t\t\t=========== Program Enkripsi & Deskripsi ===========\n");
printf("\t\t\t\t===== Menampilkan Enkripsi & Deskripsi Kalimat =====\n");
printf("\t\t\t\t=== Praktikum Algoritma dan Pemrograman Modul 3 ====\n");
printf("\t\t\t\t=================== Kelompok 13 ====================\n");
printf("\t\t\t\t====================================================\n\n\n");
}

void cover(){
printf("\t\t\t\t|------------------------------------------------------------|\n");
printf("\t\t\t\t|------------------------KELOMPOK 13-------------------------|\n");
printf("\t\t\t\t|============================================================|\n");
printf("\t\t\t\t--------------------------------------------------------------\n");
printf("\t\t\t\t|                      ANGGOTA KELOMPOK:                     |\n");
printf("\t\t\t\t|>>> I Made Widya Prajna Dharmajati           |  2205551080  |\n");
printf("\t\t\t\t|>>> Sultan Alifatur Rozak                    |  2205551094  |\n");
printf("\t\t\t\t|>>> I Komang Indra Pramana                   |  2205551095  |\n");
printf("\t\t\t\t|>>> Sinta Purnama Dewi                       |  2205551100  |\n");
printf("\t\t\t\t|>>> I Putu Fardeen Bagas Mahottama           |  2205551112  |\n");
printf("\t\t\t\t|>>> Sang Kompiang Raynor Prabandana Kengetan |  2205551113  |\n");
printf("\t\t\t\t--------------------------------------------------------------\n");
}


double kembali(){
double pilihan;
char choice;
if (choice=scanf("%lf%c", &pilihan, &choice) != 2 || pilihan<=0 || pilihan>2 || choice != '\n'){
    fflush(stdin);
    printf("\n\t\t\t\t\t\tInput tidak valid!\n");
    printf("\t\t\t\t\t------------------------------------\n");
    sleep(0);
    refresh();
    return kembali();
    }
    else{
        return pilihan;
    }
return kembali();
}

void refresh(){
double reset; int choice;
printf("\n\nTekan tombol enter untuk melanjutkan program.");
getchar();
system("cls");
printf("\n Apakah Anda ingin menghitung kembali?\n\n");
printf("(1) Kembali Menghitung \n");
printf("(2) Keluar program\n");
printf("Pilihan : ");
reset = kembali();
choice = ceil (reset);
if(choice == reset){
    system("cls");
    switch(choice){
        case 1:
       system("cls");
       main();
        break;
        case 2:
        system("cls");
        printf("Terimakasih telah menggunakan program kami!");
        getchar();
        exit(1);
        break;
        }
    }
}


//validasi int
int validInt(int *var){
	char buff[1024];
	char cek;

	if(fgets(buff, sizeof(buff), stdin) !=NULL){
  		if(sscanf(buff, "%d %c", var, &cek) ==1){
   		return 1;
  		}
 	}
 	return 0;
}


int main(){
    int pilihan;
    system("cls");
    cover();
    system("pause");
    system("cls");
    header();

	/* Pendeklarasian Variabel */
	int a;
	char *b, filldata[255], move [7];
	char *moving=move;
	printf ("Masukkan sebuah Kalimat : ");
	scanf ("%[^\n]", filldata);

	/* menentukan besarnya jumlah pergesaran */
	do {
        fflush(stdin);
        printf("Besarnya Pergerakan dari karakter : ");
        if(validInt(&a)){
        } else{
        printf("\n\n\tInput tidak valid!");
        printf("\n\t\t\t-------------------------------------------------------------\n");;
        sleep(10);
        main();
        }
	}
	while (a<0);

	/* menentukan direct pergesaran dan mengubah dari huruf besar jadi huruf kecil */
	do {
        printf ("Arah Pergeseran [kanan atau kiri] : ");
	    scanf ("%s", move);
	    while (*moving!='\0') {
	        *moving=tolower (*moving);
	        moving++;
	        }
	    moving=move;
	}

	/* Arah pergeseran ke kanan dan ke kiri */
    while ((strcmp (move, "kanan") !=0) && (strcmp (move, "kiri") !=0));
    if (a>0) {
		b=filldata;
		for ( ; *b!='\0'; b++) {
			*b=tolower(*b);
    		}
    do {
        fflush(stdin);
        printf("\t\t\t\t====================== Menu ======================\n");
        printf("\t\t\t\t==================================================\n");
        printf("\t\t\t\t===== [1] Enkripsi ===============================\n");
        printf("\t\t\t\t===== [2] Deskripsi ==============================\n");
        printf("\t\t\t\t==================================================\n");
        printf("\n\n\tPilihan Anda: ");
        if(validInt(&pilihan)){
        } else{
        printf("\n\n\tInput tidak valid!");
        printf("\n\t\t\t-------------------------------------------------------------\n");;
        sleep(3);
        main();
        }
	}
	while (pilihan<0 && pilihan>2);

    if (pilihan == 1){new_enkripsi (filldata, move, a); //memanggil fungsi new_enkripsi
		printf ("\n\nKalimat setelah dienkripsi : %s\n", filldata);
		system("pause");
		refresh();
	    }
    else if (pilihan == 2){new_deskripsi (filldata, move, a); //memanggil fungsi new_deskripsi
		printf ("\n\nKalimat setelah dideskripsi : %s\n", filldata);
		system("pause");
		refresh();
	    }
    }
    return EXIT_SUCCESS;
}


/* pengimplementasian fungsi new_enkripsi */
void new_enkripsi (char *filldata, char *direct, int move) {
int x;

/* apabila bergeser ke arah kanan */
if ((strcmp (direct, "kanan"))==0) {
	for ( ; *filldata!='\0'; filldata++) {
		if(*filldata==' ') continue;
		else {
			for (x=0; x<move; x++) {
				if((*filldata)>='z') {
					(*filldata)-=26;
					(*filldata)++;
				} else {
					(*filldata)++;
					}
				}
			}
		}

		/* apabila bergeser kearah kiri */
	} else if ((strcmp (direct, "kiri"))==0) {
		for ( ; *filldata!='\0'; filldata++) {
			if (*filldata==' ') continue;
			else {
				for (x=0; x<move; x++) {
					if ((*filldata)<='a') {
						(*filldata)+=26;
						(*filldata)--;
					} else {
						(*filldata)--;
					}
				}
			}
		}
	}
}

/* pengimplementasian fungsi new_deskripsi */
void new_deskripsi (char *filldata, char *direct, int move) {
int x;

/* apabila bergeser ke arah kanan */
if ((strcmp (direct, "kanan"))==0) {
	for ( ; *filldata!='\0'; filldata++) {
		if(*filldata==' ') continue;
		else {
			for (x=0; x<move; x++) {
				if((*filldata)<='a') {
					(*filldata)+=26;
					(*filldata)--;
				} else {
					(*filldata)--;
					}
				}
			}
		}

		/* apabila bergeser kearah kiri */
	} else if ((strcmp (direct, "kiri"))==0) {
		for ( ; *filldata!='\0'; filldata++) {
			if (*filldata==' ') continue;
			else {
				for (x=0; x<move; x++) {
					if ((*filldata)>='z') {
						(*filldata)-=26;
						(*filldata)++;
					} else {
						(*filldata)++;
					}
				}
			}
		}
	}
}

