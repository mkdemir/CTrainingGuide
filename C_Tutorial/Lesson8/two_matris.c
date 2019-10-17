/*
#include "stdio.h"
#define SAT 2
#define SUT 2


int main(void)
{
int a[SAT][SUT];
int i,j,f;
for(i = 0; i <SAT;i++)
{
    for(j=0;j<SUT;j++)
    {
        printf("%d nci satir %d sutunu girin = ",i,j);
        scanf("%d",&f);
        a[i][j] = f;
    }
}
puts("A matrisi ...");

for(i=0;i<SAT;i++)
{
    for(j=0;j<SAT;j++)
    {}
}

printf("\n");
return 0;
}
*/
#include "stdio.h"


int main(void)
{
    int SAT = 2, SUT = 2;

int a[SAT][SUT];
int b[SAT][SUT]= {11,25,30,6};
int c[SAT][SUT];

int i,j,f;
for(i = 0; i <SAT;i++)
{
    for(j=0;j<SUT;j++)
    {
        printf("%d nci satir %d sutunu girin = ",i,j);
        scanf("%d",&f);
        a[i][j] = f;
    }
}
puts("A matrisi ...");

for(i=0;i<SAT;i++)
{
    for(j=0;j<SAT;j++)
    {
printf("\n");
    }
}

//A ve B  Toplanıyor ve C matrisine atılıyor...

for(i=0;i<SAT;i++)
{
    for(j=0;j<SUT;j++)
    {
        c[i][j] = a[i][j] + b[i][j];
        printf("%d ",c[i][j]);
            }
            printf("\n");
}
}