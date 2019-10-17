#include "stdio.h"
#include "math.h"


int main()
{
	float h;
	puts("Merdiven Yüksekliğini Giriniz : ");
	scanf("%f",&h);

	h = h*sin(60*0.01745329252);

	printf("En fazla 60 derece açı ile en fazla %f Yüksekliğe erişebilirsinin\n",h );
}