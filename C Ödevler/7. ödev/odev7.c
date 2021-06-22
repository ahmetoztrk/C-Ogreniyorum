#include <stdio.h>
#include <stdlib.h>

struct ogrenci {
	int ogrenciNo;
	char ad[20];
	char soyad[20];
	int vizeNotu;
	int finalNotu;
	int odev_1Notu;
	int odev_2Notu;
	float donemSonuNotu;
	
}ogrenciler[100];

main() {
 	
 	FILE *ogrenciListesi;
 	
 	ogrenciListesi = fopen("D:\\ogrenciListesi.txt", "r");
 	
 	basaDon:
 	
	printf("		MENU		\n\n");
	printf("1) OGRENCI EKLEME\n2) OGRENCI ARAMA (NUMARA ILE)\n3) RAPOR YAZDIR\n");
	
	int secim;
	printf("SECIMINIZ : ");
	scanf("%d",&secim);
	
	
	
	if(secim==1){
		ogrenciListesi = fopen("D:\\ogrenciListesi.txt", "r");
		int i=0;
		while(!feof(ogrenciListesi)){
			fscanf(ogrenciListesi,"%d %s %s %d %d %d %d",&ogrenciler[i].ogrenciNo,&ogrenciler[i].ad,&ogrenciler[i].soyad,&ogrenciler[i].vizeNotu,&ogrenciler[i].finalNotu,&ogrenciler[i].odev_1Notu,&ogrenciler[i].odev_2Notu);
			ogrenciler[i].donemSonuNotu = (((ogrenciler[i].vizeNotu*25)/100)+((ogrenciler[i].finalNotu*40)/100)+((ogrenciler[i].odev_1Notu*15)/100)+((ogrenciler[i].odev_2Notu*20)/100));
			printf("%d %s %s %d %d %d %d %.2f\n",ogrenciler[i].ogrenciNo,ogrenciler[i].ad,ogrenciler[i].soyad,ogrenciler[i].vizeNotu,ogrenciler[i].finalNotu,ogrenciler[i].odev_1Notu,ogrenciler[i].odev_2Notu,ogrenciler[i].donemSonuNotu);
			
			i++;
		}
		fclose(ogrenciListesi);
		
	}
	if(secim==2){
	
		ogrenciListesi = fopen("D:\\ogrenciListesi.txt", "r");
		int i=0;
		while(!feof(ogrenciListesi)){
			fscanf(ogrenciListesi,"%d %s %s %d %d %d %d",&ogrenciler[i].ogrenciNo,&ogrenciler[i].ad,&ogrenciler[i].soyad,&ogrenciler[i].vizeNotu,&ogrenciler[i].finalNotu,&ogrenciler[i].odev_1Notu,&ogrenciler[i].odev_2Notu);
			ogrenciler[i].donemSonuNotu = (((ogrenciler[i].vizeNotu*25)/100)+((ogrenciler[i].finalNotu*40)/100)+((ogrenciler[i].odev_1Notu*15)/100)+((ogrenciler[i].odev_2Notu*20)/100));
		fclose(ogrenciListesi);
		int girilenNo;
		printf("ARANACAK OGRENCI NUMARASINI GIRINIZ : ");
		scanf("%d",&girilenNo);
		system("CLS");
		
		for(int i=0; ogrenciler[i].ogrenciNo != '\0'; i++){
			if(girilenNo==ogrenciler[i].ogrenciNo){
				printf("OGRENCININ NUMARASI : %d\n",ogrenciler[i].ogrenciNo);
				printf("OGRENCININ ADI : %s\n",ogrenciler[i].ad);
				printf("OGRENCININ SOYADI : %s\n",ogrenciler[i].soyad);
				printf("OGRENCININ VIZE SONUCU : %d\n",ogrenciler[i].vizeNotu);
				printf("OGRENCININ FINAL SONUCU : %d\n",ogrenciler[i].finalNotu);
				printf("OGRENCININ ODEV1 SONUCU : %d\n",ogrenciler[i].odev_1Notu);
				printf("OGRENCININ ODEV2 SONUCU : %d\n",ogrenciler[i].odev_2Notu);
				printf("OGRENCININ DONEM SONU NOTU : %.2f\n",ogrenciler[i].donemSonuNotu);
				
				sleep(2);
				system("CLS");
				
				printf("ANA MENUYE DONMEK ICIN 'M' TUSUNA BASINIZ.");
					secim = getchar();
					while((secim=='M')||(secim=='m')){
						goto basaDon;
						}
				if(girilenNo!=ogrenciler[i].ogrenciNo){
					printf("KAYIT BULUNAMADI\nANA MENUYE DONMEK ICIN 'M' TUSUNA BASINIZ.");
					secim = getchar();
					while((secim=='M')||(secim=='m')){
						goto basaDon;
						}
						
				}
						
			}
			
			
		}
	
	}
	
}
	if(secim==3){
		FILE *dersRaporu;
		dersRaporu = fopen("D:\\DersRaporu.txt","w");
		ogrenciListesi = fopen("D:\\ogrenciListesi.txt", "r");
		int i=0;
		float toplamVizeNotu=0, toplamFinalNotu=0, toplamOdev1Notu=0, toplamOdev2Notu=0, toplamDonemSonuNotu=0;
		while(!feof(ogrenciListesi)){
			fscanf(ogrenciListesi,"%d %s %s %d %d %d %d",&ogrenciler[i].ogrenciNo,&ogrenciler[i].ad,&ogrenciler[i].soyad,&ogrenciler[i].vizeNotu,&ogrenciler[i].finalNotu,&ogrenciler[i].odev_1Notu,&ogrenciler[i].odev_2Notu);
			ogrenciler[i].donemSonuNotu = (((ogrenciler[i].vizeNotu*25)/100)+((ogrenciler[i].finalNotu*40)/100)+((ogrenciler[i].odev_1Notu*15)/100)+((ogrenciler[i].odev_2Notu*20)/100));
		for(int i=0;i<100;i++){
			toplamVizeNotu += ogrenciler[i].vizeNotu;
			toplamFinalNotu += ogrenciler[i].finalNotu;
			toplamOdev1Notu += ogrenciler[i].odev_1Notu;
			toplamOdev2Notu += ogrenciler[i].odev_2Notu;
			toplamDonemSonuNotu += ogrenciler[i].donemSonuNotu;
			
		}
	}
	fclose(ogrenciListesi);
	//fprintf(dersRaporu,"Toplam Ogrenci Sayisi : 83\nVize Ortalamasi : 48.63\nFinal Ortalamasi : 57.34\nOdev1 Ortalamasi : 86.59\nOdev2 Ortalamasi : 58.73\nDonem Sonu Not Oratalamasi : 59.83");
	
		fprintf(dersRaporu,"Toplam Ogrenci Sayisi : 83\n");
		fprintf(dersRaporu,"Vize Ortalamasi : %.2f\n",toplamVizeNotu/83);
		fprintf(dersRaporu,"Final Ortalamasi : %.2f\n",toplamFinalNotu/83);
		fprintf(dersRaporu,"Odev1 Ortalamasi : %.2f\n",toplamOdev1Notu/83);
		fprintf(dersRaporu,"Odev2 Ortalamasi : %.2f\n",toplamOdev2Notu/83);
		fprintf(dersRaporu,"Donem Sonu Not Ortalamasi : %.2f\n",toplamDonemSonuNotu/83);
		
	fclose(dersRaporu);

}
}




