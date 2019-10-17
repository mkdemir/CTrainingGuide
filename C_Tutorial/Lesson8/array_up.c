#include "stdio.h"

int main()
{
 int i,max,sayilar[5] = {2,180,111,27,16}
 max = sayilar[0];
 for(i = 1, i <=4 ; ++i)
 {
     if(max < sayilar[i]) max = sayilar[i];
     printf("Maksimum sayi :  %d " ,max);
    
 } 


}