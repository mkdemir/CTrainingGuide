#include "stdio.h"

int main(){
	float t = 2;
	double h=20;
	double g = 9.83;

	//Serbest düşme
	//

	h = (1/2)*g * t*t;
	printf("%f\n",h );

	/*
	
20 Ocak 2011, 13:53
**ayı beyazdır
h=1/2 g t^2 denir
Kutuplarda  basıklık olduğu için 9.82 'die'
yerçekimi ivmesi bulunur yerçekimi ivmesi 10 m /sn^2 bulunur normalden büyüktür
normal yaklaşık 9,81 kabul edilir demekki kutuplardadır.
haliyle ayı beyazdır.
	 */
}