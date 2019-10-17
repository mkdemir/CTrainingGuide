#include "stdio.h"
int main()
{
int numara = 1;
puts("numara \tkaresi \tküpü");
puts("-----\t-----\t-----");

while(numara <=11)
{
    printf("%d\t%d\t%d\n",numara,numara*numara,numara*numara*numara);
    numara ++;
}

}
