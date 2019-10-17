#include "stdio.h"
#include "ctype.h" 
int main(){
        char harf;
    int alfnum, rakam;
    puts("Bir harf giriniz ...");
    scanf("%c",&harf);
    if(isalnum(harf) == 0)  puts("Girdiğin şey noktalama işareti"); // Bu gelen şey true mu ??? if(isalnum(harf))
    else if(isdigit(harf) > 0)  puts("Siz bir sayı giriniz ...");
    else if(harf >= 'A' && harf <= 'Z') puts("Büyük harf giriniz ....");
    else puts("Kucuk harf");

}