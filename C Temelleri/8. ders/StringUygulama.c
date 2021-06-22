#include<stdio.h>
#include<string.h>



int main( void ) {

	//toupper
	char str[80], *p;

	printf("Bir metin giriniz: ");
	gets(str);
	p = str;

	while( *p != '\0') {
		*p = toupper(*p);
		p++;
	}

	printf("%s\n", str); /* uppercase string */



//strstr()
	char adres[] = "AIBU Muhendislik Fakultesi";
	char *ptr;
	ptr = strstr( adres, "dis" );

	if( ptr != NULL )
		printf( "Baslangic noktasi: %d\n", ptr - adres );
	else
		printf( "Eslesme bulunamadi \n" );

// strchr() ve strrchr()

	char *ilk_nokta, *son_nokta;
	ilk_nokta = strchr( adres, 'e' );
	son_nokta = strrchr( adres, 'e' );
	if( ilk_nokta != NULL ) {
		printf( "Ilk gorundugu konum: %d\n", ilk_nokta - adres );
		printf( "Son gorundugu konum: %d\n", son_nokta - adres );
	} else
		printf( "Eslesme bulunamadi.\n" );
	return 0;
}
