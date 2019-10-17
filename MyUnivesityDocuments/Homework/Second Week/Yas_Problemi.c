//  Yas_Problemi.c

/*
 Matematiksel Denklem Kurma : 
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


  Yani, 
  Rauf, 12,5 yaşında Nisa ise Rauf'tan 15 yaş büyük olduğu için 27,5 yaşındadır.
 
  
*/

#include <stdio.h>
int main(){

    //Nisa == y , Rauf == x

//Başlangıçta değişkenleri 0 olarak tanımlıyoruz.
int x = 0;
int y = 0;
int Year = 5;

   //5 yıl önce Nisa x + 10 yaşındaydı
  
    y = x + (15 - Year);

    //  R + 10 = 3(R-5) denklemi kuruyoruz.
      x = 3*(x-Year) - y;

     // printf("%d\n",x); // Kontrol amaçlı bakmak için yazılmıştır.

    /*
     25 = 2R
     R = 12,5
     */
      float Rauf= (-1*(x/2.0))-Year;
     printf("Rauf'un 5 yıl önceki yaşı :\t%0.1f\n",Rauf); 

     float Nisa =(Rauf + 15)-Year;
     printf("Nisa'nın 5 yıl önceki yaşı :\t%0.1f\n",Nisa);



      Rauf= -1*(x/2.0);
     printf("Rauf'un bugünkü yaşı :\t\t%0.1f\n",Rauf); 

      Nisa = Rauf + 15;
     printf("Nisa'nın bugünkü yaşı :\t\t%0.1f\n",Nisa);
  }