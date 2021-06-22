#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;           /* dosya göstericisi */
    
    char  kitapAd[50];
    char  yazarAd[50];
    int   basimYili;

    fptr = fopen("C:\\temp\\output.txt", "w"); 
    
    
	if(  fptr == NULL )
      puts("output.txt dosyasi acilmadi. !\n"), exit(1);

 
 	  printf("Kitap adi     : "); gets(kitapAd);
 	  printf("Yazar adi     : "); gets(yazarAd);
      printf("Basim Yili: "); scanf("%d",&basimYili);      
     
      printf("\n");

      fprintf(fptr,"%10s %10s %4d\n",kitapAd,yazarAd,basimYili); /* verileri formatli yaz! */
	 

    /* dosyayi kapat */
    fclose(fptr);  

    puts("Bilgiler kaydedildi.\a");
 return 0;
}
