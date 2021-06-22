#include<stdio.h>

struct Calisan {
	char isim[10];
	int maas;
	struct iletisimBilgisi {
		char email[20];
		char telefon[20];
	} iletisim;
};



void main() {
	struct Calisan calisanlar[3];
	int i;
	for(i = 0; i < 3; i++) {
		printf("\n%d. Calisan kaydi\n", i+1);
		printf("\nCalisan adi:");
		scanf("%s", calisanlar[i].isim);
		printf("\nCalisan maasi:");
		scanf("%d", &calisanlar[i].maas);
		printf("\nCalisan email:");
		scanf("%s", &calisanlar[i].iletisim.email);
		printf("\nCalisan telefon:");
		scanf("%s", &calisanlar[i].iletisim.telefon);
	}
	printf("\nCalisanlar listesi:\n");
	for(i = 0; i < 3; i++) {
		printf("\nCalisan adi-maasi-email-telefon: %s-%d-%s-%s", calisanlar[i].isim,calisanlar[i].maas,calisanlar[i].iletisim.email,calisanlar[i].iletisim.telefon);
	}
}