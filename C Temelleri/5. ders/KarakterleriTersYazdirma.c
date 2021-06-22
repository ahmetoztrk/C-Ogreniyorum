#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char s[40];
   int  i;

   /* diziyi oku */
   printf("Bir seyler yazin : ");
   gets(s);

	int  k = 0;		
   while( s[k]!='\0' )
   
      k++; 
	
printf("Dizinin uzunlugu : %d\n",k);

for(i=k-1;i>=0;i--){
printf("%c",s[i]); 	
}

}
