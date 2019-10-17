/*#include "stdio.h"
int main()
{
float sayi,toplam,tane,ort;
sayi = 0;
toplam =0;
tane = 0;

while (sayi >= 0)
{
puts("Pozitif bir sayı giriniz : ");
scanf("%f",&sayi);

tane++;
toplam = toplam + sayi;
}

ort = toplam / tane;
printf("%f sayi girdinizi toplamı %f ve ortamalaması %f",tane,toplam,toplam/tane);

}
*/


#include "stdio.h"
int main()
{
float sayi,toplam,tane,ort;
sayi = 0;
toplam =0;
tane = 0;

while (sayi >= 0)
{
puts("Pozitif bir sayı giriniz : ");
scanf("%f",&sayi);
if(sayi>=0){
tane++;
toplam = toplam + sayi;
}
}

ort = toplam / tane;
printf("%f sayi girdinizi toplamı %f ve ortamalaması %f",tane,toplam,toplam/tane);

}
