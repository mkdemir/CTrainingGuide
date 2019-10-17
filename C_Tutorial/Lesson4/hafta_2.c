#include "math.h"
#include "stdio.h"
int main()
{
    float s1, s2,s3;
    puts("Birinici Sayıyı Gir = ");
    scanf("%f",&s1);
     puts("İkinci Sayıyı Gir = ");
    scanf("%f",&s2);
     puts("Üçüncü Sayıyı Gir = ");
    scanf("%f",&s3); 
    
    if(s1 > s2  && s1 > s3)
     puts("En büyük s1");
     if(s2 > s1 && s2 > s3 )
     puts("En büyük s2");
     if(s3 > s1  && s3 > s2)
     puts("En büyük s3");
    else(s1 == s2 || s1 == s3)
       if( s1 == s2 )
      pusts("s1 ,s2 eşit");
      if( s1 == s3 )
      pusts("s1 ,s2 eşit");

       if( s2 == s1 )
      pusts("s1 ,s2 eşit");
       if( s2 == s3 )
      pusts("s1 ,s2 eşit");
      
}