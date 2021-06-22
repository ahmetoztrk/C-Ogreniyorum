#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double istatistikGoster(int dizi[]);
int dizi[10];

main() {
	int secim[5]={1,2,3,4,5};
	printf("1 - Yazdir\n2 - Tersten Yazdir\n3 - Max-Min Yazdir\n4 - Sirala\n5 - Istatistik Goster\n");
	printf("Seciminiz : \n");
	scanf("%d",&secim);
	
	
	if(secim==1){
		diziyiYazdir();
	}
	else if(secim==2){
		diziyiTerstenYazdir();
	}
	else if(secim==3){
		minMaxYazdir();
	}
	else if(secim==4){
		sirala();	
	}
	else if(secim==5){
	//	istatistikGoster(int dizi[]);
	}	
		
}
void diziyiYazdir(int dizi[]){
	
	int j;
	for(j=0;j<50;j++){
		srand(time(NULL));
		dizi[j]=rand()%51;
		printf("%d",dizi[j]);
		if(j!=49){
			printf(",");
		}
		if(j%10==0){
			printf("\n");
		}
	}
	
}
void diziyiTerstenYazdir(int dizi[]){
	int j;
	int k=0;
	for(j=k-1;j>=0;j--){
		srand(time(NULL));
		dizi[j]=rand()%51;
		if(j!=1){
			printf(",");
		}
		if(j%10==0){
			printf("\n");
		}
	}
}
void minMaxYazdir(int i){
	srand(time(NULL));
	dizi[i]=rand()%51;
	
	int min,max;
	min=max=dizi[0];
	char c;
	
	if(dizi[i]<min) min=dizi[i];
	else if(dizi[i]>max) max=dizi[i];

printf("Seciminiz: (K)ucuk/(B)uyuk\n");
scanf("%c",&c);
if(c='K'){
	printf("En kucuk sayi: %d\n",min);
}
else if(c='B'){
	printf("En buyuk sayi: %d\n",max);
}
}
void sirala(int i){
	srand(time(NULL));
	dizi[i]=rand()%51;
	printf("Seciminiz : (B)uyuk/(K)ucuk\n");
	char secim3 ={'B','K'};
	scanf("%c",&secim3);
	int yardimci,y,z;
	int l=sizeof(dizi)/sizeof(int);
	if(secim3=='K'){
	for(y=0;y<l-1;y++){
		for(z=y+1;z<1;z++){
			if(dizi[y]>dizi[z]){
				yardimci=dizi[z];
				dizi[z]=dizi[y];
				dizi[y]=yardimci;
			}
		}
	}
	for(y=0;y<l;y++)
	printf("%d \n",dizi[y]);
}
else if(secim3=='B'){
	int i,j,temp;
	for (i=0;i<5;i++) {
    for(j=0;j<5;j++) {
        if(dizi[i]>dizi[j]) {
            temp=dizi[i];
            dizi[i]=dizi[j];
            dizi[j]=temp;
        }
    }
}
}

printf("Dizi\n");
printf(".......\n");
for(i=0;i<5;i++){
	printf("%d\n",dizi[i]);
}
}
double istatistikGoster(int dizi[]){
	srand(time(NULL));
	dizi[10]=rand()%51;
	int k=0;
	while(dizi[k]!='\0'){
		k++;
	}
	double ortalama = dizi[k]/10;
	printf("%.2lf",ortalama);
	
	double standartSapma = sqrt((1/9)*(dizi[k]-ortalama)*(dizi[k]-ortalama));
	
	printf("%.2lf",standartSapma);
}

