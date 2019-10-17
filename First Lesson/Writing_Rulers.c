#include "stdio.h"

/*
Yazım Kuralları Ve İşlemler(Operatörler) 
int  main  bir fonk tanımlama alanı 

Programlama Dilindeki Temel Unuslar :
Statements(İfadeler) Her bir satır ifade
Bloclklar(blocks) --İki küme parantezi içinde yazılan bütün cümleler bu bloğun bir parcası
Yapısal Programlama (Structured Programming )
  -Bloğun Koşullu Olması. if-else 
  -Bloğun Tekrarlanabilmesi döngüler looplardır  
  -Bloğun Parametrik Olması Bloğun parametre verilerek çalıştırabilmesi fonksiyonlar

İleri seviyelerde debugger hafızada tanımlanmış değişkenler içindeki anlık görüntüleri erişmemizi sağlar
 */
int main()
{
  int a = 10;

  /*{
  	//O alanda tanımlanan değiken bastırılır.

  	//scope array  değişkenin geçerli olduğu alan
  	int a = 5;
  	printf("%d\n",a); 
  }
*/



   printf("%d\n",a);


   //İşlemler 
/*
Tekil işlemler (++) unary ops
İkili işlemler (+) binart ops
Mantıksal İşlemler (>=)(Logical Operators) (Boolean Algebra,Boolean logic)(True yada False)(1 yada 0)(n)
Atama İşlemi (=) (Assignment Operators)

Programda bütün sayılar ikilik tabanda tutulur
Programlama dileri ikilik tabandadır.

printf("\n%d",a >> 2);
Ok yönü solu gösteriyor bir yadıralacak
0100 , 1000
2 = 0010 ikilik taban
Son hali 2 = 1000

 */
int b = 3,c = 7;

printf("%d\n",a+b );
printf("%d\n",a<<2);

   return 0;
}