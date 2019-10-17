//
//Created by Mustafa Kaan DEMIR
//
#include "stdio.h"
#include "locale.h"

int main()
{
setlocale(LC_ALL,"Turkish");


//Değer veriyoruz.
int x = 3,k=-1;


//İşlem yapıyoruz
int y = 3*x*x*x /2*k+12;

printf("x değeri %d, \t k değeri %d \t Cevap : %d\n",x,k,y );
}
