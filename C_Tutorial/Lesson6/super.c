
/*
#include "stdio.h"
#include "math.h" 
int main()
{
float x,L,sounc;

puts("x ve l değerlerini giriniz ..");
scanf("%f",&x);
scanf("%f",&L);
// Radtyana çevirme 0.017

x = x * 0.017;
L  = L * 0.017;
sonuc = x + cos(x/L) + sin(x/L);
printf("Sounç = %f'dir...\n ", sonuc);
}

*/

#include "stdio.h"
#include "math.h" 
int main()
{
float x,L,sonuc;
char cevap = 'e';

while(cevap != 'h') {
puts("x ve l değerlerini giriniz ..");
scanf("%f",&x);
scanf("%f",&L);
// Radtyana çevirme 0.017

x = x * 0.017;
L  = L * 0.017;
sonuc = x + cos(x/L) + sin(x/L);
printf("Sounç = %f'dir...\n", sonuc);
puts("Devam için herhangi bir tuşa, çıkmak için h harfine basınız...");
scanf("%c",&cevap);
}

}