#include <stdio.h>

main() {

 char c;
 
 printf("Devam etmek istiyor musunuz ? (E/H)");
 //scanf("%c",&c);
 //printf("%c",c);
 c = getchar();
 putchar(c);

  

 char isim[20];
 printf("isminizi giriniz : ");
 //scanf("%s",&isim);
 //printf("%s",isim);	
 gets(isim);
 puts(isim);
 
 }

