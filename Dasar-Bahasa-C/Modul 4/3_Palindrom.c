#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Header yang berisi fungsi-fungsi untuk mengklompokan dan manipulasi karakter
#include <ctype.h>

void view(char kata[]);
void hitung(char kata[]);
int palindrom(char kata[], int size);
char kata [1000];
void cek_valid(int *var, char *msg);
void keluar();
void ulang();

int main()
{
    int length;
    int i;
    int digit = 0;
    int huruf = 0;
    system ("cls");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t          Praktikum Algoritma dan Pemrograman Modul IV       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t======================Program Palindrom======================\n");
    printf("\t\t\t\t====================== Oleh Kelompok 13 =====================\n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t|                     ANGGOTA KELOMPOK:                     |\n");
    printf("\t\t\t\t|>>> I Made Widya Prajna Dharmajati          |  2205551080  |\n");
    printf("\t\t\t\t|>>> Sultan Alifatur Rozak                   |  2205551094  |\n");
    printf("\t\t\t\t|>>> I Komang Indra Pramana                  |  2205551095  |\n");
    printf("\t\t\t\t|>>> Sinta Purnama Dewi                      |  2205551100  |\n");
    printf("\t\t\t\t|>>> I Putu Fardeen Bagas Mahottama          |  2205551112  |\n");
    printf("\t\t\t\t|>>> Sang Kompiang Raynor Prabandana Kengetan|  2205551113  |\n");
    printf("\t\t\t\t=============================================================\n\n\n");

    printf("\t\t\t\t|Masukan Kata : ");
    gets(kata);
    length = strlen(kata);

    for (i = 0; i < length; i++){
        if (isdigit(kata[i]) !=0 )
        digit++;
    }

    if (digit > 0){
        printf("\t\t\t\t|Kata Tidak Boleh Berisi Angka!!!\n");
        printf("\t\t\t\t|Masukan Kata : ");
        gets(kata);
        length = strlen(kata);
    }
    fflush(stdin);
    if (length < 1){
        printf("\t\t\t\t|Kata Tidak Boleh 1 Huruf Harus Lebih!!!\n");
        printf("\t\t\t\t|Masukan Kata : ");
        gets(kata);
        length = strlen(kata);
    }
    fflush(stdin);
    hitung(kata);
    return 0;
}

void ulang()
{
    int pilihan;
    printf("\n\t\t\t\t=============================================================\n");
    printf("\t\t\t\t|Anda Ingin Mengulang Program Ini?\n");
    printf("\t\t\t\t|1. Ya \n");
    printf("\t\t\t\t|2. Tidak \n");
    cek_valid(&pilihan, "\t\t\t\t|Masukan Pilihan Anda : ");
    if (pilihan == 1){
        main();
    }
    if (pilihan == 2){
        keluar();
    }
    else{
        printf("\t\t\t\t|Pilihan Anda Tidak Ada! Silahkan Pilih Ulang\n");
        ulang();
    }
}

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
    while (1){
        printf(msg);
        if (validInt(var))
        break;
        printf("\t\t\t\t|(Input Anda Salah) Input Hanya Berupa Angka!!!");
        printf("\n");
    }
}

void hitung(char kata[]){
    int i, j;
    int jumlahkarakter;
    int temp, counter = 0;

    FILE *file;
    file = fopen("Kamuskata.txt", "a");
    jumlahkarakter = strlen(kata);
    fprintf(file, "%s(%d)\t\t : ", kata, jumlahkarakter);
    for (i = 0; i < strlen (kata); i++){
        temp = 0;
        for (j = i - 1; j >= 0; j--){
            if (tolower(kata[j]) == tolower(kata[i])){
                temp++;
            }
        }
        if (temp == 0){
            counter++;
        }
        else {
            continue;
        }
    }
    char huruf[counter];
    int jumlahhuruf[counter];
    printf("\t\t\t\t|%s(%d) :", kata, jumlahkarakter);
    for (i = 0; i < strlen(kata); i++){
        kata[i] = tolower(kata[i]);
    }
    for (i = 0; i < strlen(kata); i++){
        counter = 0;
        temp = 0;

        for (j = i - 1; j >= 0; j--){
            if (kata[j] == kata[i]){
                temp++;
            }
        }
        if (temp == 0){
            for (j = i; j <strlen(kata); j++){
                if (kata[j] == kata[i]){
                    temp++;
                }
            }
            huruf[counter] = kata[i];
            jumlahhuruf[counter] = temp;
            printf("%c=%d ",huruf[counter], jumlahhuruf[counter]);
            fprintf(file, "%c=%d ",huruf[counter], jumlahhuruf[counter]);
            counter++;
        }
        else{
            continue;
        }
    }
    fclose(file);
    view(kata);
}

void view(char kata[]){
    FILE *file;
    file = fopen("Kamuskata.txt", "a");
    if (palindrom(kata, strlen(kata)) == 1){
        printf("\t\t = (PALINDROM)");
        fprintf(file, "\t\t = (PALINDROM)\n");
    }
    else {
        printf("\t\t = (BUKAN PALINDROM)");
        fprintf(file, "\t\t = (BUKAN PALINDROM)\n");
    }
    fclose(file);
    ulang();
}

int palindrom(char kata[], int size){
    int i, status = 1;
    for (i = 0; i < size; i++){
        if (kata[i] == kata[size-1 - i]){
            continue;
        }
        else{
            status = 0;
            break;
        }
    }
    return status;
}

void keluar(){
    system("cls");
    printf("\n\t\t\t\t==============================================================\n");
	printf("\t\t\t\t||         TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM KAMI         ||\n");
	printf("\t\t\t\t================================================================\n");
}
