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
	printf("Doðu yönünde büyük bir þatonun önündesin. Ýçeri girmen gerekiyor yoksa peþindekiler seni yakalayacaklar.\n");
	char komut[15]="";
	printf("Komut giriniz: \n");
	gets(komut);
	printf("Girilen komut: %s\n",komut);
	if(strcmp(komut,"dogu")==0){
		oda1();
	}
	else{
		printf("Geçersiz Komut!!!\n");
		printf("Ayný odada kalýnýyor...");
		sleep(1);
		baslangic();
	}
}
void oda1(){
	system("cls");
	system("color 2E");
	printf("Sonunda içeridesin. Yemek masasý üzerinden bir þeyler yiyebilirsin.\n");
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
		printf("Mmmm... Yemekler lezzetliymiþ..\n");
		sleep(1);
		oda1();
	}
	else{
		printf("Geçersiz Komut!!!\n");
		printf("Ayný odada kalýnýyor...");
		sleep(1);
		oda1();
	}
}
void oda2(){
	system("cls");
	system("color 7A");
	printf("Khaleesi'nin Dracarys sesini duymanla beraber ejderha ateþi altýnda yanarak öldün...\n\a");
}
void oda3(){
	system("cls");
	system("color 3D");
	printf("Küçük bir odadasýn. Ortada bir yatak var. Yorgunsan dinlenebilirsin.\n");
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
		printf("Geçersiz Komut!!!\n");
		printf("Ayný odada kalýnýyor...");
		sleep(1);
		oda3();
	}
}
void oda4(){
	system("cls");
	system("color 4E");
	printf("Týssss.... Bir piton yýlaný tarafýndan sýkýlarak öldürüldün… Boðulurken keþke C yerine Python mu öðrenseydim diye kafandan geçirdin…\n\a");
}
void oda5(){
	system("cls");
	system("color 9E");
	printf("Çok karanlýk bir odadasýn. Sadece parlayan altýn bir anahtar var.\n");
	char komut[15]="";
	printf("Komut giriniz: \n");
	gets(komut);
	printf("Girilen komut: %s\n",komut);
	if(strcmp(komut,"bati")==0){
		oda3();
	}
	else if(strcmp(komut,"anahtari al")==0){
		printf("Anahtarý aldýn.\n");
		anahtar = true;
		sleep(1);
		oda5();
	}
	else{
		printf("Geçersiz Komut!!!\n");
		printf("Ayný odada kalýnýyor...");
		sleep(1);
		oda5();
	}
}
void oda6(){
	system("cls");
	system("color 6E");
	printf("Bilgisayar tarafýndan yönetilen odadasýn. 0 ile 9 arasýnda bir sayý tutmuþ. Üç denemede bulmalýsýn.\n");
	srand(time(NULL));
	int gelenSayi = rand()%9;
	int tahmin;
	int tahminSayisi=0;
	printf("3 tane sayý tahmin ediniz: \n");
	while(tahminSayisi<3){
		scanf("%d",&tahmin);
		tahminSayisi++;
	}
		if(tahmin==gelenSayi){
			if(anahtar==true){
				printf("Tebrikler. Doðru sayýyý buldun ve kilitli kapýyý açarak prensesi kurtardýn...");
			}
			else if(anahtar==false){
				printf("Doðru sayýyý buldun ancak kilitli kapýyý açacak anahtar yanýnda deðil. Odaya zehirli bir gaz dolmaya baþladý ve öldün...\a");
			}
		}
		else if(tahmin!=gelenSayi){
			printf("Üç denemede bulamadýn. Odaya zehirli bir gaz dolmaya baþladý ve öldün...\a");
		}
	}
