//
//  ort.c
//  
//
//  Created by Mustafa Kaan Demir on 15.03.2019.
//

#include <stdio.h>
int main()
{
    int s1,s2,s3;
    puts("Birinci Sayıyı Gir : ");
    scanf("%d",&s1);
    puts("İkinci Sayıyı Gir : ");
    scanf("%d",&s2);
    puts("Üçüncü Sayıyı Gir : ");
    scanf("%d",&s3);
    int toplam = (s1+s2+s3)/3;
    printf("Cevap : %d \n",toplam);
}
