#include "stdio.h"
#include "math.h"
#define g 9.81
//Sqrt() Bir sayının kare kökü bulur

 int main()
 {
 	double h ,t;
 	float g = 9.81;
 	 //sqrt(4.0);

 	//abs  Mutlak değerleri alıyor.
 	//pow Kuvvet alma
 	//Sins radyan cinsi 1/2 ama 30 derecedir.
 	puts("Kaç metreden düşüyor");
 	scanf("%lf",&h);

 	h = 800.0;
 	t = sqrt(2*h/g);
   printf("%f sanitede yere düşer...\n", t);

 }