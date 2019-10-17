#include "stdio.h"
int main(){
    char mhal;
    puts("Medeni Durumu Nedir ?");
    scanf("%c",&mhal);


    if(mhal == 'M' )  puts("Medeni durumuz evli"); // Bu gelen şey true mu ??? if(isalnum(harf))
    else if(mhal == 'S')  puts("Medeni durumuz bekar"); 
    else if(mhal == 'D')  puts("Medeni durumuz boşanmış"); 
    else if(mhal == 'W')  puts("Medeni durumuz dul'dur"); 
    else puts("Doğru bir medeni durum giriniz....");
    
}