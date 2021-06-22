
#include <stdio.h>

int main()
{
   int *ptam, tam = 33;

   ptam = &tam;    //adres atamasi 

   printf("&tam  = %p\n",&tam);
   printf("ptam  = %p\n",ptam);
   printf("&ptam  = %p\n",&ptam);
   printf("\n");


   printf("tam   = %d\n",tam);
   printf("*ptam = %d\n",*ptam);
   printf("\n");


   *ptam = 44;    // tam = 44 anlaminda 

   printf("*ptam = %d\n",*ptam);
   printf("tam   = %d\n",tam);


 return 0;
}
