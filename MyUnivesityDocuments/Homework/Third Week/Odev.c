#include "stdio.h"
#include "math.h"

int main(){
	int R=0; // bazda yüzde faiz
	int X=1000; //Dolar depozito
	int N=10; //Yılda mevcut olan para
     int A;
     A = X*(pow(N,(1.0 + R / 100)));
printf("%d\n",A );} 
