//
//  Ekrana Yazdırma.c
//  
//
//  Created by Mustafa Kaan Demir on 15.03.2019.
//

#include <stdio.h>
int main()
{
    int s1,s2,toplam;
    
    //puts('Birinci Sayıy Giriniz :  ');
    puts("Birinci Sayıyı Giriniz");
    scanf("%d",&s1);
    scanf("%d",&s2);

    toplam = s1 + s2;
    printf("Toplama %d \n",toplam);
}
