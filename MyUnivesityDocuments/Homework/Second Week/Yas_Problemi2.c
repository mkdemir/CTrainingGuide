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

//Değerlere sıfır değerini veriyoruz
int x;
int y;
puts("NisSayıyı Giriniz");
scanf("%d",&y);
int Years;
scanf("%d",&Years);

   //5 yıl önce Nisa x + 10 yaşındaydı
    y = x + 10;

    //  R + 10 = 3(R-5) denklemi kuruyoruz.
      x = 3*(x-5) - y;

     // printf("%d\n",x); // Kontrol amaçlı bakmak için yazılmıştır.


    /*
     25 = 2R
     R = 12,5
*/
      float Rauf= -1*(x/2.0);
     
     printf("Rauf'un bugünkü yaşı :\t%0.1f\n",Rauf); 


     float Nisa = Rauf + 15;
     printf("Nisanın bugünkü yaşı :\t%0.1f\n",Nisa);
  }