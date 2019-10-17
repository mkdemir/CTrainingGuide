#include "stdio.h"
int main(){
    float Notu;
    puts("Notunu Giriniz :");
    scanf("%f",&Notu);
    
    if(Notu >= 90) puts("A");
    else if(Notu >= 80) puts("B");
    else if(Notu >= 70) puts("C");
    else if(Notu >= 60) puts("D");
    else if(Notu >= 50) puts("E");
    else puts("F");
    
}
