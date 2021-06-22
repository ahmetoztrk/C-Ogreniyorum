#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fptr;        /* dosya isaretcisi */
   char ch;
  
  if( (fptr=fopen("C:\\temp\\output.txt","r")) == NULL )  
     puts("Dosya acilmadi !\n"), exit(1);



 do {
    ch = getc(fptr);
    	// okunan karakterleri ekrana yaz:
    	printf("%c", ch); 
    } while (ch != EOF);
    
   fclose(fptr);                           
 

 return 0;
}
