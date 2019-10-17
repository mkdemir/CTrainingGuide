#include "stdio.h"
/*
Kural = C çalıştırırken kodları soldan sağa doğru okur.
İlk gelidiği kısma bakar int ozaman int yapar

 */

int main(void){

	float pi = 3.14;
	int a;
	printf("%d\n",(int)pi);
	printf("%f\n",pi);
	a = pi;
	printf("%d\n",a);
	a = 2.15*3;
	pi = 2.15*3;
	printf("%d %f\n",a,pi );

} 