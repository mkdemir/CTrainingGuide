#include "stdio.h"

int main()
{
    char harf;
    puts("Bir harf giriniz :");
    scanf("%c",&harf);
    //trim
    if(harf >= 'A' && harf <= 'Z')
    puts("Büyük harf girdiniz : ");
    else
    puts("Küçük harf girdiniz ");

}