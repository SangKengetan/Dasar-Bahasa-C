#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void cover();
void header();
void menu();
void refresh();
void biner();
void desimal();

int main(){
    system("cls");
    cover();
    system("pause");
    menu();
return 0;
}

void header(){
printf("====================================================\n");
printf("======== Program Konversi Desimal dan Biner ========\n");
printf("=========== Mengkonversi Desimal & Biner ===========\n");
printf("=== Praktikum Algoritma dan Pemrograman Modul 2 ====\n");
printf("=================== Kelompok 13 ====================\n");
printf("====================================================\n\n\n");
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
       menu();
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

double inputmenu(){
double pilihan;
char term;
if (term=scanf("%lf%c", &pilihan, &term) != 2 || pilihan<=0 || pilihan>6 || term != '\n'){
    fflush(stdin);
    printf("\n\t\t\t\tInput tidak valid. Masukkan menu yang tersedia!");
    printf("\n\t\t\t-------------------------------------------------------------\n");;
    sleep(2);
    menu();
    return inputmenu();
    }
    else{

    return pilihan;
    }
}

double input1(){
double pilihan, select; char enter;
pilihan = scanf("%lf%c", &select, &enter);
if (pilihan != 2 || enter != '\n'){
    fflush(stdin);
    printf("Inputan salah, Masukan Angka : ");
    return input1();
    }
    else if (select<=0){

    printf("Pilihan Tidak Tersedia, Masukan Pilihan yang Ada : ");
    return input1();
    }
    else{
    return select;
    }
}

float input2(){
 char ch;
 char *data;
 data= (char *) malloc (sizeof(char));
 int index=0;
 while ((ch=_getch()) !=13) {
    if (ch>='0' && ch<='1'){
        printf("%c", ch);
        data[index]=ch;
        index++;
        }
        else if(ch==8){
            printf("%c", ch);
        data[index]=ch;
        index++;
        }
    }
 data [index]='\0';
 return atof(data);
}

void menu(){
double pilihan;
int opsi;
system("cls");
header();
printf("==================================================\n");
printf("====================== Menu ======================\n");
printf("==================================================\n");
printf("===== [1] Bilangan Desimal ke Bilangan Biner =====\n");
printf("===== [2] Bilangan Biner ke Bilangan Desimal =====\n");
printf("===== [3] Keluar =================================\n");
printf("=======================================\n\n");
printf("Pilihan Anda : ");
pilihan = inputmenu();
opsi = ceil(pilihan);
    if(opsi == pilihan){
        system("cls");
        switch(opsi){
        case 1:
        biner();
        refresh();
        break;
        case 2:
        desimal();
        refresh();
        break;
        case 3:
        printf("Terima kasih telah menggunakan program kami!");
        exit(1);
        break;
        }
    }
}

void biner(){
int bin, rem, num, place;
printf("\t\t\t\t|------------------------------------------------------------|\n");
printf("\t\t\t\t|-----------------BILANGAN DESIMAL KE BINER------------------|\n");
printf("\t\t\t\t|============================================================|\n");
printf("\t\t\t\t--------------------------------------------------------------\n");

bin = 0; rem = 0; place = 1;
    printf ("\t\t\t\t\nMasukkan Bilangan Desimal Anda: ");
    num = input1();
    printf("\nHasil Bilangan Biner dari Bilangan Desimal Anda: ");
    while (num){
        rem   = num % 2;
        num   = num / 2;
        bin   = bin + (rem * place);
        place = place * 10;
    }
    printf("%d\n", bin);
}



void desimal(){
long num;
int dec, rem, place;
printf("\t\t\t\t|------------------------------------------------------------|\n");
printf("\t\t\t\t|-----------------BILANGAN BINER KE DESIMAL------------------|\n");
printf("\t\t\t\t|============================================================|\n");
printf("\t\t\t\t--------------------------------------------------------------\n");

dec = 0; rem = 0; place = 0;
printf("\t\t\t\t\nMasukkan Bilangan Biner Anda: \n");
num = input2();
printf("\nHasil Bilangan Desimal dari Bilangan Biner Anda : ");
    while (num){
        rem = num % 10;
        if (rem){
            dec = dec + (pow ( 2, place) );
        }
        num = num / 10;
        place++;
    }
    printf("%d\n", dec);
return 0;
}

