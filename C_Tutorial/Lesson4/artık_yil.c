#include <stdio.h>
 
 int main()
{
    int ay, yil;
    int gunsayisi;
    printf("Yil giriniz:");
    scanf("%d",&yil);
    printf("Ay giriniz:");
    scanf("%d",&ay);
    

  if(ay == 1 || ay == 3 || ay == 5 || ay == 7 || ay == 8 || ay == 10 || ay == 12)  gunsayisi = 31;

  if(ay == 4 || ay == || ay == 5 || ay == 7 || ay == 8 || ay == 10 || ay == 12)  gunsayisi = 30;

  if(ay == 1 || ay == 3 || ay == 5 || ay == 7 || ay == 8 || ay == 10 || ay == 12)  gunsayisi = 28;
  if(ay == 2)
     if (yil % 4 == 0 && yil % 100 != 0 || yil % 400 == 0 && yil % 4000 != 0) gunsayisi=29;
     else gunsayisi=28;         



    printf("Gun sayisi: %d",gunsayisi);
    return 0;
}