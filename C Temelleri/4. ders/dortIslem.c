
#include <stdio.h>
main(){
int x=5;
int y=2;

printf("Toplam:%d \n", toplama(x,y));
printf("Fark:%d \n", cikarma(x,y));
printf("Carpim:%d \n", carpma(x,y));
printf("Bolum:%d \n", bolme(x,y));
}

int toplama(int x, int y){
	return (x+y);
}

int cikarma(int x, int y){
	return (x-y);
}

int carpma(int x, int y){
	return (x*y);
}

int bolme (int x, int y){
	return (x/y);
}

