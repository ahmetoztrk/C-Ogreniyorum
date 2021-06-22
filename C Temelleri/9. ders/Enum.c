#include <stdio.h>
enum bolumler{
   bilgisayar   = 1,  	/* 1 */
   elektrik,          	/* 2 */ 
   makine,          	/* 3 */
   gida,	            /* 4 */
   cevre                /* 5 */
} bolum;

int main()
{
   
   
   
    bolum = makine;

    printf("bolum : %d\n",bolum);

    bolum += 2;  /* bolum = cevre */

    printf("Yeni bolum : %d\n",bolum);

 return 0;
}
