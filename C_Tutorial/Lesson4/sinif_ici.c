#include "stdio.h"

int main()
{
    int calisan_saat,maas;
    printf("Bu Haftadaki Çalışma Saatiniz Girin :");
    scanf("%d",&calisan_saat);
    
    if(40<= calisan_saat){
        int hesap = calisan_saat * 8.00;
        printf("Bu haftalık ücret %d",hesap);
    }
    else{
        int hesap = ((calisan_saat-40) * 12.00) + 320.00; 
         printf("Bu haftalık ücrel %d \n",hesap);
    }
    //15.. 60 üzeri

}