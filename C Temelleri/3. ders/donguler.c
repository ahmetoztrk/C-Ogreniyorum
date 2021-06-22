#include <stdio.h>

main(){
	
	//while dongusu
	int x;
	x=1; //baslangic degeri
	while(x<=10){
		printf("%d\t",x);
		x++; //x=x+1;
	}
	
	
	printf("\n\n");	
	
	//for dongusu
	int y;
    for(y = 1; y <= 10; y++)
    {
        printf("%d\t", y);
    }
    
    printf("\n\n");
    
	//ic ice for dongusu
    int i;
    int j;
    for(i = 1; i < 5; i++)
    {    
        for(j = 1; j < 5; j++)
        {
            printf("%d %d \t", i,j);
        }
        printf("\n");
    }
    
    printf("\n\n");
  
    //do while gondusu
    int a=1;
    do{
	    printf("%d\t",a);
		a++;	
	}while (a<=10);
    
}