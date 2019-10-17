#include "stdio.h"
int main()
{
    int Volt[5];
    int Akım[5];
    int Direnc[5];
    int a ,i;
    for(i=0;i <5;++i)
    {
       
        printf("Akımı giriniz ... ");
        scanf("%d",&Akım[i]);
        printf("Direnci giriniz ... ");
        scanf("%d",&Direnc[i]);
        Volt[i] = Akım[i] * Direnc[i];
    }
   printf("Volt\tAkım\tDiren\t\n");
   
    for(a = 0; a < 5; ++a)
    {

    printf("%d\t%d\t%d\n",Volt[a],Akım[a],Direnc[a]);
    }


}