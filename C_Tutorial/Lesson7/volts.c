#include "stdio.h"

int main()
{
    float volts[9] = {10.95,12.45,11.43,12.55,13.95,16.95,20.95,20.95,12.95};
    int i;

    for(i = 0 ; i < 9; ++i)
    {
  
       
       if(i%3 == 0)printf("\n");
       printf("%.3f \t",volts[i]);
    
}
}