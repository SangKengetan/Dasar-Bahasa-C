#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cek_validasi(int *var, char *prompt);
void pilih_ulang();
void sorting();
void cetak_arr(int arr[], int n);
void salin_arr(int asal[], int target[], int n);
void searching();
void bil_rand(int arr[], int n);
void insertion_sort(int array[], int n);
void bubble_sort(int array[], int n);
void quick_sort(int array[], int low, int high);
double sequential_search(int array[], int n, int cari_angka);
double binary_search(int array[], int low, int high, int cari_angka);
int pivot(int array[], int low, int high);
void jalan_keluar();

// main menu
int main(){
    system ("cls");
    int menu;
    printf("\t\t\t\t==============================================================\n");
    printf("\t\t\t\t          Praktikum Algoritma dan Pemrograman Modul III       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t==============Program Sorting Deretan Searching==============\n");
    printf("\t\t\t\t====================== Oleh Kelompok 13 =====================\n");
    printf("\t\t\t\t==============================================================\n");
    printf("\t\t\t\t|                      ANGGOTA KELOMPOK:                     |\n");
    printf("\t\t\t\t|>>> I Made Widya Prajna Dharmajati           |  2205551080  |\n");
    printf("\t\t\t\t|>>> Sultan Alifatur Rozak                    |  2205551094  |\n");
    printf("\t\t\t\t|>>> I Komang Indra Pramana                   |  2205551095  |\n");
    printf("\t\t\t\t|>>> Sinta Purnama Dewi                       |  2205551100  |\n");
    printf("\t\t\t\t|>>> I Putu Fardeen Bagas Mahottama           |  2205551112  |\n");
    printf("\t\t\t\t|>>> Sang Kompiang Raynor Prabandana Kengetan |  2205551113  |\n");
    printf("\t\t\t\t==============================================================\n");
    printf("\t\t\t\t|>>> NO |  Pilihan Program Yang Anda Inginkan             <<<|\n");
    printf("\t\t\t\t|>>> 1  |  Program Sorting                                <<<|\n");
    printf("\t\t\t\t|>>> 2  |  Program Searching                              <<<|\n");
    printf("\t\t\t\t|>>> 0  |  Keluar                                         <<<|\n");
    printf("\t\t\t\t==============================================================\n");
    cek_validasi(&menu, "\t\t\t\tSilahkan Pilih Menu (0-2) : ");

    if(menu==1){
        sorting();
    }
    else if(menu==2){
        searching();
    }
    else if(menu==0){
        jalan_keluar();
    }
    else{
        printf("\n\t\t\t\t Pilihan Anda Salah! Silahkan Klik (Enter Untuk Kembali Ke menu) \n");
        system ("pause");
        system ("cls");
        main();
    }
}

//menu untuk mengulang program
void pilih_ulang (){
	int ulang;
	pilihan:
	printf("\t\t\t\t==============================================================\n");
	printf ("\n\t\t\t\tApakah Anda ingin melakukan operasi ulang?");
	printf ("\n\t\t\t\t1. Ya");
	printf ("\n\t\t\t\t2. Tidak");
    printf("\n\t\t\t\t==============================================================\n");
	cek_validasi(&ulang, "\n\t\t\t\t\t||Silahkan Pilih Kategori Menu(1-2) : ");
	if (ulang == 1){
		main();
	}
	else if (ulang == 2){
		jalan_keluar();
	}
	else{
		printf ("\n\t||Kategori Menu Tidak Ada! Silahkan Input Ulang \n");
		system ("pause");
		system ("cls");
		pilih_ulang();
	}
}

//mengechek validasi inputan
int validInt(int *var){
	char buff[1020];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%d %c", var, &cek) == 1)
        {
			return 1;
		}
	}
	return 0;
}

void cek_validasi(int *var, char *prompt){
    while(1){
        printf(prompt);
        if (validInt(var));
        break;
        printf("\t Input Hanya Berupa Angka!!");
        printf("\n");
    }
}



//Sorting Menu
void sorting(){
    clock_t start, end;
    double waktu1;
    double waktu2;
    double waktu3;
    int data;

    int menua;
    printf("\t\t\t\t==============================================================\n");
    printf("\t\t\t\t|>>> NO |  Pilihan Data                                   <<<|\n");
    printf("\t\t\t\t|>>> 1  |  1000 Data                                      <<<|\n");
    printf("\t\t\t\t|>>> 2  |  16000 Data                                     <<<|\n");
    printf("\t\t\t\t|>>> 3  |  64000 Data                                     <<<|\n");
    printf("\t\t\t\t|>>> 0  |  Keluar                                         <<<|\n");
    printf("\t\t\t\t==============================================================\n");
    cek_validasi(&menua, "\t\t\t\tMasukan Pilihan  Data (0-3) : ");

    if (menua == 1){
        data = 1000;
    }
    else if (menua == 2){
        data = 16000;
    }
    else if (menua == 3){
        data = 64000;
    }
    else if (menua == 0){
        jalan_keluar();
    }
    else {
        printf ("\n\t\t\t\t Pilihan Anda Salah Klik ENTER!!!\n");
        system ("pause");
        system ("cls");
        sorting();
    }

    int arr1[data];
    int arr2[data];
    int arr3[data];

    bil_rand(arr1, data);
    printf("\n");
	printf("\t\t\t\t==============================================================\n");
	printf ("\t\t\t\t||Array [%d] Random Sebelum di Sorting\n", data);
	cetak_arr(arr1, data);
	salin_arr(arr1, arr2, data);
	salin_arr(arr1, arr3, data);

    start = clock();
    insertion_sort(arr1, data);
	end = clock();
	waktu1 = (double)(end-start) / CLOCKS_PER_SEC;

    start = clock();
	bubble_sort(arr2, data);
	end = clock();
	waktu2 = (double)(end-start) / CLOCKS_PER_SEC;

    start = clock();
	quick_sort(arr3, 0, data-1);
	waktu3 = (double)(end-start) / CLOCKS_PER_SEC;

    printf("\n");
    printf("\t\t\t\t==============================================================\n");
    printf ("\t||[%d] Angka Setelah di Sorting\n", data);
	cetak_arr(arr1, data);

    printf("\n");
    printf("\t\t\t\t==============================================================\n");
	printf ("\t\t\t\t||                    HASIL WAKTU PERHITUNGAN                ||\n");
	printf("\t\t\t\t==============================================================\n");
	printf ("\n\t\t\t\t||Waktu Perhitungan [INSERTION SORT] = %f Millisecond", waktu1);
	printf ("\n\t\t\t\t||Waktu Perhitungan [BUBBLE SORT] = %f Millisecond", waktu2);
	printf ("\n\t\t\t\t||Waktu Perhitungan [QUICK SORT] = %f Millisecond\n", waktu3);

    if (waktu1 == waktu2 && waktu1 == waktu3){
		printf("\n\t\t\t\t==============================================================\n");
		printf ("\t\t\t\t||                WAKTU PERHITUNGAN SETARA                ||\n");
		printf("\t\t\t\t==============================================================\n");
	}
	else if (waktu1 == waktu2){
		printf("\n\t\t\t\t==============================================================\n");
		printf ("\t\t\t\t||    WAKTU PERHITUNGAN INSERTION & BUBBLE SORT SETARA      ||\n");
		printf("\t\t\t\t==============================================================\n");
	}
	else if (waktu1 == waktu3){
		printf("\t\t\t\t==============================================================\n");
		printf ("\t\t\t\t||     WAKTU PERHITUNGAN INSERTION & QUICK SORT SETARA     ||\n");
		printf("\t\t\t\t==============================================================\n");
	}
	else if (waktu2 == waktu3){
		printf("\t\t\t\t==============================================================\n");
		printf ("\t\t\t\t||      WAKTU PERHITUNGAN BUBBLE & QUICK SORT SETARA       ||\n");
		printf("\t\t\t\t==============================================================\n");
	}
	else if (waktu1 <= waktu2 && waktu1 <= waktu3){
		printf("\t\t\t\t==============================================================\n");
		printf ("\t\t\t\t||      WAKTU PERHITUNGAN INSERTION SORT PALING CEPAT      ||\n");
		printf("\t\t\t\t==============================================================\n");
	}
	else if (waktu2 <= waktu1 && waktu2 <= waktu3){
		printf("\t\t\t\t==============================================================\n");
		printf ("\t\t\t\t||        WAKTU PERHITUNGAN BUBBLE SORT PALING CEPAT       ||\n");
		printf("\t\t\t\t==============================================================\n");
	}
	else if (waktu3 <= waktu1 && waktu3 <= waktu2){
		printf("\t\t\t\t==============================================================\n");
		printf ("\t\t\t\t||         WAKTU PERHITUNGAN QUICK SORT PALING CEPAT       ||\n");
		printf("\t\t\t\t==============================================================\n");
	}
	pilih_ulang();
}

void cetak_arr(int arr[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("\n\t||Angka Ke-[%d] = [%d]", i + 1, arr[i]);
	}
}

void salin_arr(int asal[], int target[], int n){
	int i;
	for (i = 0; i < n; i++)
	target[i]=asal[i];
}

//searching menu
void searching(){
    clock_t start, end;
    double waktu1;
    double waktu2;
    int data, cari_angka;

    int menub;
    printf("\t\t\t\t==============================================================\n");
    printf("\t\t\t\t|>>> NO |  Pilihan Data                                   <<<|\n");
    printf("\t\t\t\t|>>> 1  |  1000 Data                                      <<<|\n");
    printf("\t\t\t\t|>>> 2  |  16000 Data                                     <<<|\n");
    printf("\t\t\t\t|>>> 3  |  64000 Data                                     <<<|\n");
    printf("\t\t\t\t|>>> 0  |  Keluar                                         <<<|\n");
    printf("\t\t\t\t==============================================================\n");
    cek_validasi(&menub, "\t\t\t\tMasukan Pilihan  Data (0-3) : ");

    if (menub == 1){
        data = 1000;
    }
    else if (menub == 2){
        data = 16000;
    }
    else if (menub == 3){
        data = 64000;
    }
    else if (menub == 0){
        jalan_keluar();
    }
    else {
        printf ("\n\t\t\t\tPilihan Anda Salah KLiik ENTER!!!\n");
        system ("pause");
        system ("cls");
        searching();
    }
    int arr[data];
	int arr2[data];
	bil_rand(arr, data);
	cek_validasi(&cari_angka, "\t\t\t\t||Silahkan Inputkan Angka Yang Ingin Dicari : ");
	angka_masuk:
		if (cari_angka < 0){
			printf ("\t\t\t\t||Input Salah! Hanya Menerima Inputan Angka Positif");
			goto angka_masuk;
		}
		insertion_sort(arr, data);
		waktu1 = sequential_search(arr, data, cari_angka);
		waktu2 = binary_search(arr, 0, data-1, cari_angka);
		printf("\n");
		printf("\t\t\t\t==============================================================\n");
		printf ("\t\t\t\t||                 HASIL WAKTU PERHITUNGAN                 ||\n");
		printf("\t\t\t\t==============================================================\n");
		printf ("\t\t\t\t||Waktu Perhitungan [SEQUENTIAL SEARCH] = %f Millisecond", waktu1);
		printf ("\n\t\t\t\t||Waktu Perhitungan [BINARY SEARCH] = %f Millisecond", waktu2);

		if (waktu1 < waktu2){
			printf("\n\t\t\t\t==============================================================\n");
			printf ("\t\t\t\t\t||       WAKTU PERHITUNGAN SEQUENTIAL SEARCH TERCEPAT      ||\n");
			printf("\t\t\t\t==============================================================\n");
		}
		else if (waktu1 > waktu2){
			printf("\n\t\t\t\t==============================================================\n");
			printf ("\t\t\t\t||         WAKTU PERHITUNGAN BINARY SEARCH TERCEPAT        ||\n");
			printf("\t\t\t\t==============================================================\n");
		}
		else if (waktu1 == waktu2){
			printf("\n\t\t\t\t==============================================================\n");
			printf ("\t\t\t\t||                 WAKTU PERHITUNGAN SETARA                ||\n");
			printf("\t\t\t\t==============================================================\n");
		}
		pilih_ulang();
}

void bil_rand(int arr[], int n){
	int i;
	srand(0);
	for (i = 0; i < n; i++){
		arr[i] = rand();
	}

}

void insertion_sort(int array[], int n){
	int i;
	int j;
	int key;
	for ( i =1; i < n; i++){
		key = array[i];
		j= i-1;
	while (j >= 0 && array[j] > key){
		array[j+1] = array[j];
		j--;
	}
	array[j+1] = key;
	}
}


void bubble_sort(int array[], int n){
	int i;
	int j;
	int temp;
	for (i =0; i < n - 1; i++){
		for (j =0; j < n - i - 1; j++){
			if (array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j + 1] = temp;
			}
		}
	}
}

void quick_sort(int array[], int low, int high){
	int p = pivot(array, low, high);
	if (low < high){
		quick_sort(array, low, p-1);
		quick_sort(array, p+1, high);
	}
}

double sequential_search(int array[], int n, int cari_angka)
{
	clock_t start, end;
	double waktu;
	int i;
	int counter = 0;
	start = clock();
	for (i =0; i < n; i++){
		if (array[i] == cari_angka){
			counter++;
		}
		printf("\t||Angka Ke-[%d] = [%d]", i+1, array[i]);
		printf("\n");
	}
	end = clock();
	waktu = (double)(end-start) / CLOCKS_PER_SEC;
	if (counter == 0){
		printf ("\n\t\t\t\t---------------------------------------------------------\n");
		printf ("\t\t\t\t||        MENCARI DENGAN METODE SEQUENTIAL SEARCH      ||\n");
		printf ("\t\t\t\t||ANGKA [%d] TIDAK DITEMUKAN DALAM ARRAY\n", cari_angka);
		printf ("\t\t\t\t---------------------------------------------------------\n");
	}
	else{
		int indexCariAngka[counter];
		counter = 0;
		for (i = 0; i < n; i++){
			if (array[i] == cari_angka){
				indexCariAngka[counter] = i;
				counter++;
			}
		}
		printf ("\n\t\t\t\t---------------------------------------------------------\n");
		printf ("\t\t\t\t||        MENCARI DENGAN METODE SEQUENTIAL SEARCH      ||\n");
		printf ("\t\t\t\t||ANGKA DITEMUKAN DALAM INDEXS KE-");
		for (i = 0; i < counter; i++){
			if (i == 0 && i == counter - 1){
				printf ("[%d]", indexCariAngka[i]+1);
			}
			else{
				if (i == counter - 1){
					printf ("dan [%d]", indexCariAngka[i]+1);
				}
				else{
					printf ("[%d]", indexCariAngka[i]+1);
				}
            }
        }
        printf ("\n\t\t\t\t---------------------------------------------------------\n");
    }
	return waktu;
}

double binary_search(int array[], int low, int high, int cari_angka){
	clock_t start, end;
	double waktu;
	int i;
	int counter = 0;
	start = clock();
	while( low <= high){
		int tengah = low + (high-low) / 2;
		if (array[tengah] == cari_angka){
			counter++;
			for ( i = tengah + 1; i < high + 1 && array[i] == cari_angka; i++){
				counter++;
			}
			for ( i = tengah - 1; i < high + 1 && array[i] == cari_angka; i++){
				counter++;
			}
			break;
		}
		else if (array[tengah] > cari_angka){
			high = tengah - 1;
		}
		else{
			low = tengah + 1;
		}
	}
	end=clock();
	waktu = (double)(end-start) / CLOCKS_PER_SEC;
	if (counter == 0){
		printf ("\n\t\t\t\t---------------------------------------------------------\n");
		printf ("\t\t\t\t||          MENCARI DENGAN METODE BINARY SEARCH        ||\n");
		printf ("\t\t\t\t||ANGKA [%d] TIDAK DITEMUKAN DALAM ARRAY\n", cari_angka);
		printf ("\t\t\t\t---------------------------------------------------------\n");
	}
	else{
		int indexCariAngka[counter];
		counter = 0;
		while( low <= high){
			int tengah = low + (high - low) /2;
			if (array[tengah] == cari_angka){
				indexCariAngka[counter] = tengah;
				counter++;
				for ( i = tengah + 1; i < high + 1 && array[i] == cari_angka; i++){
					indexCariAngka[counter] = i;
					counter++;
				}
				for (i = tengah - 1; i > 0 && array[i] == cari_angka; i--){
					indexCariAngka[counter] = i;
					counter++;
				}
				break;
			}
			else if (array[tengah] > cari_angka){
				high = tengah - 1;
			}
			else{
				low = tengah + 1;
			}
		}
		printf ("\n\t\t\t\t---------------------------------------------------------\n");
		printf ("\t\t\t\t||        MENCARI DENGAN METODE BINARY SEARCH          ||\n");
		printf ("\t\t\t\t||ANGKA DITEMUKAN DALAM INDEXS KE-");
		insertion_sort(indexCariAngka, counter);
		for (i = 0; i < counter; i++){
			if (i == 0 && i == counter - 1){
				printf ("[%d]", indexCariAngka[i]+1);
			}
			else{
				if (i == counter - 1){
					printf ("dan [%d]", indexCariAngka[i]+1);
				}
				else{
					printf ("[%d]", indexCariAngka[i]+1);
				}
				}
		}
		printf ("\n\t\t\t\t---------------------------------------------------------\n");
	}
	return waktu;
}

int pivot(int array[], int low, int high){
	int p = array[high];
	int temp;
	int i = (low - 1);
	int j;
	for (j = low; j <= high - 1; j++){
		if (array[j] <= p){
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	temp = array[i+1];
	array[i+1]= array[high];
	array[high]=temp;
	return (i+1);
}

void jalan_keluar(){
	//system("cls");
	printf("\t\t\t\t==============================================================\n");
	printf("\t\t\t\t||                        TERIMAKASIH                       ||\n");
	printf("\t\t\t\t==============================================================\n");
	//system("exit");
}
