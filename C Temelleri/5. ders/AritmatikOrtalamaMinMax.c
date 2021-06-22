#include <stdio.h>

#define boyut 5

int main() {
	//const int boyut=5;

	float x[boyut], ort, toplam = 0.0;
	int   i;
	for(i=0; i<boyut; i++) {

		printf("%d. sayi : ",i+1);
		scanf("%f",&x[i]);

		toplam += x[i];
	}

	ort = toplam/boyut;

	printf("Sayilarin ortalamasi = %f\n",ort);

	int min,max;
	min=max=x[0];
	for(i=0; i<boyut; i++) {
		if (x[i] < min) min = x[i];
		if (x[i] > max) max = x[i];
	}
	printf("en kucuk sayi: %d\n",min);
    printf("en buyuk sayi: %d\n",max);

	return 0;
}
