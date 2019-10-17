#include "stdio.h"

int main()
{    char Harf; 
puts("Hartf notunuzu giriniz ? ");
scanf("%c",&Harf);
    switch(Harf)
    {
        case 'A': case 'a':
        printf("90 ila 100 arasındadır..\n");
        break;
         case'B': case 'b':
         printf("80 ila 89.99 arasındadır..\n");
        break;
         case'C': case 'c':
        printf("70 ila 79.99 arasındadır..\n");
        break;
        case 'D': case 'd':
        printf("60 ila 69.99 arasındadır..\n");
         printf("Bunu nasıl açıklayacaksınız......\n");
        break;
         case 'F': case 'f':
        printf("Hoca kafayı sana takmış...\n");
        break;
        default: puts("Böyle bir harf notu icat ediledi !!! ");
    }
}
