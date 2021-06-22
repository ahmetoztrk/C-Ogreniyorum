#include <stdio.h>
#include <math.h>

int main(void) {	
   
   double x = -2;
   double y = 4;
   
   printf("Mutlak deger: %lf \n", fabs(x));
   printf("Kuvvet: %lf \n", pow(x,y));
   printf("Karakok: %lf \n",sqrt(y));
   
   double pi = 3.1415;
   double derece = 30;
   double radyan = (derece * pi) / 180 ;
   printf("Sinus degeri : %1.1lf \n", sin(radyan));
}
