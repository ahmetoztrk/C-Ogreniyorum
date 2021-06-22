#include <stdio.h>
#include <stdlib.h>


void main() {

int sayi;

printf("Sayi giriniz:");
scanf("%d",&sayi);
puts("");
printf("%d != %d",sayi,faktoriyel(sayi));
}


int faktoriyel(int x){
	
	if (x ==1) {
	    return 1;
	}
	else{
		return x * faktoriyel(x-1);
	}
}
	

