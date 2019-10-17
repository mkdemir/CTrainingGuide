#include <stdio.h>
#include "math.h"
int main()
{
    int a,b,c;
    int sonuc;

 printf("a sayısını giriniz : ");
 scanf("%d",&a);
 printf("a sayısını giriniz : ");
 scanf("%d",&b);
 printf("a sayısını giriniz : ");
 scanf("%d",&c);
 
sonuc = (b*b - 4*a*c);  
if(sonuc == 0) { 
    int x;
    sonuc = -b/2*a;
printf("Delta 0 tek bir kök var %d",sonuc);

return 0;}

if(sonuc < 0  ){ 
    puts("Delta 0'dan küçük kök yok");
return 0;
}

else
{
 int x1 = (- b + sqrt(b*b-4*a*c))/2*a;
 int x2 = (- b + sqrt(b*b+4*a*c))/2*a;

 printf("Kökler x1 = %d x2 = %d\n",x1,x2);
}
}