//Aray diziler  Çok sayıda bellek bölgesi

#include "stdio.h"

int main()
{
    //Dizi tipi [Eleman sayısı]
    //float kutle[5];

    //ILk ornek..
int notlar[5],toplam = 0,i;

for(i=0;i<=4;i++)
{
    printf("Bir not giriniz: ");
    scanf("%d",&notlar[i]);
}

printf("\n Notların Ortlaması : ");

for(i=0;i<=4;++i)
{
printf("%d",notlar[i]);
toplam = toplam + notlar[i];
}
printf("%d",toplam/5);
}