#include "stdio.h"

int main()
{
    //for(başlangıç değeri; koşul ;artış/azalış değeri)
    int sayi;
    printf("Sayi\tKaresi\tKübü\n");
    printf("----\t----\t----\t\n");
    for(sayi = 1 ; sayi <=10 ; sayi++)
    {
 printf("%d\t%d\t%d\n",sayi,sayi*sayi,sayi*sayi*sayi);
    }
}