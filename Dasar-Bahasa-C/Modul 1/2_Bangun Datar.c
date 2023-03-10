#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PHI 3.14

void cover();
void header();
void menu();
void refresh();
void segitigaSembarang();
void belahKetupat();
void jajarGenjang();
void trapesium();
void lingkaran();

int main(){
    system("cls");
    cover();
    system("pause");
    menu();
return 0;
}

void header(){
printf("====================================================\n");
printf("=============== Program Bangun Datar ===============\n");
printf("============ Menghitung Luas & Keliling ============\n");
printf("=== Praktikum Algoritma dan Pemrograman Modul I ====\n");
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


double input(){
double pilihan, select; char enter;
pilihan = scanf("%lf%c", &select, &enter);
if (pilihan != 2 || enter != '\n'){
    fflush(stdin);
    printf("Inputan salah, Masukan Angka : ");
    return input();
    }
    else if (select<=0){
    printf("Pilihan Tidak Tersedia, Masukan Pilihan yang Ada : ");
    return input();
    }
    else{
    return select;
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

void menu(){
double pilihan;
int opsi;
system("cls");
header();
printf("=======================================\n");
printf("================= Menu ================\n");
printf("=======================================\n");
printf("===== [1] Segitiga Sembarang =====\n");
printf("===== [2] Belah Ketupat ==========\n");
printf("===== [3] jajar Genjang ==========\n");
printf("===== [4] Trapesium ==============\n");
printf("===== [5] Lingkaran ==============\n");
printf("===== [6] Keluar =================\n");
printf("=======================================\n\n");
printf("Pilihan Anda : ");
pilihan = inputmenu();
opsi = ceil(pilihan);
    if(opsi == pilihan){
        system("cls");
        switch(opsi){
        case 1:
        segitigaSembarang();
        refresh();
        break;
        case 2:
        belahKetupat();
        refresh();
        break;
        case 3:
        jajarGenjang();
        refresh();
        break;
        case 4:
        trapesium();
        refresh();
        break;
        case 5:
        lingkaran();
        refresh();
        break;
        case 6:
        printf("Terima kasih telah menggunakan program kami!");
        exit(1);
        break;
        }
    }
}

double kelilingSegitigaSembarang(double sisi1, double sisi2,
double sisi3){
float keliling;
keliling=sisi1+sisi2+sisi3;
return keliling;
}
double luasSegitigaSembarang(double sisi1, double sisi2, double
sisi3, double keliling){
float bagi_kll,kll,luas;
kll=sisi1+sisi2+sisi3;
bagi_kll = kll/2;
luas = sqrt(bagi_kll*(bagi_kll-sisi1)*(bagi_kll-sisi2)*(bagi_kll-sisi3));
return luas;
}
void segitigaSembarang(){
double sisi1, sisi2, sisi3, keliling, luas;
printf("========================================\n");
printf("========== Segitiga Sembarang ==========\n");
printf("========================================\n\n\n");
printf("\nMasukkan nilai sisi Segitiga \t: \n");
printf("Input sisi pertama (cm)\t: ");
sisi1 = input();
printf("Input sisi kedua (cm)\t: ");
sisi2 = input();
printf("Input sisi ketiga (cm)\t: ");
sisi3 = input();
printf("\n\n=======================================\n");
    printf("\nKeliling Segitiga Sembarang = %.2f cm", kelilingSegitigaSembarang(sisi1,sisi2,sisi3));
printf("\n=======================================\n");
    printf("\nLuas Segitiga Sembarang = %.2f cm2", luasSegitigaSembarang(sisi1,sisi2,sisi3,keliling));
printf("\n=======================================\n");
}

double kelilingBelahKetupat(double sisi){
float keliling;
keliling = 4*sisi;
return keliling;
}
double luasBelahKetupat(double diagonal1, double diagonal2){
float luas;
luas = (0.5*diagonal1*diagonal2);
return luas;
}
void belahKetupat(){
double diagonal1, diagonal2, sisi;
printf("========================================\n");
printf("============= Belah Ketupat=============\n");
printf("========================================\n\n\n");
printf("\nMasukkan nilai diagonal & sisi Belah Ketupat \t: \n");
printf("Input sisi (cm)\t: ");
sisi = input();
printf("Input diagonal pertama (cm)\t: ");
diagonal1 = input();
printf("Input diagonal kedua (cm)\t: ");
diagonal2 = input();
printf("\n\n=======================================\n");
    printf("\nKeliling Belah Ketupat = %.2f cm", kelilingBelahKetupat(sisi));
printf("\n=======================================\n");
    printf("\nLuas Belah Ketupat = %.2f cm2", luasBelahKetupat(diagonal1, diagonal2));
printf("\n=======================================\n");
}

double kelilingJajargenjang(double alas, double miring){
float keliling;
keliling = (2*miring)+(2*alas);
return keliling;
}
double luasJajargenjang(double alas, double tinggi){
float luas;
luas = tinggi*alas;
return luas;
}
void jajarGenjang(){
double alas, tinggi, miring;
printf("=========================================\n");
printf("============= Jajar Genjang =============\n");
printf("=========================================\n\n\n");
printf("\nMasukkan nilai alas, tinggi, dan miring Jajar Genjang \t: \n");
printf("Input alas (cm)\t: ");
alas = input();
printf("Input tinggi (cm)\t: ");
tinggi = input();
printf("Input miring (cm)\t: ");
miring = input();
printf("\n\n=======================================\n");
    printf("\nKeliling Jajar Genjang = %.2f cm", kelilingJajargenjang(alas, miring));
printf("\n=======================================\n");
    printf("\nLuas Jajar Genjang = %.2f cm2", luasJajargenjang(alas, tinggi));
printf("\n=======================================\n");
}

double kelilingTrapesium(double sisiAB, double sisiBC, double sisiCD, double sisiDA){
float keliling;
keliling = sisiAB+sisiBC+sisiCD+sisiDA;
return keliling;
}
double luasTrapesium(double sisiBerhadapan1, double sisiBerhadapan2, double sisiTinggi){
float luas;
luas = 0.5*sisiTinggi*(sisiBerhadapan1+sisiBerhadapan2);
return luas;
}
void trapesium(){
double sisiAB, sisiBC, sisiCD, sisiDA, sisiBerhadapan1, sisiBerhadapan2, sisiTinggi;
printf("=========================================\n");
printf("=============== Trapesium ===============\n");
printf("=========================================\n\n\n");
printf("\nMasukkan nilai sisi-sisi dan tinggi Trapesium \t: \n");
printf("Input sisi AB (cm)\t: ");
sisiAB = input();
printf("Input sisi BC (cm)\t: ");
sisiBC = input();
printf("Input sisi CD (cm)\t: ");
sisiCD = input();
printf("Input sisi DA (cm)\t: ");
sisiDA = input();
printf("Input sisi yang berhadapan 1 (cm)\t: ");
sisiBerhadapan1 = input();
printf("Input sisi yang berhadapan 2 (cm)\t: ");
sisiBerhadapan2 = input();
printf("Input tinggi (cm)\t: ");
sisiTinggi = input();
printf("\n\n=======================================\n");
    printf("\nKeliling Trapesium = %.2f cm", kelilingTrapesium(sisiAB, sisiBC, sisiCD, sisiDA));
printf("\n=======================================\n");
    printf("\nLuas Trapesium = %.2f cm2", luasTrapesium(sisiBerhadapan1, sisiBerhadapan2, sisiTinggi));
printf("\n=======================================\n");
}

double kelilingLingkaran(double jari){
float keliling;
keliling = 2*PHI*jari;
return keliling;
}
double luasLingkaran(double jari){
float luas;
luas = PHI*jari*jari;
return luas;
}
void lingkaran(){
double jari;
printf("=========================================\n");
printf("=============== Lingkaran ===============\n");
printf("=========================================\n\n\n");
printf("\nMasukkan nilai jari-jari Lingkaran \t: \n");
printf("Input jari-jari (cm)\t: ");
jari = input();
printf("\n\n=======================================\n");
    printf("\nKeliling Lingkaran = %.2f cm", kelilingLingkaran(jari));
printf("\n=======================================\n");
    printf("\nLuas Lingkaran = %.2f cm2", luasLingkaran(jari));
printf("\n=======================================\n");
}
