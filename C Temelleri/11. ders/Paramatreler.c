#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

   
    printf("parametre sayisi : %d \n",argc);
    printf(" Program ismi %s \n",argv[0]);
    
    int i=0;
    
    for(i = 0; i < argc; i++)
        {
            printf(" argv[%d]: %s \n",i, argv[i]);
        }
    return 0;
}
