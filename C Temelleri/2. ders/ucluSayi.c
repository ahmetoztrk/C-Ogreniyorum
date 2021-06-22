#include <stdio.h>

int main(void) {	
    
    printf("Uc adet sayi giriniz:\n");
   
    int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	
	printf("toplamlari :%d \n", (x+y+z));
	printf("ortalamari :%d \n", (x+y+z)/3);
	
	if ((x>y) && (x>z)){
		printf("x en buyuk \n");
	}
	else if ((y>x) && (y>z)){
		printf("y en buyuk \n");
	}
	else if ((z>x) && (z>y)){
		printf("z en buyuk \n");
	}
	
	if ((x<y) && (x<z)){
		printf("x en kucuk \n");
	}
	else if ((y<x) && (y<z)){
		printf("y en kucuk \n");
	}
	else if ((z<x) && (z<y)){
		printf("z en kucuk \n");
	}
	
	if (x%2==0) {
		printf("x sayiyisi cift \n");
	}
	else{
		printf("x sayisi tek \n");
	}
	
	if (y%2==0) {
		printf("y sayiyisi cift \n");
	}
	else{
		printf("y sayisi tek \n");
	}
	
	if (z%2==0) {
		printf("z sayiyisi cift \n");
	}
	else{
		printf("z sayisi tek \n");
	}
	
	
}
