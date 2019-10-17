/* 
Değişkenler : Ram'de dururlar

int = Tam sayı -128  +128
float = On dalıklı sayıları tutar  
double = Ondalıklı sayıları tutar ama daha büyük ondalıklı sayıları tutar.(double int'in kısaltılması)(Hafızada yer kaplıyor) 
char = Karakter (Tek bir karakter)(Aslında karakter tipi bir integer'dır.)
//Case senseitive = Büyük küçük harfe duyarılıdır.
Assignment = Atam işlemi (=)   


 Değişekenler 

 %d , %i = integer
 %u = Onluk tabanda işaretsiz
 %f , %F = float
 %e , %E = Üstek fonk
 %x,%X = İşaretsiz tam sayı
 %s = String bir ifade
 %c = Ekrana bir karakter basma
 %p = print a void * (pointer to void)
 %lu = Ekrana kaç bayt olsuğunu girme   

\n = New line
\t = Sekme tarakteri bir tab kadar boşluk bırakır.
\b = Son konulan karakteri siler.
\\ = 
\" =
Back slash karakteri
Multi line comment 
//Single line 
*/
 
int a = 10;
int b = 3, c = 4,x;

#include <stdio.h>

int main()
{
    //Yüzde ile ifade edilen ifadelerin bir anlamı var
	printf("a: %d\tb: %d\tc: %d\n",a,b,c);
	printf("a: 10\tb: 3\tc: 4 \n"); 

	a = 20,b = 30,c = 40;
	printf("a: %d\tb: %d\tc: %d\n",a,b,c);
	printf("a: 20\tb: 30\tc: 40\n"); 
	printf("Lütfen bir sayı giriniz : ");
	scanf("%d",&x);
	printf("Merhaba \"  \\ \n ");
	printf("Girdiğiniz Sayı :%4d\n",x);
	float pi = 3.14;
	printf("%7.4f\n",pi );
//  int 1 = 10 ;//gibi bir şey tanımlayamam
  }