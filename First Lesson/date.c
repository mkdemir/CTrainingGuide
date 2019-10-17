#include <stdio.h>

int main(void)
{
	int today,birthday;
	printf("Bugünün tarihi giriniz\n");
	 scanf("%d",&today);
	 printf("Doğum tarihinizi giriniz\n");
	 scanf("%d",&birthday);
	 printf("Yaşınız %d\n",today-birthday);

}