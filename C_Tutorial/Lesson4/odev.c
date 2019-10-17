#include <stdio.h>
#include "math.h"

int main()
{
    int R;// Faiz
    int X; // Dolar Depoizto
    int N;// Yılda
    int A; //Ana Para
    printf("Lütfen Faiz'i Giriniz : \n");
scanf("%d",&R);
printf("Lütfen Depozitoyu Giriniz : \n1");
scanf("%d"&X); 
printf("Yıl ı Giriniz : \n");
scanf("%d",&N);


    A = X*pow((1.0 + R/100),N);
printf("Ana Para : %d",A);
    return 0;
}