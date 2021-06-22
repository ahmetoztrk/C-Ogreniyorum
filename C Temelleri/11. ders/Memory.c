#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,*ptr;
    
    printf("Eleman Sayisini Giriniz: ");
    scanf("%d",&n);
    //ptr=(int*)malloc(n*sizeof(int));  //malloc kullanarak bellek ayirimi
 	ptr=(int*)calloc(n,sizeof(int));  //calloc kullanarak bellek ayirimi
 
    if(ptr==NULL)                     
    {
        printf("Hata! Bellek ayrilamadi");
        exit(0);
    }
    
    for(i=0;i<n;++i)
    {
    	printf("%d\n",*(ptr+i));
        
    }
    
    free(ptr);
    return 0;
}
