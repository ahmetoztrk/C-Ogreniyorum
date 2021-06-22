#include <stdio.h>
#include <math.h>

int main(void) {	
   
   //ikinci dereceden a^2 +bx + c denkleminin cozumu
   
   int a,b,c;
   
   printf("Katsayilari giriniz(a,b,c): \n");
   scanf("%d %d %d",&a,&b,&c);
   
   double delta = b*b - 4*a*c ;
   printf("delta = %lf \n",delta);
   
   double x1,x2;
   
   if(delta<0){
   	printf("Reel kok yoktur \n");
   }
   else{
   	x1 = (-b + sqrt(delta)) / (2*a) ;
   	x2 = (-b - sqrt(delta)) / (2*a) ;
   	printf("x1:%2.2lf x2:%2.2lf",x1,x2);
   }
}
