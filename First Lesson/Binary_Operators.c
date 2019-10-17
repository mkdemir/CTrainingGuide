#include <stdio.h>
/*
 ve opt. bir önceliği var...

AND Tablosu & = 
00 0 
10 0 
01 0 
11 1


OR Tablosu | = 

00 0 
10 1
01 1
11 1
 */



int main()
{
	// & bit seviyesindeki and opt.
	// // Kaydırma işlemleri (>> ,<< )
	//\ or opt. 
	int a;
	int b = 5; // İkilik tabanda 0101 4 bit
	int c = 2; //.               0010 

	a = b&c;  //.                0000 & and'i alındığı zaman 0 çıkar. 
	          //                 0111 | or'u alındığı zaman 2 çıkar
	          //Sonuç 0
	b =c|a&2; //Sounç 2
	/*
	a 0000
    2 0010

     0000 and'i alındı 
     0010 

     0010 or alındı oda 2 sonucunu verdi  
	 */
	c = c<<2; //Sonuç 8

return 0; 

}