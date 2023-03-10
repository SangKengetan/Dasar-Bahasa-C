#include <stdio.h>
#include <stdlib.h>


int main ();

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

int main()
 {
    {
    printf("\n\n\n");
    printf("\t\t\t\t          Praktikum Algoritma dan Pemrograman Modul II       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t==============Program Mencari Deretan Fibonacci==============\n");
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
    printf("========Program Mencari Deretan Fibonacci========\n");
    printf("=================================================\n");

    printf("\t1. Fungsi Rekursif\n");
    printf("\t2. Fungsi Iteratif\n");
    printf("\t0. Keluar\n");
    printf("\tMasukan Pilihan Anda(0-2) : \n");
    ulang_plihan:
    UlangValidasiInt(&pil, "\tPilihan Anda : ");
    if(pil>2){
        printf("\tMaaf Input Tidak Ada Dalam Menu!!\n");
        goto ulang_plihan;
    }
    system("cls");

    printf("-------------------------------------------------\n");
    switch(pil)
    {
        case 1 : rekursif();break;
        case 2 : iteratif();break;
        case 0 : printf("Terimakasih telah menggunakan program ini\n");

    }
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

}

void rekursif()
{
    int fibonacci(int number)
{
   if(number == 0){
       return 0;
    }if(number < 2){
    }else{
        return fibonacci(number-1) + fibonacci(number-2);
    }
}

{
    printf("======================================================\n"
           "=====PROGRAM MENAMPILKAN DERET FIBONACCI REKURSIF=====\n"
           "======================================================\n\n");
    int i, count;
    printf("masukan jumlah bilangan : ");
    scanf("%d", &count);
    printf("Deret fibonacci %d bilangan : \n"
            "===============================\n\n",count);
    for(i = 0; i <count; i++){
        printf("%d, ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

}

void iteratif()
{
    int bil_n, N;
    int bil_n1 = 1;
    int bil_n2 = 0;

    printf("======================================================\n"
           "=====PROGRAM MENAMPILKAN DERET FIBONACCI ITERATIF=====\n"
           "======================================================\n\n");
    printf("Masukkan banyak bilangan fibonacci : ");
    scanf("%d",&N);
    printf("\n");
    if(N != 0)
    {
        printf("Deret fibonacci %d bilangan : \n"
               "===============================\n\n",N);
        for(int index = 0 ; index < N ; index++)
        {
            if(index == 0){
                bil_n = bil_n2;
            }
            else if(index == 1){
                bil_n = bil_n1;
            }
            else if(index > 1){
                bil_n = bil_n1 + bil_n2;
                bil_n2 = bil_n1;
                bil_n1 = bil_n;
            }
            if(index == (N-1)){
                printf("%d",bil_n);
            }
            else{
                printf("%d, ",bil_n);
            }
        }
    }
    return(0);
}
