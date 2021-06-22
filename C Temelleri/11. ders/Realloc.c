#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr,i,n1,n2;
    
	printf("Dizi boyutunu girin: ");
    scanf("%d",&n1);
    
	ptr=(int*)malloc(n1*sizeof(int));
    printf("ilk basta atanan hafiza adresi: \n");
    
	for(i=0;i<n1;++i)
    printf("%X \t",ptr+i);
         
         
    printf("\nDizinin yeni boyutunu girin: ");
    scanf("%d",&n2);
    
	ptr=realloc(ptr,n2);
    
	for(i=0;i<n2;++i)
    printf("%X \t",ptr+i);
      
    free(ptr);
    return 0;
}
