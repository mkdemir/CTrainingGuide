//
//  Kullanıcı.c
//  
//
//  Created by Mustafa Kaan Demir on 15.03.2019.
//

#include <stdio.h>
int main()
{
    int a,b,c;
    float sonuc;

    
    printf("a Sayıyı Giriniz : ");
    scanf("%d",&a);
      printf("b Sayıyı Giriniz : ");
    scanf("%d",&b);
    printf("c Sayıyı Giriniz : ");
    scanf("%d",&c);
    
     sonuc = float(a*a + 2*b*b + 3*c)/3;
    printf("Denklem (a^2 + 2b^2 + 3c)/3\n");
    printf("Sonuc =%f\n",sonuc);
}
