/*
Programda bütün sayılar ikilik tabanda tutulur
Programlama dileri ikilik tabandadır.

Aslında bütün sayılar binary olarak çalışır
Programlama dilleri ikilik tabandadır.

printf("\n%d",a >> 2);
Ok yönü solu gösteriyor bir yadıralacak
0100 , 1000
2 = 0010 ikilik taban 
Son hali 2 = 1000
 */
#include <stdio.h>

int main()
{
	int a = 10;
	int b=3,c =7;
	//printf("%d\n",a+b);
	printf("%d\n",a<<2);
	printf("%d\n",a+b*2);
	printf("%d\n",a%b); //Remainder . modluo 10 mod 3 = 1
	printf("%d\n",a == b);// False dönecek ama c'de true ve false yok boolean tip yoktur
	//0 haricinde her şey true'dur buda ekstra bir bilgidir.
	printf("%d\n",a>b);
	printf("%d\n",a++); // Post increment = Sonradan arttır.
	printf("%d\n",++a); //Pre increment = Önceden arttır.
	return 0;
}