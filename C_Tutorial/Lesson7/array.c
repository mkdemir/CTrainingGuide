//Aray diziler  Çok sayıda bellek bölgesi

#include "stdio.h"

int main()
{
    //Dizi tipi [Eleman sayısı]
    //float kutle[5];

    //ILk ornek..
int eleman = 11;
int i,notlar[eleman];

for(i = 0 ; i<eleman;++i)
{
    printf("Bir not giriniz...");
    scanf("%d",&notlar[i]);
}
for(i=0; i<=4;i++)
printf("\n notlar[%d] is %d ",i,notlar[i]);
    
}