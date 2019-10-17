#include <stdio.h>
#include "math.h"

int main()
{
    int R = 0;// Faiz
    int X =100; // Dolar Depoizto
    int N 10;// Yılda
    int A; //Ana Para
    
    A = X*pow((1.0 + R/100),N);
printf("Ana Para : %d",A);
    return 0;
}