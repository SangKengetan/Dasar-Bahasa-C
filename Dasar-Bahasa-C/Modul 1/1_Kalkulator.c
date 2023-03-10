#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cover();
void menu();
void refresh ();
void penjumlahan();
void pengurangan();
void perkalian();
void pembagian();
void modulus();

int main(){
    system("cls");
    cover();
    system("pause");
    menu();
return 0;
}

void cover(){
    printf("\n\n\n");
    printf("\t\t\t\t           Praktikum Algoritma dan Pemrograman Modul I       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t===================== Program Kalkulator ====================\n");
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
menu();
}

double kembali(){
double pilihan;
char choice;
if (choice=scanf("%lf%c", &pilihan, &choice) != 2 || pilihan<=0 || pilihan>2 || choice != '\n'){
    fflush(stdin);
    printf("\n\t\t\t\t\t\tInput tidak valid!\n");
    printf("\t\t\t\t\t------------------------------------\n");
    printf("\t\t\t\t\tMasukkan kembali format yang sesuai: ");
    return kembali();
    }
    else{
        return pilihan;
    }
return kembali();
}

void refresh(){
double ulang;
system ("cls");

printf("\n\n\t\t\t\t\t\tIngin kembali ke menu?\n");
printf("\t\t\t\t\t\t(1) Kembali Menghitung\n");
printf("\t\t\t\t\t\t(2) Keluar program\n");
printf("\t\t\t\t\t\tPilihan : ");

ulang = kembali();
    if(ulang==1){
        system("cls");
        menu();
        }
        else if (ulang==2) {
        system("cls");
        printf("\n\n\t\t\t\t\t============================================\n");
        printf("\t\t\t\t\tTerima kasih telah menggunakan layanan kami.\n");
        printf("\t\t\t\t\t============================================\n\n\n");
        exit(1);
        }
        else {
        kembali();
        }
return refresh();
}

double input(){
double pilihan;
char term;
if (term=scanf("%lf%c", &pilihan, &term) != 2 || term != '\n'){
    fflush(stdin);
    printf("\t\t    Input tidak valid.  Masukkan kembali bilangan: ");
    return input();
    }
    else{

    return pilihan;
    }
}

double inputmenu(){
double pilihan;
char term;
if (term=scanf("%lf%c", &pilihan, &term) != 2 || pilihan<=0 || pilihan>6 || term != '\n'){
    fflush(stdin);
    printf("\n\t\t\t\tInput tidak valid. Masukkan menu yang tersedia!");
    printf("\n\t\t\t-------------------------------------------------------------\n");
    printf("\t\t\t\t\tMenu pilihan Anda: ");
    return inputmenu();
    }
    else{

    return pilihan;
    }
}

void menu(){
double menu;
int opsi;
system("cls");
    printf("\n\t\t\t\t\t====================================\n");
    printf("\t\t\t\t\t        Program Kalkulator          \n");
    printf("\t\t\t\t\t====================================\n\n");
    printf("\t\t\t\t\tPilih menu berikut untuk melanjutkan!\n");
    printf("\t\t\t\t\t1. Penjumlahan\n");
    printf("\t\t\t\t\t2. Pengurangan\n");
    printf("\t\t\t\t\t3. Perkalian\n");
    printf("\t\t\t\t\t4. Pembagian\n");
    printf("\t\t\t\t\t5. Modulus\n");
    printf("\t\t\t\t\t6. Keluar Program\n\n");
    printf("\t\t\t\t\tMenu pilihan Anda: ");
    menu = inputmenu();
    opsi = ceil(menu);
    if(opsi == menu){
        system("cls");
        switch(opsi){
        case 1:
            penjumlahan();
            refresh();
            break;
        case 2:
            pengurangan();
            refresh();
            break;
        case 3:
            perkalian();
            refresh();
            break;
        case 4:
            pembagian();
            refresh();
            break;
        case 5:
            modulus();
            refresh();
            break;
        case 6:
            printf("\n\n\t\t\t\t\t============================================\n");
            printf("\t\t\t\t\tTerima kasih telah menggunakan layanan kami.\n");
            printf("\t\t\t\t\t============================================\n\n\n");
            exit(1);
            break;
        }
    }
    else{
       fflush(stdin);
       inputmenu();
    }
}

double hasilpenjumlahan(double tambah1, double tambah2){
    float hasil;
    hasil = tambah1+tambah2;
    return hasil;
}
void penjumlahan(){
    double tambah1, tambah2, hasil;
    system ("cls");
    printf("\n\t\t\t\t\t====================================\n");
    printf("\t\t\t\t\t            PENJUMLAHAN             \n");
    printf("\t\t\t\t\t====================================\n");
    printf("\n\t\t\t\t\tMasukan bilangan pertama : ");
    tambah1 = input ();
    printf("\t\t\t\t\tMasukan bilangan kedua   : ");
    tambah2 = input ();
    printf("\t\t\t\t\t------------------------------------ +\n");
    printf("\t\t\t\t\tHasil\t\t\t = %.2f\n\n", hasilpenjumlahan(tambah1, tambah2));
    system ("pause");
}

double hasilpengurangan(double kurang1, double kurang2){
    float hasil;
    hasil=kurang1-kurang2;
return hasil;
}

void pengurangan(){
    double kurang1, kurang2, hasil;
    system ("cls");
    printf("\n\t\t\t\t\t====================================\n");
    printf("\t\t\t\t\t            PENGURANGAN             \n");
    printf("\t\t\t\t\t====================================\n");
    printf("\n\t\t\t\t\tMasukan bilangan pertama : ");
    kurang1 = input ();
    printf("\t\t\t\t\tMasukan bilangan kedua   : ");
    kurang2 = input ();
    printf("\t\t\t\t\t------------------------------------ -\n");
    printf("\t\t\t\t\tHasil\t\t\t = %.2f\n\n", hasilpengurangan(kurang1, kurang2));
    system ("pause");
}

double hasilperkalian (double kali1, double kali2){
    float hasil;
    hasil=kali1*kali2;
return hasil;
}

void perkalian(){
    double kali1, kali2, hasil;
    system ("cls");
    printf("\n\t\t\t\t\t====================================\n");
    printf("\t\t\t\t\t              PERKALIAN             \n");
    printf("\t\t\t\t\t====================================\n");
    printf("\n\t\t\t\t\tMasukan bilangan pertama : ");
    kali1 = input ();
    printf("\t\t\t\t\tMasukan bilangan kedua   : ");
    kali2 = input ();
    printf("\t\t\t\t\t------------------------------------ x\n");
    printf("\t\t\t\t\tHasil\t\t\t = %.2f\n\n", hasilperkalian(kali1, kali2));
    system ("pause");
}

double hasilpembagian(double bagi1, double bagi2){
    float hasilbagi;
    hasilbagi=bagi1/bagi2;
return hasilbagi;
}

void pembagian(){
    double bagi1, bagi2, hasilbagi;
    system ("cls");
    printf("\n\t\t\t\t\t====================================\n");
    printf("\t\t\t\t\t              PEMBAGIAN             \n");
    printf("\t\t\t\t\t====================================\n");
    printf("\n\t\t\t\t\tMasukan bilangan pertama : ");
    bagi1 = input ();
    printf("\t\t\t\t\tMasukan bilangan kedua   : ");
    bagi2 = input ();
    if (bagi2 == 0){
        system ("color 4F");
        printf("\t\t\t\t\t------------------------------------ :\n");
        printf("\t\t\t\t\tHasil\t\t\t = Bilangan tidak terdefinisikan.\n\n");
    }
    else{
        printf("\t\t\t\t\t------------------------------------ :\n");
        printf("\t\t\t\t\tHasil\t\t\t = %.2f\n", hasilpembagian(bagi1, bagi2));
    }
    system ("pause");
}

int hasilmodulus(int mod_a, int mod_b){
    int hasil;
    hasil=mod_a%mod_b;
return hasil;
}

void modulus(){
    int mod_a, mod_b, hasil;
    system ("cls");
    printf("\n\t\t\t\t\t====================================\n");
    printf("\t\t\t\t\t               MODULUS              \n");
    printf("\t\t\t\t\t====================================\n");
    printf("\n\t\t\t\t\tMasukan bilangan pertama : ");
    mod_a = input();
    printf("\t\t\t\t\tMasukan bilangan kedua   : ");
    mod_b = input ();
    if (mod_b == 0){
        system ("color 4F");
        printf("\t\t\t\t\t------------------------------------ mod\n");
        printf("\t\t\t\t\tHasil\t\t\t = Bilangan tidak terdefinisikan.\n\n");
    }
    else{
        printf("\t\t\t\t\t------------------------------------ mod\n");
        printf("\t\t\t\t\tHasil\t\t\t = %d\n", hasilmodulus(mod_a, mod_b));
    }
    system ("pause");
}
