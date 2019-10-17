//
//  toplama.c
//  
//
//  Created by Mustafa Kaan Demir on 15.03.2019.
//

/*
 \a = Ses Üret
 \t = Yatay TAB tuşuna basmışınız gibi işlem yapar
 */

#include <stdio.h>

int main()
{
    int x = 1 ,y= 2;
    int toplam = x + y;
    
    printf("%d + %d = %d \n",x,y,toplam);
    
    x++;
    toplam = x+y;
    printf("%d + %d = %d \n",x,y,toplam);
    
    printf("Ses Ver \a \n");
    
    printf("İsim\tSoyisim\tNot\n");
    printf("Gökhan\tSilahtar\tOğlu\n");
    printf("Mustafa\tKaan\tDEMİR\n");
    return 0;
    
}
