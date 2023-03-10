#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void cover();
void header();
void refresh();

void header(){
printf("\t\t\t\t====================================================\n");
printf("\t\t\t\t=========== Program Menghitung Angsuran ============\n");
printf("\t\t\t\t====== Menghitung Angsuran yang Wajib Dibayar ======\n");
printf("\t\t\t\t=== Praktikum Algoritma dan Pemrograman Modul 2 ====\n");
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
printf("\n\t\t\t\t Apakah Anda ingin menghitung kembali?\n\n");
printf("\t\t\t\t(1) Kembali Menghitung \n");
printf("\t\t\t\t(2) Keluar program\n\n");
printf("\t\t\t\tPilihan : ");
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


double main1(){
double pilihan;
char choice;
if (choice=scanf("%lf%c", &pilihan, &choice) != 2 || pilihan<=0 || choice != '\n'){
    fflush(stdin);

    printf("\n\t\t\t\t\t\tInput tidak valid!\n");
    printf("\t\t\t\t\t------------------------------------\n\n");
    sleep(1);
    printf("\t\t\t\tMasukkan besar Pokok Pinjaman Anda (Rupiah) : ");
    return main1();
    }
    else{
        return pilihan;
    }
}

double main2(){
double pilihan;
char choice;

if (choice=scanf("%lf%c", &pilihan, &choice) != 2 || pilihan<0 || pilihan>100 || choice != '\n'){
    fflush(stdin);

    printf("\n\t\t\t\t\t\tInput tidak valid!\n");
    printf("\t\t\t\t\t------------------------------------\n");
    sleep(1);
    printf("\t\t\t\tMasukkan Persentase Bunga Anda (per tahun) : ");
    return main2();
    }
    else{
        return pilihan;
    }
}

double main3(){
double pilihan;
char choice;

if (choice=scanf("%lf%c", &pilihan, &choice) != 2 || pilihan<=0 || choice != '\n'){
    fflush(stdin);

    printf("\n\t\t\t\t\t\tInput tidak valid!\n");
    printf("\t\t\t\t\t------------------------------------\n");
    sleep(1);
    printf("\t\t\t\tMasukkan Waktu Peminjaman Anda(bulan) : ");
    return main3();
    }
    else{
        return pilihan;
    }
}

int main(){
double pokok_pinjaman,angsuran_pokok,bunga_bulan,total_bunga = 0,total_angsuran = 0, bunga;
int waktu_bulan,i;

//input Pokok Pinjaman

    system("cls");
    cover();
    system("pause");
    system("cls");
    header();
    printf("\t\t\t\tMasukkan besar Pokok Pinjaman Anda (Rupiah) : ");
    pokok_pinjaman = main1();

//input Besar Bunga
    printf("\t\t\t\tMasukkan Persentase Bunga Anda (per tahun) : ");
    bunga = main2();

//input waktu bayar
    printf("\t\t\t\tMasukkan Waktu Peminjaman Anda(bulan) : ");
    waktu_bulan = main3();
system("cls");

//Output
header();
    printf("\t\t\xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc2\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf\n");
    printf("\t\t\xb3  BULAN KE- \xb3      BUNGA (RP)      \xb3  ANGSURAN POKOK (RP) \xb3  ANGSURAN PERBULAN (RP) \xb3\n");
    printf("\t\t\xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");


    bunga = bunga/100;
    angsuran_pokok = pokok_pinjaman/waktu_bulan;
    for(i = 1;i<=waktu_bulan;i++){
        bunga_bulan = (pokok_pinjaman-((i-1)*angsuran_pokok))*(bunga/12);
        total_bunga = total_bunga + bunga_bulan;
        total_angsuran += (angsuran_pokok+bunga_bulan);

        printf("\t\t\xb3     %d      \xb3       Rp. %.2f       \xb3     Rp. %.2f       \xb3       Rp. %.2f        \xb4\n", i, bunga_bulan, angsuran_pokok, angsuran_pokok+bunga_bulan);
        printf("\t\t\xc3\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc5\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xb4\n");
       }
   printf("\t\t\xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc1\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9\n");




    printf("\n\t\t\t ===================================================================\n");
    printf("\t\t\t ||-------------------------------------------------------------------||\n");
    printf("\t\t\t ||                Total Bunga   : Rp %.2f                          \n", total_bunga);
    printf("\t\t\t ||                Total Angsuran: Rp %.2f                          \n", total_angsuran);
    printf("\t\t\t ||-------------------------------------------------------------------||\n");

refresh();

return 0;
}

