//
//  giris.c
//  
//
//  Created by Mustafa Kaan Demir on 12.03.2019.
//


/*
 Lesson1 = C'ye Giriş (Start C) (Program Kavramı)
 
 Comment:
 --C programlama ile ilgili genel syntax(Söz dizimi) veriyor.(Yapısal Bilgiyi Veriyor)
 --Hafızaya doğrudan erişim sağlıyor.
 --Orta seviye bir dil olması
 --Çok yaygın olarak kullanılıyor.
 --Modern olan programlama dilerinde ezici bir çoğunlukla C syntax'i kullanılması
 
 Not : Compiler = Derleyici
       IDE = Geliştirme ortamı
       Syntax = Söz dizimi
       Program = O bilgisayara özel donanıma özel o işletim sistemine özel çalıştırabilir biz yazıdır.Bir stringtir.
       Executable = Çalıştırabilir kod
       Tuning İşlemi = Küçük ayarlamalar yapma
 
 
      Variable = Değişik bilgiler tutabilen yapılar.(Hafıza yönetimi)
 --Bilgisayarın Temel Girdileri : stdio(System out system in)(Standart Input Output )
 **--Standart Girdi : Klavye ,mouse, kamera
 **--Standart Çıktı : Monitör ba şka printer, network üzerinden
 
 **--RAM(Birincil Hafıza)==(Primary Memory) ---Değişkenler ram'de tutuluyor. Örnek : Doğum tarihi
 **--CPU(Central Prosessing Unit)(Merkezi İşlem Birimi) --- İşler burada çalışıyor. Örnek : Toplama, Çıkarma
 **--HDD (Seconder Memory)
 
 --Her program çalışmak iç in bir işletim sistemine ihtiyaç duyar
 --Bu uygulamaların çalışması için işletim sistemine özel fonk. çağrılması gerekiyor.
 
 --İşletim sistemini izni olmadan ekrana hiç bir çıktı verilemez.
 --İşletim sistemi izin vermeden klavyeden bir şey okuyamam
 --Complir kaynak kodumu alıp işletim sisteminin anladığı makine koduna(010101) dönüştüryor.
 --Çağırmak istediğimiz şey o işlemciye ulabilmek
 
 -*-*- Her program, her işletim sisteminde, her işlemcide aynı hızda çalışmaz.Aynı performansta çalışmaz.CPU mimarilerine göre bazı işletim sistemlerine göre özel tuningler yapmalıyız daha iyi bir kullanım için
 --<conio.h> Sadece Windows için kullanılıyor.
 -*-* getch(); : Ekrana bir karakter girmesini bekle (Windows 8'lerde vardı) // <conion.h  >
 
 --C her hangi bir fonk tanımaz.(C'de printf diye bir fonk. yoktur.)
 --<stdio.h> = Standar t input output header dosyasıdır.
 
 --main = İşletim sistemi üzerinde çağrılan özel bir foksiyondur.Ana fonksiyon ilk çalıştırılan fonkisyon olarak kabul ediyoruz. Yadığımız kodlar içinde olacak
 
 *****---*******---*--*--*-*-*-*-*-*-
 Kodlarımız .cpp yada .c ile oluşturabiliriz.
 gcc yada g++ ile derleyebilirsiniz.
 
 <conion.h> Linuxtaki karşılığı #include <ncurses.h> 'dır.  Example : #include <ncurses.h> 

 /\ a.out dosyası binary kod (Çalıştırabilir kod)
  g++ (c++ için olan ) = GNU C compiler  orjinali gcc 
 */
#include "stdio.h"

int main()
{
	printf("Mustafa Kaan DEMİR\n");
    return 0;
}
