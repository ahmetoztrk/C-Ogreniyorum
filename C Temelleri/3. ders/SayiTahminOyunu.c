#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main() {

srand(time(NULL)); // bir kere çagirmali
int sayi = rand()%100; // 0 ile 100 arasinda rastgele sayi


int tahmin;
int bulundu = 0; // 0-bulunmadi , 1-buundu
int tahminSayisi = 1;

while (bulundu == 0){
	printf("Tahmin giriniz : \n");
	scanf("%d",&tahmin);
	
	if (tahmin == sayi) {
		printf("Tebrikler.. %d denemede buldunuz.. \n",tahminSayisi);
		bulundu = 1;
	}
	else if (tahmin > sayi){
		printf("Daha kucuk bir sayi giriniz.. \n");
		tahminSayisi++;
	}
	else{
		printf("Daha buyuk bir sayi giriniz.. \n");
		tahminSayisi++;
	}
	
}

}   
