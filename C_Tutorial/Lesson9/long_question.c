#include "stdio.h"
int main()
{
    int i,r,x,n,y;
    puts("x 'i giriniz ... \n");
    scanf("%d",&x);
    puts("n yani seriyi gir..... \n");
    scanf("%d",&n);
    y = 1;
    r = 0;
    for(i = 1;i <= n; i++)
    {
r = r  + 1;
y = y + (r * x) / (r + 1);

    }
printf(" y = %d\n",y);


}