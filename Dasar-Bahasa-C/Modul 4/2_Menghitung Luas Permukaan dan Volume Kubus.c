#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct kubusStruct{
    int sisi_struct;
    int lp_struct;
    int v_struct;
}kbs_s;

typedef union kubusUnion{
    int sisi_union;
    int lp_union;
    int v_union;
}kbs_u;

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
        printf("\tMaaf input hanya berupa angka!! \n");
    }
}

int main(i)
{
    kbs_s kubus1;
    kbs_u kubus2;

    {
    printf("\n\n\n");
    printf("\t\t\t\t          Praktikum Algoritma dan Pemrograman Modul IV       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t======Program Menghitung Luas Permukaan Dan Volume Kubus=====\n");
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
    int kembali;
    menu:
    printf("===============================================================\n");
    printf("========Program Mencari Volume dan luas Permukaan kubus========\n");
    printf("===============Dengan Tipe Data Union dan Struct===============\n");
    printf("===============================================================\n");
    UlangValidasiInt(&i, "Masukan angka Sisi Kubus : ");

    kubus1.sisi_struct = i;
    kubus1.lp_struct = 6 * pow(kubus1.sisi_struct, 2);
    kubus1.v_struct = pow(kubus1.sisi_struct, 3);

    printf("=================================================\n");
    printf("=            HASIL PERHITUNGAN STRUCT           =\n");
    printf("=================================================\n");
    printf("sisi kubus : %d\n", kubus1.sisi_struct);
    printf("luas permukaan kubus : %d\n", kubus1.lp_struct);
    printf("volume kubus : %d\n", kubus1.v_struct);

    printf("=================================================\n");
    printf("=             HASIL PERHITUNGAN UNION           =\n");
    printf("=================================================\n");
    kubus2.sisi_union = i;
    printf("sisi kubus : %d\n", kubus2.sisi_union);
    kubus2.lp_union = 6 * pow(kubus2.sisi_union, 2);
    printf("luas permukaan kubus : %d\n", kubus2.lp_union);
    kubus2.sisi_union = i;
    kubus2.v_union = pow(kubus2.sisi_union, 3);
    printf("volume kubus : %d\n\n", kubus2.v_union);

    printf("Ukuran Memory Pada Kubus Struct : %d\n", sizeof(kubus1));
    printf("Ukuran Memory Pada Kubus Union : %d\n", sizeof(kubus2));

    printf("\n================================================\n");
    printf("\tIngin Menghitung Lagi?\n\t1. Ya\n\t2. Tidak\n");
    UlangValidasiInt(&kembali, "\tPilihan Anda : ");
    if(kembali == 1){
        system("cls");
        goto menu;
    }
    if(kembali == 2){
        system("cls");
    }
    printf("=================================================\n");
    printf("====Terimakasih telah menggunakan program ini====\n");
    printf("=================================================\n");


    return 0;
}
