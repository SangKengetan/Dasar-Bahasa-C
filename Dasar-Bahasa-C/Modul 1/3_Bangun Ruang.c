#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 const float phi = 3.14;
 int main();
 void tabung();
 void bola();
 void limas();
 void prisma();
 void kerucut();


 int cekvalidasiInt(int *var)
{
    char buff[1020];
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
        printf(prompt);
        if (cekvalidasiInt(var))
            break;
        printf("\tMaaf Hanya Masukan Angka !! \n");
    }
}

float cekvalidasiFlt(float *var)
{
    char buff[1020];
    char cek;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) != NULL)
    {
        if (sscanf(buff, "%f %c", var, &cek) == 1)
        {
            return 1;
        }
    }
    return 0;
}

void ulangValidasiflt(float *var, char *prompt)
{
    while (1)
    {
        printf(prompt);
        if (cekvalidasiFlt(var))
            break;
        printf("\tMaaf Hanya Masukan Angka :3!! \n");
    }
}

 int main ()
 {
    {
    printf("\n\n\n");
    printf("\t\t\t\t           Praktikum Algoritma dan Pemrograman Modul I       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t==Program Menghitung Luas Permukaan dan Volume Bangun Ruang==\n");
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
    int pil,kembali;
    menu:

    printf("=================================================\n");
    printf("=Program Menghitung Luas dan Volume Bangun Ruang=\n");
    printf("=================================================\n");

    printf("\t1. Tabung\n");
    printf("\t2. Bola\n");
    printf("\t3. Limas Segiempat\n");
    printf("\t4. Prisma Segitiga\n");
    printf("\t5. Kerucut\n");
    printf("\t0. Keluar\n");
    printf("\tMasukan Pilihan Anda(0-5) : \n");
    ulang_plihan:
    UlangValidasiInt(&pil, "\tpilihan anda : ");
    if(pil>5){
        printf("\tMaaf Input Tidak Ada Dalam Menu!!\n");
        goto ulang_plihan;
    }
    system("cls");

    printf("-------------------------------------------------\n");
    switch(pil)
    {
        case 1 : tabung();break;
        case 2 : bola();break;
        case 3 : limas();break;
        case 4 : prisma();break;
        case 5 : kerucut();break;
        case 0 : printf("terima kasih telah menggunakan program ini\n");

    }printf("================================================\n");
    printf("\tIngin Melanjutkan Menghitung Bangun Ruang Lain?\n\t1. Ya\n\t2. Tidak\n");
    UlangValidasiInt(&kembali, "\tPilihan Anda : ");
    if(kembali == 1){
        system("cls");
        goto menu;
    }
    printf("================================================\n");

}


void tabung()
{
    int mulai_hitung;

    printf("\t===========Tabung==========\n");
    printf("\t1. Menghitung Volume Tabung\n");
    printf("\t2. Menghitung Luas Permukaan Tabung\n");
    printf("\tPilih Anda Ingin Menghitung Apa : \n");
    ulang_tabung:
    UlangValidasiInt(&mulai_hitung, "\tmasukan pilihan anda : ");

    if (mulai_hitung == 1 ){
        float r,v,t;
        printf("-------------------------------------------------\n");
        printf("\tmenghitung volume tabung\n");
        printf("\tJari-Jari Alas : \n");
        ulangValidasiflt(&r, "\tMasukan Bilangan Anda : ");
        printf("\tTinggi Tabung : \n");
        ulangValidasiflt(&t, "\tMasukan Bilangan Anda : ");
        v = phi*pow(r,2)*t;
        printf("\tVolume Tabung = %.2f\n", v);


    } else if(mulai_hitung == 2 ){
        float r,t,l;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Luas Permukaan Tabung\n");
        printf("\tJari-Jari Alas : \n");
        ulangValidasiflt(&r, "\tMasukan Bilangan Anda : ");
        printf("\tTinggi Tabung : \n");
        ulangValidasiflt(&t, "\tMasukan Bilangan Anda : ");
        l = (2*phi*pow(r,2)+(2*phi*r*t));
        printf("\tLuas Permukaan Tabung = %.2f\n", l);

    }else{
        printf("\tBilangan Anda Tidak Terdapat Dalam Pilihan!!\n");
        goto ulang_tabung;
    }
}

void bola()
{
    int mulai_hitung;

    printf("\t===========Bola==========\n");
    printf("\t1. Menghitung Volume\n");
    printf("\t2. Menghitung Luas Permukaan\n");
    printf("\tPilih Anda Ingin Menghitung Apa : \n");
    ulang_bola:
    UlangValidasiInt(&mulai_hitung, "\tmasukan pilihan anda : ");

    if(mulai_hitung == 1){
        float r,v;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Volume Bola\n");
        printf("\tJari-Jari Bola : \n");
        ulangValidasiflt(&r, "\tMasukan Bilangan Anda : ");
        v = 4*phi*pow(r,3)/3;
        printf("\tVolume Bola = %.2f\n", v);

    }else if(mulai_hitung == 2){
        float r,l;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Luas Permukaan Bola\n");
        printf("\tJari-Jari Bola : \n");
        ulangValidasiflt(&r, "\tMasukan Bilangan Anda : ");
        l = 4*phi*pow(r,2);
        printf("\tLuas Permukaan Bola = %.2f\n", l);
     }else{
        printf("\tBilangan Anda Tidak Terdapat Dalam Pilihan!!\n");
        goto ulang_bola;
    }
}

void limas()
{
    int mulai_hitung;

    printf("\t===========Limas Segiempat==========\n");
    printf("\t1. Menghitung Volume\n");
    printf("\t2. Menghitung Luas Permukaan\n");
    printf("\tPilih Anda Ingin Menghitung Apa : \n");
    ulang_limas:
    UlangValidasiInt(&mulai_hitung, "\tmasukan pilihan anda : ");

    if(mulai_hitung == 1){
        float a,t,v;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Volume Limas Segiempat\n");
        printf("\tLuas Alas : \n");
        ulangValidasiflt(&a, "\tMasukan Bilangan Anda : ");
        printf("\tTinggi Limas : \n");
        ulangValidasiflt(&t, "\tMasukan BIlangan Anda : ");
        v = (a*t)/3;
        printf("\tVolume Limas Segiempat = %f\n", v);

    }else if(mulai_hitung == 2){
        float a,t,s,l;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Luas Permukaan\n");
        printf("\tLuas Alas : \n");
        ulangValidasiflt(&a, "\tMasukan Bilangan Anda : ");
        printf("\tTinggi Limas : \n");
        ulangValidasiflt(&t, "\tMasukan Bilangan Anda : ");
        printf("\tLuas Sisi Tegak : \n");
        ulangValidasiflt(&s, "\tMasukan Bilangan Anda : ");
        l = (a*t)/2 + (3*s);
        printf("\tLuas Permukaan Limas Segiempat = %f\n", l);

     }else{
        printf("\tBilangan Anda Tidak Terdapat Dalam Pilihan!!\n");
        goto ulang_limas;
    }
}

void prisma()
{
    int mulai_hitung;

    printf("\t===========Prisma Segitiga==========\n");
    printf("\t1. Menghitung Volume\n");
    printf("\t2. Menghitung Luas Permukaan\n");
    printf("\tPilih Anda Ingin Menghitung Apa : \n");
    ulang_prisma:
    UlangValidasiInt(&mulai_hitung, "\tmasukan pilihan anda : ");

    if(mulai_hitung == 1){
        float la,t,v;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Volume Prisma Segitiga\n");
        printf("\tLuas Alas : \n");
        ulangValidasiflt(&la, "\tMasukan Bilangan Anda : ");
        printf("\tTinggi Prisma : \n");
        ulangValidasiflt(&t, "\tMasukan Bilangan Anda : ");
        v = (la*t);
        printf("\tVolume Prisma Segitiga = %.2f\n", v);

    }else if(mulai_hitung == 2){
        float la,t,ka,l;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Luas Permukaan Prisma Segitiga\n");
        printf("\tLuas Alas : \n");
        ulangValidasiflt(&la, "\tMasukan Bilangan Anda : ");
        printf("\tTinggi Limas : \n");
        ulangValidasiflt(&t, "\tMasukan Bilangan Anda : ");
        printf("\tKeliling Alas : \n");
        ulangValidasiflt(&ka, "\tMasukan Bilangan Anda : ");
        l = (2*la) + (ka*t);
        printf("\tLuas Permukaan Prisma Segitiga = %.2f\n", l);

     }else{
        printf("\tBilangan Anda Tidak Terdapat Dalam Pilihan!!\n");
        goto ulang_prisma;
    }
}

void kerucut()
{
    int mulai_hitung;

    printf("\t===========Kerucut==========\n");
    printf("\t1. Menghitung Volume\n");
    printf("\t2. Menghitung Luas Permukaan\n");
    printf("\tPilih Anda Ingin Menghitung Apa : \n");
    ulang_kerucut:
    UlangValidasiInt(&mulai_hitung, "\tmasukan pilihan anda : ");

    if(mulai_hitung == 1){
        float r,tk,v;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Volume Kerucut\n");
        printf("\tJari-Jari Kerucut : \n");
        ulangValidasiflt(&r, "\tMasukan Bilangan Anda : ");
        printf("\tTinggi Kerucut : \n");
        ulangValidasiflt(&tk, "\tMasukan Blangan Anda : ");
        v = phi*pow(r,2)*tk/3;
        printf("\tVolume Kerucut = %.2f\n", v);

    }else if(mulai_hitung == 2){
        float r,s,l;
        printf("-------------------------------------------------\n");
        printf("\tMenghitung Luas Permukaan Kerucut\n");
        printf("\tJari-Jari Kerucut : \n");
        ulangValidasiflt(&r, "\tMasukan Bilangan Anda : ");
        printf("\tGaris Pelukis : \n");
        ulangValidasiflt(&s, "\tMasukan Bilangan Anda : ");
        l = phi*r * (r+s);
        printf("\tLuas Permukaan Kerucut = %.2f\n", l);

     }else{
        printf("\tBilangan Anda Tidak Terdapat Dalam Pilihan!!\n");
        goto ulang_kerucut;
    }
}
