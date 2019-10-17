#include "stdio.h"
int main()
{
    long int sayi ,toplam ,adedi;
    float ort;
sayi = 0 ;
toplam = 0;
adedi = 0;
do 
{
    puts("Bir sayı giriniz : ");
    scanf("%ld",&sayi);
    if(sayi >= 0)
    {
        adedi ++;
        toplam +=sayi;
     
    }
}
while(sayi>=0);

ort = toplam /adedi;
printf("%ld adet sayi giriniz ,toplamı %ld ortmala %lf dir .. \n",adedi,toplam,ort);
}
    