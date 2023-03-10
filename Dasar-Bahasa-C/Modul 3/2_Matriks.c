#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void penjumlahan();
void perkalian();
void transpose();

int main(){
	int pilihan;
	menu:
	system("cls");
    printf("\t\t\t\t         Praktikum Algoritma dan Pemrograman Modul III       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t================== Program Operasi Matriks ==================\n");
    printf("\t\t\t\t====================== Oleh Kelompok 13 =====================\n");
    printf("\t\t\t\t|                                                           |\n");
    printf("\t\t\t\t|           Pilih menu berikut untuk melanjutkan!           |\n");
    printf("\t\t\t\t|                   1. Penjumlahan Matriks                  |\n");
    printf("\t\t\t\t|                   2. Perkalian Matriks                    |\n");
    printf("\t\t\t\t|                   3. Transpose Matriks                    |\n");
    printf("\t\t\t\t|                   4. Keluar Program                       |\n");
    printf("\t\t\t\t-------------------------------------------------------------\n\n");
    cek_valid(&pilihan, "\t\t\t\t\t\t Masukkan Pilihan Anda: ");
	system("cls");
        switch(pilihan){
        case 1:
            penjumlahan();
            break;
        case 2:
            perkalian();
            break;
        case 3:
            transpose();
            break;
        case 4:
            printf("\n\n\t\t\t\t\t============================================\n");
            printf("\t\t\t\t\tTerima kasih telah menggunakan layanan kami.\n");
            printf("\t\t\t\t\t============================================\n\n\n");
            exit(1);
            break;
        default:
            printf("\n\t\t\t\t\t\t Menu tidak tersedia!\n");
            printf("\n\t\t\t\t Lakukan Input Menu Ulang dengan Pilihan 1-4 !\n");
            sleep(2);
            goto menu;
        }
    }

//validasi input angka
int validInt(int *var){
	char buff[1024];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%d %c", var, &cek) == 1) {
			return 1;
		}
	}
	return 0;
}

void cek_valid(int *var, char *prompt){
	while(1){
		printf(prompt);
		if(validInt(var))
			break;
		printf("\n\t\t\t\t\tInput Khusus Angka! Silakan Input Ulang! \n");

	}
}

//operasi penjumlahan matriks
void penjumlahan(){
    int i,j,m,n,matriks1[10][10], matriks2[10][10], hasil[10][10];

	printf ("\n\t=========================================================\n");
	printf ("\t                    MATRIKS PENJUMLAHAN                  \n");
	printf ("\t=========================================================\n");
	cek_valid(&m,"\tInput Jumlah Baris Matriks : ");
	cek_valid(&n,"\tInput Jumlah Kolom Matriks : ");
	printf("\n\t\t    Penjumlahan Matriks Berordo %dx%d\n", m, n);
	fflush(stdin);
	//mengisi elemen matriks pertama
	printf("\t\----------------------------------------------------------\n");
	printf("\t|           Input Elemen Matriks Pertama [1]             | \n");
    printf("\t\----------------------------------------------------------\n");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf ("\t>> Masukkan elemen matriks [%d][%d]. ",i,j);
			cek_valid(&matriks1[i][j],"Input elemen : ");
		}
	}
	printf ("\n");
	//mengisi elemen matriks kedua
	printf("\n\t|           Input Elemen Matriks Kedua [2]               |\n");
    printf("\t\----------------------------------------------------------\n");
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf ("\t>> Masukkan elemen matriks [%d][%d]. ",i,j);
			cek_valid(&matriks2[i][j],"Input elemen : ");
		}
	}
	printf ("\n");
	//menampilkan elemen matriks pertama
	printf ("\n\t\t\t------------------------\n");
	printf ("\t\t\t==Data Matriks Pertama==\n");
	printf ("\t\t\t------------------------\n");
	for(i = 0; i < m; i++){
	    for(j = 0; j < n; j++){
	    	printf("\t|");
	      	printf (" %d ", matriks1[i][j]);
	      	printf("|");
	    }
	    printf ("\n");
	}
	//menampilkan elemen matriks kedua
	printf ("\n\t\t\t------------------------\n");
	printf ("\t\t\t== Data Matriks Kedua ==\n");
	printf ("\t\t\t------------------------\n");
	for(i = 0; i < m; i++){
	    for(j = 0; j < n; j++){
	    	printf("\t|");
	        printf (" %d ", matriks2[i][j]);
	        printf("|");
	    }
	    printf ("\n");
	}
	//menampilkan hasil penjumlahan matriks 1 dengan matriks 2
	sleep(1);
	printf ("\n\t---------------------------------------------------------\n");
	printf ("\t                Hasil Penjumlahan Matriks                \n");
	printf ("\t---------------------------------------------------------\n");
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			hasil[i][j] = matriks1[i][j] + matriks2 [i][j];
			printf("\t|");
			printf (" %d ", hasil[i][j]);
			printf("|");
		}
		printf ("\n");
	}
	printf ("\n");
	system("pause");
	reset();
}

//operasi perkalian matriks
void perkalian(){
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
	int i, j, k, m, n, p, q, jumlah = 0;

	printf ("\n\t=========================================================\n");
	printf ("\t                     MATRIKS PERKALIAN                   \n");
	printf ("\t=========================================================\n");
	cek_valid(&m,"\t> Input Jumlah Baris Matriks [1] : "); //harus bernilai sama dengan q
	cek_valid(&n,"\t> Input Jumlah Kolom Matriks [1] : "); //harus bernilai sama dengan p
	cek_valid(&p,"\t> Input Jumlah Baris Matriks [2] : ");
	cek_valid(&q,"\t> Input Jumlah Kolom Matriks [2] : ");
	fflush(stdin);

	if(m != q || n != p ){
	    printf("\n\t\t--Matriks tidak dapat dikalikan satu sama lain.--\n");
	} else {
		//mengisi elemen matriks pertama
		printf("\n\t|           Input Elemen Matriks Pertama [1]             | \n");
		printf("\t\----------------------------------------------------------\n");
		for(i = 0; i < m; i++){
	      for(j = 0; j < n; j++){
	      	printf ("\t>> Masukkan elemen matriks [%d][%d]. ",i,j);
			cek_valid(&matriks1[i][j],"Input elemen : ");
	      }
	    }
	    printf ("\n");
	    //mengisi elemen matriks kedua
	    printf("\n\t|           Input Elemen Matriks Kedua [2]              | \n");
	    printf("\t\----------------------------------------------------------\n");
	    for(i = 0; i < p; i++){
	      for(j = 0; j < q; j++){
	        printf ("\t>> Masukkan elemen matriks [%d][%d]. ",i,j);
			cek_valid(&matriks2[i][j],"Input elemen : ");
	      }
	    }
	    //menampilkan elemen matriks pertama
	   printf ("\n\t------------------------\n");
	   printf ("\t==Data Matriks Pertama==\n");
	   printf ("\t------------------------\n");
	    for(i = 0; i < m; i++){
	      for(j = 0; j < n; j++){
	      	printf("\t|");
	      	printf (" %d ", matriks1[i][j]);
	      	printf("|");
	      }
	      printf ("\n");
	    }
	    //menampilkan elemen matriks kedua
	    printf ("\n\t------------------------\n");
	    printf ("\t== Data Matriks Kedua ==\n");
	    printf ("\t------------------------\n");
	    for(i = 0; i < p; i++){
	      for(j = 0; j < q; j++){
	      	printf("\t|");
	        printf (" %d ", matriks2[i][j]);
	        printf("|");
	      }
	      printf ("\n");
	    }

	    //operasi perkalian matriks 1 dengan matriks 2
	    for(i = 0; i < m; i++){
	      for(j = 0; j < q; j++){
	        for(k = 0; k < p; k++){
	          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
	        }
	        hasil[i][j] = jumlah;
	        jumlah = 0;
	      }
	    }
	    //menampilkan hasil perkalian matriks
	    printf ("\n\t---------------------------------------------------------\n");
	    printf ("\t                 Hasil Perkalian Matriks                 \n");
	    printf ("\t---------------------------------------------------------\n");
	    printf("\t\t  Hasil Perkalian adalah Matriks Berordo %dx%d\n", m, q);
	    for(i = 0; i < m; i++){
	      for(j = 0; j < q; j++){
	      	printf("\t|");
	        printf(" %d ", hasil[i][j]);
	        printf("|");
	      }
	      printf("\n");
	    }
	  }
	  system("pause");
	  reset();
}

//transpose matriks
void transpose(){
    int i, j, m, n;
	int matriks[10][10];
	int transpose[10][10];

	printf ("\n\t=========================================================\n");
	printf ("\t                     MATRIKS TRANSPOSE                   \n");
	printf ("\t=========================================================\n");
	cek_valid(&m,"\tInput Jumlah Baris Matriks : ");
	cek_valid(&n,"\tInput Jumlah Kolom Matriks : ");
	fflush(stdin);
	//memasukkan elemen matriks
	printf ("\n");
	printf("\t|                 Masukkan Elemen Matriks               |\n");
	printf("\t\---------------------------------------------------------\n");
	for(i = 0; i < m; i++){
	    for(j = 0; j < n; j++){
	      	printf ("\t>> Masukkan elemen matriks [%d][%d]. ",i,j);
			cek_valid(&matriks[i][j],"Input elemen : ");
		}
	}
	printf ("\n");
	//menampilkan matriks yang diinput
	printf("\n\t\t      == MATRIKS SEBELUM TRANSPOSE ==\n");
	for(i = 0; i < m; i++){
	    for(j = 0; j < n; j++){
	    	printf("\t|");
	      	printf (" %d ", matriks[i][j]);
	      	printf("|");
		}
		printf ("\n");
	}
	//transpose matriks
	for (i = 0; i < m; i ++){
	    for(j = 0; j < n; j++){
	    transpose[j][i] = matriks[i][j];
		}
	}
	printf ("\n");
	//menampilkan hasil transpose matriks
	printf("\n\t\t\t== HASIL TRANSPOSE ==\n");
	for (i = 0; i < n; i ++){
		for(j = 0; j < m; j++){
		printf("\t|");
	    printf(" %d ",transpose[i][j]);
	    printf("|");
	    }
	printf("\n");
	}
	system("pause");
	reset();
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
 		main();
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
