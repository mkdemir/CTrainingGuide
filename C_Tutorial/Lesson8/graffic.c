#include "stdio.h"
#include "math.h"

int main()
{
int x,y;char cizgi[] = "|                                                          ";
for(x = 1; x <=15;++x)
{
    y = pow((x-8),2.0)+3;
    cizgi[y] = '*';
    printf("\n%s",cizgi);
    cizgi[y] = ' ';
}
printf("\n");
return 0;
}