#include <stdio.h>
#include <string.h>

char *SIFIR = "SIFIR";
char *BIR = "BIR";
char *IKI = "IKI";
char *UC = "UC";
char *DORT = "DORT";
char *BES = "BES";
char *ALTI = "ALTI";
char *YEDI = "YEDI";
char *SEKIZ = "SEKIZ";
char *DOKUZ = "DOKUZ";

void main(){
	char str[14];
	
	printf("bir metin giriniz\n");
	gets(str);
	//metni 12-56-87-23-14 þeklinde girmelisiniz
	int i1=str[0]-'0';
	int i2=str[1]-'0';
	int i3=str[3]-'0';
	int i4=str[4]-'0';
	int i5=str[6]-'0';
	int i6=str[7]-'0';
	int i7=str[9]-'0';
	int i8=str[10]-'0';
	int i9=str[12]-'0';
	int i10=str[13]-'0';
	
	printf("\n%c",HarfGetir(i1,i2));
	printf("%c",HarfGetir(i3,i4));
	printf("%c",HarfGetir(i5,i6));
	printf("%c",HarfGetir(i7,i8));
	printf("%c",HarfGetir(i9,i10));
}
void HarfGetir(int ilkrakam,int ikincirakam){
	if(ilkrakam==0){
		char c=*(SIFIR+ikincirakam-1);
		return c;
	}
	else if(ilkrakam==1){
		char c=*(BIR+ikincirakam-1);
		return c;
	}
	else if(ilkrakam==2){
		char c=*(IKI+ikincirakam-1);
		return c;
	}
	else if(ilkrakam==3){
		char c=*(UC+ikincirakam-1);
		return c;
	}
	else if(ilkrakam==4){
		char c=*(DORT+ikincirakam-1);
		return c;
	}
	else if(ilkrakam==5){
		char c=*(BES+ikincirakam-1);
		return c;
	}
	else if(ilkrakam==6){
		char c=*(ALTI+ikincirakam-1);
		return c;
	}
	else if(ilkrakam==7){
		char c=*(YEDI+ikincirakam-1);
		return c;
	}
	else if(ilkrakam==8){
		char c=*(SEKIZ+ikincirakam-1);
		return c;
	}
	else if(ilkrakam==9){
		char c=*(DOKUZ+ikincirakam-1);
		return c;
	}
}
