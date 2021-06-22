#include <stdio.h>
#include <stdlib.h>
#include <dos.h>

main() {
	int slxPuan = 0, ferrariPuan = 0;
	while((slxPuan<=100) || (ferrariPuan<=100)){
		srand(time(NULL));
		int gelenSayi = rand()%9+1;
		printf("Gelen Sayi: %d\n", gelenSayi);
		if(gelenSayi == 1){
			slxPuan += 3;
			
		}
		else if(gelenSayi ==2){
			slxPuan += 3;
		}
		else if(gelenSayi == 3){
			slxPuan += 3;
		}
		else if(gelenSayi ==4){
			slxPuan += 3;
		}
		else if(gelenSayi ==5){
			slxPuan += 3;
		}
		else if(gelenSayi == 6){
			slxPuan-=6;
		}
		else if(gelenSayi == 7){
			slxPuan-=6;
		}
		else if(gelenSayi == 8){
			slxPuan++;
		}
		else if(gelenSayi == 9){
			slxPuan++;
		}
		else if(gelenSayi ==10){
			slxPuan++;
		}
		printf("Dogan SLX Puani: %d\n", slxPuan);
		printf("%*s ",slxPuan-1,"X\n");
		if(gelenSayi==1){
			ferrariPuan;
		}
		else if(gelenSayi == 2){
			ferrariPuan;
		}
		else if(gelenSayi==3){
			ferrariPuan+=9;
		}
		else if(gelenSayi==4){
			ferrariPuan+=9;
		}
		else if(gelenSayi==5){
			ferrariPuan-=12;
		}
		else if(gelenSayi==6){
			ferrariPuan++;
		}
		else if(gelenSayi==7){
			ferrariPuan++;
		}
		else if(gelenSayi==8){
			ferrariPuan++;
		}
		else if(gelenSayi==9){
			ferrariPuan-=2;
		}
		else if(gelenSayi==10){
			ferrariPuan-=2;
		}
		if(slxPuan < 0){
		slxPuan = 0;
	}
		else if(ferrariPuan < 0){
		ferrariPuan = 0;
	}
		if(slxPuan >= 100){
		printf("DoganSLX kazandi..\n");
	}
		else if(ferrariPuan >= 100){
		printf("Ferrari kazandi..");
	}
		printf("Ferrari Puani: %d\n", ferrariPuan);
		printf("%*s",ferrariPuan-1,"F\n");
		sleep(1);
		system("CLS");
	}
	
	
}
