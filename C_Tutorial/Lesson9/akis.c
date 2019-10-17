#include "stdio.h"

int main()
{
    int F = 1,x,i;
    
    puts("Xi giriniz ....");
    scanf("%d",&x);
for(i=1;i<=x;i++) 
{
    F = F*i;
printf("%d\n",F);
}

}