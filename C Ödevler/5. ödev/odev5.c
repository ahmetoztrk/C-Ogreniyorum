#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <dos.h>

bool anahtar = false;
main() {
	printf("Komutlar: dogu,bati,kuzey,guney,yemek ye,anahtari al\n\n\n");
	setlocale(LC_ALL,"Turkish");
	system("color 1E");
	baslangic();
}
void baslangic(){
	printf("Do�u y�n�nde b�y�k bir �atonun �n�ndesin. ��eri girmen gerekiyor yoksa pe�indekiler seni yakalayacaklar.\n");
	char komut[15]="";
	printf("Komut giriniz: \n");
	gets(komut);
	printf("Girilen komut: %s\n",komut);
	if(strcmp(komut,"dogu")==0){
		oda1();
	}
	else{
		printf("Ge�ersiz Komut!!!\n");
		printf("Ayn� odada kal�n�yor...");
		sleep(1);
		baslangic();
	}
}
void oda1(){
	system("cls");
	system("color 2E");
	printf("Sonunda i�eridesin. Yemek masas� �zerinden bir �eyler yiyebilirsin.\n");
	char komut[15]="";
	printf("Komut giriniz: \n");
	gets(komut);
	printf("Girilen komut: %s\n",komut);
	if(strcmp(komut,"dogu")==0){
		oda6();
	}
	else if(strcmp(komut,"bati")==0){
		baslangic();
	}
	else if(strcmp(komut,"kuzey")==0){
		oda2();
	}
	else if(strcmp(komut,"guney")==0){
		oda3();
	}
	else if(strcmp(komut,"yemek ye")==0){
		printf("Mmmm... Yemekler lezzetliymi�..\n");
		sleep(1);
		oda1();
	}
	else{
		printf("Ge�ersiz Komut!!!\n");
		printf("Ayn� odada kal�n�yor...");
		sleep(1);
		oda1();
	}
}
void oda2(){
	system("cls");
	system("color 7A");
	printf("Khaleesi'nin Dracarys sesini duymanla beraber ejderha ate�i alt�nda yanarak �ld�n...\n\a");
}
void oda3(){
	system("cls");
	system("color 3D");
	printf("K���k bir odadas�n. Ortada bir yatak var. Yorgunsan dinlenebilirsin.\n");
	char komut[15]="";
	printf("Komut giriniz: \n");
	gets(komut);
	printf("Girilen komut: %s\n",komut);
	if(strcmp(komut,"dogu")==0){
		oda5();
	}
	else if(strcmp(komut,"kuzey")==0){
		oda1();
	}
	else if(strcmp(komut,"guney")==0){
		oda4();
	}
	else if(strcmp(komut,"dinlen")==0){
		printf("Ohhh bee! Ne uyudum ama...\n");
		sleep(1);
		oda3();
	}
	else{
		printf("Ge�ersiz Komut!!!\n");
		printf("Ayn� odada kal�n�yor...");
		sleep(1);
		oda3();
	}
}
void oda4(){
	system("cls");
	system("color 4E");
	printf("T�ssss.... Bir piton y�lan� taraf�ndan s�k�larak �ld�r�ld�n� Bo�ulurken ke�ke C yerine Python mu ��renseydim diye kafandan ge�irdin�\n\a");
}
void oda5(){
	system("cls");
	system("color 9E");
	printf("�ok karanl�k bir odadas�n. Sadece parlayan alt�n bir anahtar var.\n");
	char komut[15]="";
	printf("Komut giriniz: \n");
	gets(komut);
	printf("Girilen komut: %s\n",komut);
	if(strcmp(komut,"bati")==0){
		oda3();
	}
	else if(strcmp(komut,"anahtari al")==0){
		printf("Anahtar� ald�n.\n");
		anahtar = true;
		sleep(1);
		oda5();
	}
	else{
		printf("Ge�ersiz Komut!!!\n");
		printf("Ayn� odada kal�n�yor...");
		sleep(1);
		oda5();
	}
}
void oda6(){
	system("cls");
	system("color 6E");
	printf("Bilgisayar taraf�ndan y�netilen odadas�n. 0 ile 9 aras�nda bir say� tutmu�. �� denemede bulmal�s�n.\n");
	srand(time(NULL));
	int gelenSayi = rand()%9;
	int tahmin;
	int tahminSayisi=0;
	printf("3 tane say� tahmin ediniz: \n");
	while(tahminSayisi<3){
		scanf("%d",&tahmin);
		tahminSayisi++;
	}
		if(tahmin==gelenSayi){
			if(anahtar==true){
				printf("Tebrikler. Do�ru say�y� buldun ve kilitli kap�y� a�arak prensesi kurtard�n...");
			}
			else if(anahtar==false){
				printf("Do�ru say�y� buldun ancak kilitli kap�y� a�acak anahtar yan�nda de�il. Odaya zehirli bir gaz dolmaya ba�lad� ve �ld�n...\a");
			}
		}
		else if(tahmin!=gelenSayi){
			printf("�� denemede bulamad�n. Odaya zehirli bir gaz dolmaya ba�lad� ve �ld�n...\a");
		}
	}
