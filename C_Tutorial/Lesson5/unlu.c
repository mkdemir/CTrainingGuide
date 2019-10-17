#include "stdio.h"

int main()
{    char secim;
    float s1,s2;
    puts("Seçimi Giriniz :");
scanf("%c",&secim);
puts("Birinci Sayıyı Giriniz :");
scanf("%f",&s1);
puts("İkinci  Sayıyı Giriniz :");
scanf("%f",&s2);

    switch(secim)
    {
        case't':
        printf("Toplama Sonucu %6.3f ",s1+s2);
        break;
         case'c':
        printf("Çarpma Sonucu %6.3f ",s1*s2);
        break;
         case'b':
        printf("Bölme Sonucu %6.3f ",s1/s2);
        break;
        case 'm':
        printf("Cıkarma Sonucu %6.3f \n",s1-s2);
        break;
        default: puts("Doğru seçim yapın !!! ");
    }
}
