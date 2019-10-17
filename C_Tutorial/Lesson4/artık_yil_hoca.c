#include <stdio.h>
/*

4'e bölünmeli 

*/ 
 int main()
{
    int yil;
  
    printf("Yil giriniz:");
    scanf("%d",&yil);
    if(yil%4==0 && yil%100!=0 || yil%400==0) printf("Artik yıl ");
    

    
    return 0;
}