#include <stdio.h>
#include <stdlib.h>


main (){
	char topCesidi = {'B','F','V'};
	double yukseklik;
	int sekmeSayisi = 0;
	double mesafe = 0;
	printf("Top Seciniz: \n");
	scanf("%c",&topCesidi);
	printf("Secilen top: %c\n",topCesidi);
	printf("Yukseklik giriniz: \n");
	scanf("%lf",&yukseklik);
	printf("Girilen yukseklik: %lf\n",yukseklik);
	
	//0.1m = 10cm
	if(topCesidi == 'B'){
		for(yukseklik; 0.1 <= yukseklik; yukseklik = yukseklik*0.7){
			sekmeSayisi++;
			mesafe = mesafe + yukseklik*1.7;
		}
	}
	else if(topCesidi == 'F'){
		for(yukseklik; 0.1 <= yukseklik; yukseklik = yukseklik*0.75){
			sekmeSayisi++;
			mesafe = mesafe + yukseklik*1.75;
		}
	}
	else if(topCesidi == 'V'){
		for(yukseklik; 0.1 <= yukseklik; yukseklik = yukseklik*0.9){
			sekmeSayisi++;
			mesafe = mesafe + yukseklik*1.9;
		}
	}
	printf("Mesafe: %lf\n",mesafe);
	printf("Sekme Sayisi: %d\n",sekmeSayisi);
}
