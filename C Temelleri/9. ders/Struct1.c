
#include <stdio.h>
struct kayit{
    char model[10];
    int  yil;
	long fiyat;
    
};

int main()
{
   struct kayit araba;   

   printf("Araba Modeli   : "); scanf("%s" , &araba.model);
   printf("Araba yili: "); scanf("%d" ,&araba.yil);
   printf("Araba fiyati  : "); scanf("%ld",&araba.fiyat);
   
   

   printf("\n*** Girilen bilgiler ***");
   printf("\nModel    : %s",araba.model);
   printf("\nYil   : %d ",araba.yil);
   printf("\nfiyat :%d ",araba.fiyat);
   
  
 return 0;
}



