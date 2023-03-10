#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void input_nilai();
void ranking_nilai();
void cek_valid(int *var, char *msg);
void pilih_ulang();
void keluar();


//struct untuk mengelompokkan data
struct mahasiswa{
	char nama[100];
	int quiz;
};

//Validari angka
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
void cek_valid(int *var, char *msg){
	while(1){
		printf(msg);
		if(validInt(var))
			break;
        printf("\n\t\t\t\t\t\tInput tidak valid!\n");
        printf("\t\t\t\t\t------------------------------------\n");
        sleep(15);
	}
}

//Validasi Menu
double inputmenu(){
double pilihan;
char term;
if (term=scanf("%lf%c", &pilihan, &term) != 2 || pilihan<=0 || pilihan>3 || term != '\n'){
    fflush(stdin);
    printf("\n\t\t\t\tInput tidak valid. Masukkan menu yang tersedia!");
    printf("\n\t\t\t-------------------------------------------------------------\n");;
    sleep(15);
    menu();
    return inputmenu();
    }
    else{
    return pilihan;
    }
}

void header(){
printf("\t\t\t\t====================================================\n");
printf("\t\t\t\t=========== Program Nilai Quiz Mahasiswa ===========\n");
printf("\t\t\t\t====== Menyimpan & Mengurutkan Nilai Mahasiswa =====\n");
printf("\t\t\t\t=== Praktikum Algoritma dan Pemrograman Modul 4 ====\n");
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

void menu(){
int pilihan;
system("cls");
header();
printf("\t\t\t\t====================================================\n");
printf("\t\t\t\t|                      Menu                        |\n");
printf("\t\t\t\t====================================================\n");
printf("\t\t\t\t|       [1]     Input Data                         |\n");
printf("\t\t\t\t|       [2]     Ranking Data                       |\n");
printf("\t\t\t\t|       [3]     Keluar                             |\n");
printf("\t\t\t\t====================================================\n\n");
printf("\t\tPilihan Anda [1-3] : ");
pilihan = inputmenu();
    if (pilihan==1){
		input_nilai();
	}
	else if (pilihan==2){
		ranking_nilai();
	}
	else if (pilihan==3){
        system ("cls");
        header();
        printf("\n\n\n");
		printf("\t\t\t\tTerima kasih telah menggunakan program kami!\n\n\n");
        exit(1);
	}
}

void input_nilai(){
	int ulang, panjang, digit=0, i;
	struct mahasiswa nilai_mahasiswa;
	FILE *nilai;
	int pilihan;
	do {
	system("cls");
	printf ("\t\t\t\t---------------------------------------------------------\n");
	printf ("\t\t\t\t||              MENU INPUT NILAI MAHASISWA             ||\n");
	printf ("\t\t\t\t---------------------------------------------------------\n\n");
	printf ("\t\t\t\t||Input Nama Anda :");
    gets(nilai_mahasiswa.nama);
	panjang= strlen(nilai_mahasiswa.nama);
	for (i = 0; i < panjang; i++){
	//cek digit
	if (isdigit(nilai_mahasiswa.nama[i]) !=0) digit++;
	}

	//validasi nama tidak boleh mengandung angka
	if (digit >0){
		printf("\t\t\t\t|| [ERROR]Nama Tidak Boleh Mengandung Angka!\n");
		sleep(2);
		input_nilai();
	}
	fflush(stdin);

	//validasi nama minimal 3 huruf
	if (panjang <=2){
		printf("\t\t\t\t|| [ERROR]Nama Tidak Kurang Dari Tiga Huruf!\n");
		sleep(2);
		input_nilai();
	}
	fflush(stdin);

	cek_valid(&nilai_mahasiswa.quiz, "\t\t\t\t||Input Nilai Anda : ");


	nilai = fopen("asistenin.txt","a");
	fprintf(nilai,"%s\n%d\n", nilai_mahasiswa.nama,
	nilai_mahasiswa.quiz);
	fclose(nilai);

	printf ("\n\n\t\t\t\t---------------------------------------------------------\n");
	printf ("\t\t\t\t||                DATA BERHASIL DISIMPAN               ||\n");
	printf ("\t\t\t\t---------------------------------------------------------\n");

	printf ("\n\t\t\t\t---------------------------------------------------------\n");
	printf ("\n\t\tApakah Anda ingin melakukan operasi ulang?");
	printf ("\n\t\t1. Ya");
	printf ("\n\t\t2. Tidak");
	cek_valid(&ulang, "\n\t\t||Silahkan Pilih Kategori Menu(1-2) : ");
	} while (ulang == 1);
    if (ulang == 2){
		menu();
	}
	else{
		printf ("\n\t||INPUT TIDAK VALID! \n");
		cek_valid(&ulang, "\n\t||Silahkan Pilih Kategori Menu(1-2) : ");
	}

}

void ranking_nilai(){
	char temp [100];
	int ulang;
	int counter = 0, i,j,temp2;
	FILE *nilai;
	system("cls");
	nilai = fopen("asistenin.txt", "r");
	if (nilai!=0){
		while (fgets(temp, 100, nilai)){
			counter++;
			fgets(temp, 100, nilai);
		}
		fclose(nilai);

		struct mahasiswa nilai_mahasiswa[counter];
		nilai = fopen("asistenin.txt", "r");
		for (i=0; i<counter; i++){
			fgets(temp, 100, nilai);
			temp[strcspn(temp, "\n")] = '\0';
			strcpy(nilai_mahasiswa[i].nama, temp);
			fgets(temp, 100, nilai);
			temp[strcspn(temp, "\n")] = '\0';
			nilai_mahasiswa[i].quiz = atoi(temp);
		}
		fclose(nilai);
		for (i=0; i<counter-1; i++){
			for (j=0; j<counter-1-i; j++){
				if (nilai_mahasiswa[j].quiz < nilai_mahasiswa[j+1].quiz){
					strcpy(temp, nilai_mahasiswa[j].nama);
					strcpy(nilai_mahasiswa[j].nama, nilai_mahasiswa[j+1].nama);
					strcpy(nilai_mahasiswa[j+1].nama,temp);
					temp2 = nilai_mahasiswa[j].quiz;
					nilai_mahasiswa[j].quiz = nilai_mahasiswa[j+1].quiz;
					nilai_mahasiswa[j+1].quiz = temp2;
				}
			}
		}
		nilai = fopen("asistenout.txt", "w");
		fprintf(nilai, "Nilai Mata Kuliah Algoritma dan Pemrograman\n\n");
		for (i=0; i<counter; i++){
			fprintf(nilai, "%d. %s %d\n", i+1, nilai_mahasiswa[i].nama, nilai_mahasiswa[i].quiz);
		}
		fclose(nilai);
		header();
		printf ("\n\n\t\t\t\t||PERANKINGAN SUDAH DILAKUKAN \n");
		printf ("\t\t\t\t||[SUKSES] CEK FILE asistenout.txt PADA FOLDER ANDA \n\n\n");
        system ("pause");
        system ("cls");
        menu();
	}
	else{
		fclose(nilai);
		header();
		printf ("\n\n\t\t\t\t||PERANKINGAN GAGAL DILAKUKAN DILAKUKAN \n");
		printf ("\n\t\t\t\t||[WARNING!] FILE BELUM TERSEDIA, SILAHKAN INPUT DATA TERLEBIH DAHULU\n\n\n");
        system ("pause");
        system ("cls");
        input_nilai();
	}
}

int main(){
    system("cls");
    cover();
    system("pause");
    menu();
return 0;
}


