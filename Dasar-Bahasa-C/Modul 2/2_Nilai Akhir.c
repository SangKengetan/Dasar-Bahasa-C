#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cover(){
    printf("\n\n\n");
    printf("\t\t\t\t          Praktikum Algoritma dan Pemrograman Modul II       \n");
    printf("\t\t\t\t=============================================================\n");
    printf("\t\t\t\t=============== Program Penentuan Nilai Akhir ===============\n");
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
}

void header(){
	printf("\n\t\t\t\t\t====================================\n");
 	printf("\t\t\t\t\t    Program Penentuan Nilai Akhir  \n");
 	printf("\t\t\t\t\t====================================\n");
}

void akhir(){
	printf("\n\n\n\n");
    printf("\t\t\t\t    ============================================\n");
    printf("\t\t\t\t    Terima kasih telah menggunakan layanan kami.\n");
    printf("\t\t\t\t    ============================================\n\n\n");
    exit(1);
}

//validasi khusus absensi
double input_absen(){
int absen;
char term;
if (term=scanf("%d%c", &absen, &term) != 2 || term != '\n' || absen > 15 || absen < 0){
    fflush(stdin);
    system("cls");
    printf("\n\t\t\t\tJumlah kehadiran tidak valid! Mohon input angka 0-15.\n");
    header();
    printf("\n\t\t\t\t\tMasukkan jumlah kehadiran [0-15]: ");
    return input_absen();
    }
    else{
    return absen;
    }
}

//validasi input nilai tugas, quiz, ujian
double invalid(){
int nilai;
char term;
if (term=scanf("%d%c", &nilai, &term) != 2 || term != '\n' || nilai > 100 || nilai < 0){
    fflush(stdin);
    printf("\n\t\t\t\t\tInput Invalid! Mohon Input Nilai 0-100.");
    printf("\n\t\t\t\t\t    Masukkan kembali nilai : ");
    sleep(1);
    return invalid();
    }
    else{
    return nilai;
    }
}

//untuk ngulang sekalian validasi
void reset(){
 	int ulangi;
 	system("cls");
 	header();
 	printf("\n\t\t\t\t\t    Ingin mengulangi? (y / t): ");
 	ulangi = getch();

 	if (ulangi == 'y' || ulangi == 'Y'){
		system("cls");
 		main();
 	}else if (ulangi == 't' || ulangi == 'T'){
 		akhir();
 		return;
 	}else{
 		printf("\n\n\t\t\t\t\tInput Invalid! Masukkan ulang pilihan Anda!\n");
 		sleep(1);
 		system("cls");
 		reset();
 	}
}

int main(){
    int absensi;
	float persen_absensi;

	int tugas1, tugas2, tugas3;
	float persen_tugas;

	int nQuiz, nUts, nUas;
	float persen_quiz, persen_uts, persen_uas, nilai_angka;
	char nilai_huruf[5];

    cover();
    system("cls");

//input absensi
        system("cls");
		header();
 		printf("\n\t\t\t\t\tMasukkan jumlah kehadiran [0-15]: ");
 		absensi = input_absen();
 		system("cls");
 		persen_absensi = absensi * 0.05;

//input nilai tugas
        header();
 		printf("\n\t\t\t\t\t    Masukkan Nilai Tugas 1 : ");
 		tugas1 = invalid();
 		printf("\n\t\t\t\t\t    Masukkan Nilai Tugas 2 : ");
 		tugas2 = invalid();
 		printf("\n\t\t\t\t\t    Masukkan Nilai Tugas 3 : ");
 		tugas3 = invalid();
 		system("cls");
 		persen_tugas = ((tugas1 + tugas2 + tugas3) / 3) * 0.2;

 //input nilai ujian
        header();
 		printf("\n\t\t\t\t\t    Masukkan Nilai Quiz    : ");
 		nQuiz = invalid();
	persen_quiz = nQuiz * 0.15;

 		printf("\n\t\t\t\t\t    Masukkan Nilai UTS     : ");
 		nUts = invalid();
	persen_uts = nUts * 0.3;

 		printf("\n\t\t\t\t\t    Masukkan Nilai UAS     : ");
 		nUas = invalid();
	persen_uas = nUas * 0.3;

	system("cls");
    header();
    nilai_angka = persen_absensi + persen_tugas + persen_quiz + persen_uts + persen_uas;

	printf("\n\t\t\t\t\t     Jumlah Kehadiran Anda = %d", absensi);
	printf("\n\t\t\t\t\t     Nilai Tugas 1 Anda    = %d", tugas1);
	printf("\n\t\t\t\t\t     Nilai Tugas 2 Anda    = %d", tugas2);
	printf("\n\t\t\t\t\t     Nilai Tugas 3 Anda    = %d", tugas3);
	printf("\n\t\t\t\t\t     Nilai Quiz Anda       = %d", nQuiz);
	printf("\n\t\t\t\t\t     Nilai UTS Anda        = %d", nUts);
	printf("\n\t\t\t\t\t     Nilai UAS Anda        = %d", nUas);
	printf("\n\t\t\t\t----------------------------------------------------\n");
	printf("\n\t\t\t\t\t       Nilai Akhir Anda = %2.f\n", nilai_angka);

 	if (nilai_angka >= 80 && nilai_angka < 100){
 		printf("\n\t\t\t\t\t   Sehingga Nilai Huruf Anda = A\n", nilai_huruf);

 	}else if (nilai_angka >= 75 && nilai_angka < 80){
 		printf("\n\t\t\t\t\t   Sehingga Nilai Huruf Anda = B+\n", nilai_huruf);

 	}else if (nilai_angka >= 65 && nilai_angka < 75){
 		printf("\n\t\t\t\t\t   Sehingga Nilai Huruf Anda = B\n", nilai_huruf);

 	}else if (nilai_angka >= 60 && nilai_angka < 65){
 		printf("\n\t\t\t\t\t   Sehingga Nilai Huruf Anda = C+\n", nilai_huruf);

 	}else if (nilai_angka >= 55 && nilai_angka < 60){
 		printf("\n\t\t\t\t\t   Sehingga Nilai Huruf Anda = C\n", nilai_huruf);

	}else if (nilai_angka >= 50 && nilai_angka < 55){
 		printf("\n\t\t\t\t\t   Sehingga Nilai Huruf Anda = D+\n", nilai_huruf);

	}else if (nilai_angka >= 45 && nilai_angka < 50){
 		printf("\n\t\t\t\t\t   Sehingga Nilai Huruf Anda = D\n", nilai_huruf);

	}else if(nilai_angka >= 0 && nilai_angka < 45){
 		printf("\n\t\t\t\t\t   Sehingga Nilai Huruf Anda = E\n", nilai_huruf);
 	}

system("pause");
reset();
 	return 0;
}
