#include "stdio.h"
int main(){
    float Aylil_Satis,Gelir;
    puts("Aylık satiş değerini giriniz : ");
    scanf("%f",&Aylil_Satis);
    if(Aylil_Satis >= 500000.00) Gelir = 375.00 + 16 * Aylil_Satis;    
    else if(Aylil_Satis >= 50000.00) Gelir = 375.00 + 0.16 * Aylil_Satis;
    else if(Aylil_Satis >= 40000.00) Gelir = 350.00 + 0.14 * Aylil_Satis; 
    else if(Aylil_Satis >= 30000.00) Gelir = 325.00 + 0.12 * Aylil_Satis; 
    else if(Aylil_Satis >= 20000.00) Gelir = 300.00 + 0.09 * Aylil_Satis; 
    else if(Aylil_Satis >= 10000.00) Gelir = 250.00 + 0.05 * Aylil_Satis; 
    else Gelir = 200.00 + 0.3 *Aylil_Satis;
    printf("Gelir : $%7.2f \n",Gelir);

}