
#include <stdio.h>
main(){
printf("Sayi giriniz: \n");
int sayi;
scanf("%d",&sayi);
printf("Faktoriyel:%d", faktoriyel(sayi));
}


int faktoriyel (int x){
	
	int carpim =1;
	int i;
	
	for(i=1;i<=x;i++){
		carpim *= i;
	}
	
	return carpim;
}


