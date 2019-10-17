#include "stdio.h"
int main()
{
    float score,ort,toplam= 0;
     int i,j;


    for(i = 1; i<= 5; i ++)
{
   
    for(j = 1; j <= 3;j++)
    {

printf("%d . oyuncunun %d.skorunu girin ",i,j);
scanf("%f",&score);
toplam = toplam + score;

    }
    ort = toplam /3 ;
    printf("%d inci oyuncunun ortalaması %f dir \n",i,ort);
    toplam = 0;
    puts("\n");
}
}
