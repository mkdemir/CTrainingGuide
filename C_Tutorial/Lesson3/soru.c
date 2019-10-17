#include "stdio.h"
#include "math.h"


int main()
{
	float B,t;

puts("Saat cinsinden zaman giriniz :");
	scanf("%f",&t);

	B = pow(300000,exp(-0.032*t));
printf("%f\n",B );
}