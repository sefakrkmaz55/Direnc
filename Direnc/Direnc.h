//Diren� s�n�f� tan�mland� public ve private �ye fonksiyonlar� ve de�i�kenlerini tan�mlad�k

#include <iostream>
class Direnc//Olu�turulan s�n�f�n ad� 
{
public:
	//Fonksiyon Prototipleri
	void DegerAta(int);//DegerAta Fonksiyonunun Prototipi
	double AkimHesapla(double);//AkimHesapla Fonksiyonunun Prototipi
	int GerilimHesapla(double);//GerilimHesapla Fonksiyonunun Prototipi
private:
	//De�i�ken Deklerasyonu
	int r, v;
	double i;
};
