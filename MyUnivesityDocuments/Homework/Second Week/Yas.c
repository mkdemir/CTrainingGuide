//  Yas_Problemi.c

/*
N = Nisa
R = Rauf

   N.        R
 ------     ------
  R+15.       R

  R+10        R-5

  R + 10 = 3(R-5)

  25 = 2R
  R = 12,5
  N= 12,5 +15  
  Şu anki yaşı N = 27,5
  
*/



#include <stdio.h>
int main()
{
    //Nisa == y , Rauf == x
    //
//Başlangıçta değişkenleri 0 olarak tanımlıyoruz.
int x = 0;
int y = 0;

   //5 yıl önce Nisa x + 10 yaşındaydı
   printf("Nisa Rauf'tan kaç yaş büyüktür = ");
   int Yas_Buyuk;
   scanf("%d",&Yas_Buyuk);

   printf("Kaç yıl önceye dönelim = ");
   int Year;
   scanf("%d",&Year);

    y = x + (15 - Year);

    //  R + 10 = 3(R-5) denklemi kuruyoruz.
      x = 3*(x-Year) - y;

    /*
     25 = 2R
     R = 12,5
     */
    
     float Rauf= -1*(x/2.0);
     printf("Rauf'un bugünkü yaşı :\t%0.1f\n",Rauf); 
    
     float Nisa = Rauf + Yas_Buyuk;
     printf("Nisa'nın bugünkü yaşı :\t%0.1f\n",Nisa);

    float Kat = Nisa / Rauf;

    printf("Nisa, Rauf'un Yaşının Kaç Katı : %0.1f\n",Kat );
     
  }