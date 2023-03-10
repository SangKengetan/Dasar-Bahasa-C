#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cover();
void menu();
void refresh ();
void rekursifHanoi();
void iteratifHanoi();

int main(){
    system("cls");
    cover();
    system("pause");
    menu();
return 0;
}

void cover(){
    printf("\n\n\n");
    printf("\t\t\t\t          Praktikum Algoritma dan Pemrograman Modul II       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t==================== Program Menara Hanoi ===================\n");
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

//mengulang program sekaligus validasi
void reset(){
 	char ulangi;
 	system("cls");
 	printf("\n\n\n\n");
 	printf("\n\t\t\t\t\t    Ingin Kembali ke Menu Utama? (y / t): ");
 	ulangi = getch();

 	if (ulangi == 'y' || ulangi == 'Y'){
		system("cls");
 		menu();
 	}else if (ulangi == 't' || ulangi == 'T'){
 	    printf("\n\n\n\n");
        printf("\t\t\t\t\t============================================\n");
        printf("\t\t\t\t\tTerima kasih telah menggunakan layanan kami.\n");
        printf("\t\t\t\t\t============================================\n\n\n");
 		exit(1);
 	}else{
 		printf("\n\n\t\t\t\t\tInput Invalid! Masukkan ulang pilihan Anda!\n");
 		sleep(1);
 		system("cls");
 		reset();
 	}
}

//validasi input hanoi
int inputHanoi(){
    int nilai;
    char term;
if (term=scanf("%i%c", &nilai, &term) != 2 || term != '\n' || nilai <= 0) {
        fflush(stdin);
        printf("\n\t\t\t\tInput invalid! Mohon input bilangan bulat positif!");
        printf("\n\t\t\t-------------------------------------------------------------\n");
        printf("\n\t\t\t\t    Masukan jumlah cakram yang diinginkan : ");
        return inputHanoi();
        }
        else {
        return nilai;
        }
}

//validasi inputmenu
double inputmenu(){
double pilihan;
char term;
if (term=scanf("%lf%c", &pilihan, &term) != 2 || pilihan<=0 || pilihan>3 || term != '\n'){
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
    printf("\t\t\t\t\t          Program Menara Hanoi        \n");
    printf("\t\t\t\t\t====================================\n\n");
    printf("\t\t\t\t\tPilih menu berikut untuk melanjutkan!\n");
    printf("\t\t\t\t\t1. Menara Hanoi Rekursif\n");
    printf("\t\t\t\t\t2. Menara Hanoi Iteratif\n");
    printf("\t\t\t\t\t3. Keluar Program\n\n");
    printf("\t\t\t\t\tMenu pilihan Anda: ");
    menu = inputmenu();
    opsi = ceil(menu);
    if(opsi == menu){
        system("cls");
        switch(opsi){
        case 1:
            rekursifhanoi();
            break;
        case 2:
            iteratifhanoi();
            break;
        case 3:
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

void hitungHanoi(int n, int a,int b,int c) {
 if (n==1) {
  printf("\t\t\t\t| Pindahkan cakram paling atas dari tiang %c ke tiang %c |\n", a, c);
 } else {
        hitungHanoi(n-1,a,c,b);
        hitungHanoi(1,a,b,c);
        hitungHanoi(n-1,b,a,c);
 }
}
void rekursifhanoi() {
 int jumlah; //jumlah cakram
 char x, y, z; //tiang
 char ulang;
 int langkah;
rekursif:
 printf("\n\t\t\t\t\t==================================\n");
 printf("\t\t\t\t\t      PROGRAM HANOI REKURSIF      \n");
 printf("\t\t\t\t\t==================================\n");
 printf("\n\t\t\t\t    Masukan jumlah cakram yang diinginkan : ");
 jumlah = inputHanoi();
 system("cls");

 langkah = (1<<jumlah)-1;
 printf("\n\t\t\t\tLangkah minimum untuk memindahkan %d cakram yaitu : %d\n\n", jumlah, langkah);
 printf("\t\t\t\t\t    Langkah-langkah pemindahan cakram : ");
 printf("\n\t\t\t\t--------------------------------------------------------\n");
 hitungHanoi(jumlah, '1', '2', '3');
 system("pause");

refresh:
system("cls");

printf("\n\n\n\n");
 printf("\n\t\t\t\t\t    Ingin Menggunakan Kembali? (y / t): ");
 ulang = getch();
 	if (ulang == 'y' || ulang == 'Y'){
		system("cls");
		goto rekursif;
 	}else if (ulang == 't' || ulang == 'T'){
 	    reset();
 	}else{
 		printf("\n\n\t\t\t\t\tInput Invalid! Masukkan ulang pilihan Anda!\n");
 		sleep(1);
 		goto refresh;
 	}
}

void iteratifhanoi() {
 int jumlah; //jumlah cakram
 int i; //perulangan
 int langkah;
 char ulang;
 char tiang[3];
 tiang[0]='1';
 tiang[1]='2';
 tiang[2]='3';

iteratif:
 printf("\n\t\t\t\t\t==================================\n");
 printf("\t\t\t\t\t      PROGRAM HANOI ITERATIF      \n");
 printf("\t\t\t\t\t==================================\n");
 printf("\n\t\t\t\t    Masukan jumlah cakram yang diinginkan : ");
 jumlah=inputHanoi();
 system("cls");

 langkah=(1<<jumlah)-1;
  //output hasil
 printf("\n\t\t\t\tLangkah minimum untuk memindahkan %d cakram yaitu : %d\n\n", jumlah, langkah);
 printf("\t\t\t\t\t    Langkah-langkah pemindahan cakram : ");
 printf("\n\t\t\t\t--------------------------------------------------------\n");
    if (jumlah%2==0){
        tiang[1] = '3';
        tiang[2] = '2';
    }
    for(i = 1; i <=langkah; i++){
        printf("\t\t\t\t| Pindahkan cakram paling atas dari tiang %c ke tiang %c |\n", tiang[(i&i-1)%3], tiang[((i|i-1)+1)%3]);
    }
    system("pause");

refresh:
system("cls");

printf("\n\n\n\n");
 printf("\n\t\t\t\t\t    Ingin Menggunakan Kembali? (y / t): ");
 ulang = getch();
 	if (ulang == 'y' || ulang == 'Y'){
		system("cls");
		goto iteratif;
 	}else if (ulang == 't' || ulang == 'T'){
 	    reset();
 	}else{
 		printf("\n\n\t\t\t\t\tInput Invalid! Masukkan ulang pilihan Anda!\n");
 		sleep(1);
 		goto refresh;
 	}
}
