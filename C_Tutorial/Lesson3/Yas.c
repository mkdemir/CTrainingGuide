#include <stdio.h>
int main()
{
	float N,old,y,t;
	puts("Nisa Rauf'tan kaç yaş büyüktür ? ");
	scanf("%f",&old);

	puts("Kaç yıl önceden söz ediyoruz ? ");
	scanf("%f",&y);
	puts("O zamanlar Nisa'nın yaşı Rauf'un kaç katıydı ?");
    scanf("%f",&t);
    N =  ((y*(t-1)+old)/(t-1))+old;
    printf("Nisa şu an %f yaşındadır.\n", N);


}