#include <stdio.h>

int main(void) {	
   
   double pi = 3.14;
   int r;
   
   printf("Yaricap giriniz: \n");
   scanf("%d",&r);
   
   double alan = pi*r*r;
   double cevre = 2*pi*r;
   
   printf("Alan:%lf \n",alan);
   printf("Cevre:%lf \n",cevre);
}
