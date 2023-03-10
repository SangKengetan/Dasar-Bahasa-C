#include <stdio.h>
#include <stdlib.h>

void cover();
void header();
void refresh();
int i, j;

void header(){
printf("\t\t\t\t====================================================\n");
printf("\t\t\t\t================ Program Statistika ================\n");
printf("\t\t\t\t======== Menghitung Median, Mean, dan Modus ========\n");
printf("\t\t\t\t=== Praktikum Algoritma dan Pemrograman Modul 3 ====\n");
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

//validasi data float
float validFloat(float *var){

	char buff[1024];
	char cek;
	if(fgets(buff, sizeof(buff), stdin) !=NULL){
  		if(sscanf(buff, "%f %c", var, &cek) ==1){
   		return 1;
  		}
 	}
	return 0;
}

//validasi int
int validInt(int *var){
	char buff[1024];
	char cek;

	if(fgets(buff, sizeof(buff), stdin) !=NULL){
  		if(sscanf(buff, "%d %c", var, &cek) ==1){
   		return 1;
  		}
 	}
 	return 0;
}

int input_data(float (*angka)[100], int *jumlah){
	float _angka[100];
	int _jumlah;

	//cek input jumlah data
	fflush(stdin);
	printf("\n\n\t\t\tMasukan jumlah Data	  : ");
	if(validInt(&_jumlah)){
	}
	else{
    printf("\n\n\tInput tidak valid!");
    printf("\n\t\t\t-------------------------------------------------------------\n");;
    sleep(3);
    main();
	}

	*jumlah = _jumlah;

	//input data
	fflush(stdin);
	for(i=0; i<_jumlah; i++){
		printf("\n\t\t\tMasukan nilai dari data ke-%d : ", i+1);
		if(validFloat(&_angka[i])){
		}
		else{
        printf("\n\n\tInput tidak valid!");
        printf("\n\t\t\t-------------------------------------------------------------\n");;
        sleep(3);
        main();
		}

		(*angka)[i]=_angka[i];
	}
	return(0);
}


//fungsi mean/rata-rata
float mean(float (*angka)[100], int jumlah){
	float rata;
	float temp=0;

	for(i=0 ; i<jumlah; i++){
		temp = temp+(*angka)[i];
	}

	rata = temp/jumlah;
	printf("\n\t\tMean\t: %.2f", rata);
	return rata;
}

//fungsi median
float median(float (*angka)[100], int jumlah){
	float tengah;

	if(jumlah%2==0){
		tengah = ((*angka)[(jumlah-1)/2]+(*angka)[((jumlah-1)/2)+1]/2);
		printf("\n\t\tMedian\t: %.2f", tengah);
	}
	else{
		tengah = (*angka)[jumlah/2];
		printf("\n\t\tMedian\t: %.2f", tengah);
	}
	return(0);
}

//fungsi modus
float modus(float (*angka)[100], int jumlah){
	int k=1, l=0, m=0;
	float temp[100], mod[100];

	//menghitung berapa kali muncul tiap angka
	for(i=0 ; i<jumlah ; i++){
		temp[i]=0;
		for(j=0;j<jumlah;j++){
			if((*angka)[i]==(*angka)[j]){
				temp[i]++;
			}
		}
	}

	//menentukan nilai paling sering muncul
	for(i=0 ; i<jumlah ; i++){
		if(temp[i]>k){
			k = temp[i];
		}
	}
	//jika modus lebih dari 1
	for(i=0 ; i<jumlah ; i++){
		if(m==0){
			mod[m]=0;
		}
		else{
			mod[m]=mod[m-1];
		}
		if(temp[i]==k){
			if((*angka)[i]!=mod[m]){
				mod[m] = (*angka)[i];
				m++;
			}
		}
	}
	//jika semua angka muncul sama jumlah
	for(i=0 ; i<jumlah ; i++){
		if(temp[i]==k){
			l++;
		}
	}
	if(l==jumlah){
		m=0;
	}
	if(m==0){
		printf("\n\t\tTidak Ada Modus");
	}
	else{
		for(i=0;i<m;i++){
			printf("\n\t\tModus\t: %.2f", mod[i]);
		}
	}
}

//shorting angka
float urutan(float (*angka)[100], int jumlah){
	float temp=0;
	for(i=0 ; i<(jumlah-1) ; i++){
		for(j=i+1;j<jumlah;j++){
			if((*angka)[i]>(*angka)[j]){
				temp = (*angka)[i];
				(*angka)[i] = (*angka)[j];
				(*angka)[j] = temp;
			}
		}
	}
	printf("\n\tData yang Telah Diurutkan : \n\t");
 	for(i=0; i<jumlah; i++){
  		printf("%.2f ", (*angka)[i]);
 	}
}

float kembali(){
 char ch;
 char *data;
 data= (char *) malloc (sizeof(char));
 int index=0;
 while ((ch=_getch()) !=13) {
    if (ch>='1' && ch<='2'){
        printf("%c", ch);
        data[index]=ch;
        index++;
        }
        else if(ch==8){
            printf("%c", ch);
        data[index]=ch;
        index++;
        }
    }
 data [index]='\0';
 return atof(data);
}

void refresh(){
int reset,choice;
printf("\n\nTekan tombol enter untuk melanjutkan program.");
getchar();
system("cls");
printf("\n Apakah Anda ingin menghitung kembali?\n\n");
printf("(1) Kembali Menghitung \n");
printf("(2) Keluar program\n");
printf("Pilihan : ");
reset = kembali();
choice = reset;
if(choice == reset){
    system("cls");
    switch(choice){
        case 1:
        system("cls");
        main();
        break;
        case 2:
        system("cls");
        printf("\n\n\t\t\t\tTerimakasih telah menggunakan program kami!");
        getchar();
        exit(1);
        break;
        }
    }
}

int main(){
    int jumlah;
	float angka[100];

    system("cls");
    cover();
    system("pause");
    system ("cls");
    header();

//Input-Ouput program
	input_data(&angka, &jumlah);
	urutan(&angka, jumlah);

	printf("\n\n\t------------------------------");
	mean(&angka, jumlah);
	printf("\n\t------------------------------");
	median(&angka, jumlah);
	printf("\n\t------------------------------");
	modus(&angka, jumlah);
	printf("\n\t------------------------------");
	sleep(2);

	refresh();

return 0;
}
