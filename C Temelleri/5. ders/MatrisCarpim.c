#include <stdio.h>
  

int main()
{
	int N=3;
    int a[N][N], b[N][N], c[N][N];
    int i,j,k,toplam;

    puts("A Matrisini girin:");
    for(i=0; i<N; i++)
       for(j=0; j<N; j++)
          scanf("%d",&a[i][j]);

    puts("B Matrisini girin:");
    for(i=0; i<N; i++)
       for(j=0; j<N; j++)
          scanf("%d",&b[i][j]);


    puts("\nC Matrisi:");
    for(i=0; i<N; i++){
       for(j=0; j<N; j++){
      
      	   toplam =0;
          for(k=0; k<N; k++)
             toplam += a[i][k]*b[k][j];

          c[i][j] = toplam;
          printf("%4d",c[i][j]);
       }
       printf("\n");
    }

 return 0;
}
