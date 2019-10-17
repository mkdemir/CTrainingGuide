#include "stdio.h"

int main()
{
    int i,j,val[3][4] = {12,12,3,45,6,8,9,0,5,4,2,1};

    printf("\n\n Carpilmiş dizi elemanlarının gostermimi \n");
    for(i = 0; i < 3; ++i)
    {
        printf("\n"); //Boş satır yazdırır..
        for(j = 0 ; j < 4; ++j)
        {
            val[i][j] = val[i][j] *10;
            printf(" %3d ",val[i][j]);

        }
    }
     printf("\n-------------------------");
}