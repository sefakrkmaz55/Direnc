//Direnç sýnýfýnda oluþturduðumuz fonksiyonlarýn yapmasý gereken iþlemleri yaptýrdýk

#include "Direnc.h"
#include <iostream>
using namespace std;

//Fonksiyon Tanýmlarý
void Direnc::DegerAta(int r1) {
	r = r1;
}

double Direnc::AkimHesapla(double akimDeger) {
	v = akimDeger;
	i = double(v / r);
	return i;
}

int Direnc::GerilimHesapla(double gerilimDeger) {
	i = gerilimDeger;
	v = i * r;
	return v;
}

