//Direnç sýnýfý tanýmlandý public ve private üye fonksiyonlarý ve deðiþkenlerini tanýmladýk

#include <iostream>
class Direnc//Oluþturulan sýnýfýn adý 
{
public:
	//Fonksiyon Prototipleri
	void DegerAta(int);//DegerAta Fonksiyonunun Prototipi
	double AkimHesapla(double);//AkimHesapla Fonksiyonunun Prototipi
	int GerilimHesapla(double);//GerilimHesapla Fonksiyonunun Prototipi
private:
	//Deðiþken Deklerasyonu
	int r, v;
	double i;
};
