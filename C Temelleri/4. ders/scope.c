#include <stdio.h>

int x=1; //global variable

main() {
int x= 5;//local variable
printf("Scope disindaki x degeri :%d \n",x);
{
	int x=7; //scope variable
	printf("Scope icindeki x degeri :%d \n",x);
}


useLocal();
useGlobal();
}


void useLocal(void){
	int x = 25;//local variable
	printf("Local fonksiyon icindeki x degeri :%d \n",x);
}



void useGlobal(void){
	printf("Global x degeri :%d \n",x);
}

	

