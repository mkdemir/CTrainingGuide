#include "stdio.h"
#include "math.h"
int main()
{
    float volts[9];
    int i;
    float toplam = 0;

    for(i = 0 ; i < 9; ++i)
    {
      printf("Sırasıyla Notları Giriniz. %d",i);
       scanf("%f",&volts[i]);
      
           toplam =volts[i] + toplam;
    
    }
    float ort = toplam / 9;

int deger;
    for(i=1; i <9;++i)
    {
        toplam = toplam + (deger - ort)*2;
    }
    //3 toplam/(n-1);
    float stDev  = sqrt(toplam / (9-1));
    printf("%f",stDev);


}