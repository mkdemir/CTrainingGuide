#include "stdio.h"
#include "math.h"

int main()
{
float Gelir,Vergi;

puts("Geliriniz Giriniz : \n");
scanf("%f",&Gelir);
if(Gelir <= 20000)

    Vergi = Gelir * 0.02;

else
 Vergi = 0.025 * (Gelir - 20000) + 400;
 printf("Verginiz %f$ 'dır",Vergi);
}