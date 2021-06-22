#include <stdio.h>



int main() {
char c;
   /*
   Belirli bir input stream'den tek bir karakter okur ve başarı durumunda karşılık gelen tamsayı değerini
    (tipik olarak okunan karakterin ASCII değeri) döndürür. Başarısızlık durumunda EOF döndürür.
	*/
  // printf("%c", getc(stdin)); 
   
   /*
   getc () ve getchar () arasındaki fark getc () herhangi bir input stream'den okuyabilir, 
   ancak getchar () standart girişten okur. Yani getchar (), getc (stdin) ile eşdeğerdir.
   */
   //printf("%c", getchar());
   
   /*
   standart olmayan bir işlevdir ve çoğunlukla Turbo C gibi MS-DOS derleyicileri tarafından kullanılan conio.h başlık dosyasında bulunur. 
   Klavyeden de tek bir karakter okur. 
   Ancak herhangi bir arabellek kullanmaz, bu nedenle girilen karakter, enter tuşu beklenmez.
   */
   //getch()
   //printf("%c", getch());
   
   /*
   getch () gibi, bu da conio.h'de bulunan standart olmayan bir işlevdir.
    Klavyeden tek bir karakter okur ve enter tuşunu beklemez ve hemen ekrana yazdırır
   */
   //getche();
   //printf("%c", getche());
   
   return(0);

}