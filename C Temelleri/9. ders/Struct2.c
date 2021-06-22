#include <stdio.h>
#include <stdlib.h>

struct Top{
    char renk[20];
    int fiyat;
};

int main()
{
   struct Top *futbolTopu, basketTopu;
   

   /* futbolTopu Top tipinde bir gösterici */
   futbolTopu = (struct Top*) malloc( sizeof(struct Top) );
   strcpy(futbolTopu->renk, "Mavi"); 
   futbolTopu->fiyat   = 35;
        
   printf("futbolTopu,%s,%d\n", futbolTopu->renk, futbolTopu->fiyat);


   /* basketTopu Top tipinde bir degisken */
   strcpy(basketTopu.renk, "Kirmizi");   
   basketTopu.fiyat   = 55;
   
   
   printf("basketTopu,%s,%d", basketTopu.renk, basketTopu.fiyat);

 return 0;
}
