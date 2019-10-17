#include <stdio.h>

/*
Hafta_01
Slayt No:12
Örnek1 : İki sayının toplamı probleminin algoritmasını yazınız ve akış diyagramını çiziniz.

*/
int main()
{
	int s1,s2;

	printf("Birinci Sayıyı Gir : ");
	scanf("%d",&s1);
	printf("İkinci Sayıyı Gir : ");
	scanf("%d",&s2);

    int toplam = s1 + s2;

    printf("Toplam : %d\n",toplam);
} 