#include <stdio.h>
#include "math.h"
int main()
{
    int as1,as2,final;


 printf("Birinici notu giriniz : ");
 scanf("%d",&as1);
 printf("İkinci notu giriniz : ");
 scanf("%d",&as2);
 printf("Final notu giriniz : ");
 scanf("%d",&final);

 if(final >= 50){
 int asort = (as1 + as2) /2 ;
 int bn = 0.3*asort+0.7*final;

 printf("Notunuz %d",bn);
 }
 
else{
puts("Finalden kaldın !!!");
}
return 0;
}