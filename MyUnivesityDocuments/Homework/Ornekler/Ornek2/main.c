#include <stdio.h>

int main()
{
	int s1 , s2, s3;
	printf("Sırasıyla Sayıları Giriniz :");
	scanf("%d",&s1);
	scanf("%d",&s2);
	scanf("%d",&s3);

	int toplam = (s1+s2+s3);
	int ort = toplam/3;

	printf("Ortlaması : %d\n",ort);

}