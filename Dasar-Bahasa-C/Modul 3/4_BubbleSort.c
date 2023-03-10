#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

int main (){
    system("cls");
    menuUtama();
return 0;
}

void menuUtama (void){
	int pil, n;
	system("cls");
	printf("\t\t\t\t         Praktikum Algoritma dan Pemrograman Modul III       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t============== Program Pengurutan Bilangan Acak =============\n");
    printf("\t\t\t\t====================== Oleh Kelompok 13 =====================\n");
    printf("\t\t\t\t|                                                           |\n");
    printf("\t\t\t\t|           Pilih menu berikut untuk melanjutkan!           |\n");
    printf("\t\t\t\t|                   1. 1000   Bilangan Acak                 |\n");
    printf("\t\t\t\t|                   2. 16000  Bilangan Acak                 |\n");
    printf("\t\t\t\t|                   3. 64000  Bilangan Acak                 |\n");
    printf("\t\t\t\t|                   4. Keluar Program                       |\n");
    printf("\t\t\t\t-------------------------------------------------------------\n\n");
    printf("\n\t\t\t\t\tMasukkan Pilihan Anda : ");
	pil=ValidInput();
	system("cls");

	if(pil==1){
		n = 1000;
	}else if(pil==2){
		n = 16000;
	}else if(pil==3){
		n = 64000;
	}else if(pil==4){
		printf("\n\n\t\t\t\t\t============================================\n");
        printf("\t\t\t\t\tTerima kasih telah menggunakan layanan kami.\n");
        printf("\t\t\t\t\t============================================\n\n\n");
        exit(1);
	}else{
		printf("\n\t\t\t\t\tPilihan Menu Tidak Tersedia! Lakukan Input Ulang!\n\n");
		system("color4F");
		system("pause");
		menuUtama();
	}
	int array[n];
	IsiArray(array, n);
	metodeSorting(array, n);

}

void IsiArray(int array[], int n){
	int i;
	srand(0);
	for(i=0; i<n ; i++){
		array[i] = rand();
	}
}

//pilihan metode yg diinginkan
void metodeSorting(int array[], int n){
	int pil;
	system("cls");
	printf("\t\t\t=======================================================================\n");
	printf("\t\t\t|                     METODE PENGURUTAN BUBBLE SORT                   |\n");
	printf("\t\t\t=======================================================================\n");
	printf("\n\t\t\t\t\tSilakan Pilih Metode Pengurutan :\n\n");
	printf("\t\t\t\t\t1. Bubble Sort Biasa\n");
	printf("\t\t\t\t\t2. Dengan Pointer\n");
	printf("\t\t\t\t\t3. Kembali ke Menu Utama\n");
	printf("\t\t\t\t\t4. Keluar Program\n");
	printf ("\n\t\t\t\t\tMasukkan Pilihan Anda : ");
	pil=ValidInput();
	system("cls");

	switch(pil){
		case 1:
            HitungBubble(array, n);
            break;
        case 2:
            HitungPointer(array, n);
            break;
        case 3:
            menuUtama();
        case 4:
            printf("\n\n\t\t\t\t\t============================================\n");
            printf("\t\t\t\t\tTerima kasih telah menggunakan layanan kami.\n");
            printf("\t\t\t\t\t============================================\n\n\n");
            getch();
            exit(1);
            break;
		default:
		printf("\n\t\t\t\t\tPilihan Menu Tidak Tersedia! Lakukan Input Ulang!\n\n");
		system("pause");
		metodeSorting(array, n);
		break;
	}
}

//proses mengurutkan dengan bubble sort biasa
void BubbleSortBiasa(int array[], int n){
	int i, j,temp;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void HitungBubble(int array[], int n){
	float waktu;
	printf("\t\t\t=======================================================================\n");
	printf("\t\t\t|                     METODE PENGURUTAN BUBBLE SORT                   |\n");
	printf("\t\t\t|                              CARA BIASA                             |\n");
	printf("\t\t\t=======================================================================\n");
	CetakArrayAwal(array, n);
	BubbleSortBiasa(array, n);
	system("cls");
	printf("\t\t\t=======================================================================\n");
	printf("\t\t\t|                     METODE PENGURUTAN BUBBLE SORT                   |\n");
	printf("\t\t\t|                              CARA BIASA                             |\n");
	printf("\t\t\t=======================================================================\n");
	CetakArray(array, n);
	system("cls");
	Ulang();
}

//proses mengurutkan dengan bubble sort dengan pointer
void BubbleSortPointer(int *array, int n){
	int i,j,temp;
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n-i ; j++){
            if(*(array+j)>*(array+j+1)){
                temp = *(array+j);
                *(array+j) = *(array+j+1);
                *(array+j+1) = temp;
            }
        }
    }
}

void HitungPointer(int array[], int n){
	float waktu;
    printf("\t\t\t=======================================================================\n");
	printf("\t\t\t|                     METODE PENGURUTAN BUBBLE SORT                   |\n");
	printf("\t\t\t|                             DENGAN POINTER                          |\n");
	printf("\t\t\t=======================================================================\n");
	CetakArrayAwal(array, n);
	BubbleSortPointer(array, n);
	system("cls");
	printf("\t\t\t=======================================================================\n");
	printf("\t\t\t|                     METODE PENGURUTAN BUBBLE SORT                   |\n");
	printf("\t\t\t|                             DENGAN POINTER                          |\n");
	printf("\t\t\t=======================================================================\n");
	CetakArray(array, n);
	system("cls");
	Ulang();
}

//menampilkan array bilangan acak
void CetakArrayAwal(int array[], int n){
	int i;
	float waktu;
	printf("\n\n\t\t      ========================== DATA SEBELUM PENGURUTAN ==========================\n\n");
   	clock_t mulai = clock();
	for (i=0; i < n; i++){
		printf("Data Ke %d = %d \n", i+1, array[i]);
   	}
   	clock_t selesai = clock();
	waktu = (float)(selesai - mulai) / CLOCKS_PER_SEC;
   	printf("\nWaktu Yang Dibutuhkan Dalam Proses Tesebut :\n");
    printf("Waktu(detik):%-20.2lf\n\n", waktu);
   	printf("\n");
   	system("pause");
   	getchar();
   	system("cls");
}

//menampilkan array terurut
void CetakArray(int array[], int n){
   	int i;
   	float waktu;
	printf("\n\n\t\t      ========================== DATA SETELAH PENGURUTAN ==========================\n\n");
	clock_t mulai = clock();
   	for (i=0; i < n; i++){
       printf("Data Ke %d = %d \n", i+1, array[i]);
   	}
	clock_t selesai = clock();
	waktu = (float)(selesai - mulai) / CLOCKS_PER_SEC;
   	printf("\nWaktu Yang Dibutuhkan Dalam Proses Tesebut :\n");
    printf("Waktu(detik):%-20.2lf\n\n", waktu);
   	printf("\n");
   	system("pause");
   	getchar();
   	system("cls");
}

//mengulang program
void Ulang(void){
    int reset;
	printf("Silahkan Pilih Menu Berikut :\n\n");
	printf("1. Melanjutkan Program\n");
	printf("2. Mengakhiri Program\n");
	printf("\nMasukan Pilihan anda : ");
	reset=ValidInput();
	system("cls");

    if(reset==1){
        system("cls");
        menuUtama();
    }else if(reset==2){
        system("cls");
        printf("\n\n\t\t\t\t\t============================================\n");
        printf("\t\t\t\t\tTerima kasih telah menggunakan layanan kami.\n");
        printf("\t\t\t\t\t============================================\n\n\n");
        exit(1);
    }else{
    	printf("\nAnda melakukan kesalahan!!! \n\n");
		system("pause");
		system("cls");
        Ulang();
    }
}

int validdes(char s[],int pjg){
    int i=0;
    if(s[0] == '-'){
        i=1;
    }
    for (i=0;i<pjg;i++){
        if (s[i]!='0'&&s[i]!='1'&&s[i]!='2'&&s[i]!='3'&&s[i]!='4'&&s[i]!='5'&&s[i]!='6'&&s[i]!='7'&&s[i]!='8'&&s[i]!='9'){
            printf("\n\t\t\t\t\tInput hanya Bilangan Bulat Positif!\n");
            printf("\t\t\t\t      Masukkan input pengganti: ");
            return 0;
        }
    }
    return 1;
}

//validasi input angka
int ValidInput(){
    char sint[50];
    int panjang, n=0, cek=0;

    while(n<=0){
        while (cek!=1){
            scanf("%s", sint);
            panjang = strlen(sint);
            cek = validdes(sint,panjang);
        }
        n = convert(sint);
        if (n<=0){
            printf("\n\t\t\t\t\tMohon Input Bilangan Bulat Positif!\n");
            printf("\t\t\t\t      Masukkan input pengganti: ");
            cek=0;
        }
    }
    return n;
}

int convert(char s[]){
    int i;      //untuk perulangan for
    int ns;     //variabel nilai sementara
    int hasil=0;//variabel hasil akhir
    int p;      //variabel parameter, untuk membedakan awal mulai di for, kalau negatif dari s[1], sedangkan yg tidak negatif dari s[0]
    int tanda;  //variabel utk membedakan nilai negatif dan positif

    if (s[0] == '-'){
        tanda = -1;
    }
    if(tanda == -1){
        p = 1;//parameter yg negatif
    }else{
        p = 0;//parameter yg positif
    }

    for (i=p; s[i] != '\0'; i++){   //inti dari konversi, konversi hanya mau jika hanya angka saja, itulah fungsi dari variabel p berperan penting
        ns = s[i] - 48;             //nilai karakter dikurang 48
        hasil = hasil * 10 + ns;    //nilai hasil dikali 10 lalu ditambah nilai sementara
    }                               //perulangan terus berlangsung hingga \0 atau null pada ascii, sehingga semua karakter pada string dirubah menjadi integer
    if (tanda == -1){               //untuk yg negatif agar bisa kembali menjadi negatif
        hasil = hasil - (hasil*2);
    }
    return hasil;
}
