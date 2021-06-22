#include<stdio.h>
#include<string.h>
int main( void )
{
	char s[] = "seLaM";
	
	//strlen - boyut
	printf( "String Boyutu: %d\n", strlen(s) );
	
	//strupr - buyuk harf
	printf( "buyuk harf: %s\n", strupr(s));
		
	//strlwr - kucuk harf
	printf( "kucuk harf: %s\n", strlwr(s));
	
	//strrev - tersi
	printf( "tersi: %s\n", strrev(s));
	
	//strcpy -tamamini kopyalama
	char kaynak[20] = "Merhaba Muhendislik";
	char hedef[20] = "";
	strcpy(hedef,kaynak);
	printf("%s\n",hedef);

	
    //strncpy - n karakter kadar kopyalama
    char hedef2[4];
	strncpy(hedef2,kaynak,4);
	printf("%s\n",hedef2);
	
	//strcmp - karsilastirma 
	int sonuc;
	char ilk_katar[40]="Kurnaza";
	char ikinci_katar[40]="Kurnaz";
	sonuc = strcmp( ilk_katar, ikinci_katar );
	printf( "%d\n", sonuc );
	//strncmp - n karakter kadar karsilastirma 
	sonuc = strncmp( ilk_katar, ikinci_katar, 3 );
	printf( "%d\n", sonuc );
	
	//strcat() 
	char ad[10] ="Ahmet";
	char bosluk[1]=" ";
	char soyad[10]="Ozturk";
	
	strcat( ad, " " ); // ad <-- ad + " "	
	strcat( ad, soyad );// ad <-- ad + " " + soyad
	printf( "Tam isim: %s", ad );
	
	return 0;
}
