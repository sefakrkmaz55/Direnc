#include "Direnc.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    Direnc direnc;
    int r, akimDeger, gerilimDeger;

    cout << "R direnc parametresinin de�erini giriniz:";//Kullan�c�dan diren� parametresini al�p DegerAta fonksiyonuna yolluyoruz
    cin >> r;
    direnc.DegerAta(r);
    cout << endl;

    cout << "V gerilim parametresinin de�erini giriniz:";//Kullan�c�dan gerilim parametresini al�p AkimHesapla fonksiyonundaki i�lemleri yapt�rd�k
    cin >> akimDeger;
    cout << endl << "Ak�m(I):" << direnc.AkimHesapla(akimDeger) << endl;//Hesaplanan de�eri ekrana yazd�rd�k
    cout << endl;

    cout << "I ak�m parametresinin de�erini giriniz:";//Kullan�c�dan gerilim parametresini al�p GerilimHesapla fonks. i�lemleri yapt�rd�k
    cin >> gerilimDeger;
    cout << endl << "Gerilim(V):" << direnc.GerilimHesapla(gerilimDeger) << endl;//Hesaplanan de�erleri ekrana yazd�rd�k
    cout << "\n";
    system("pause");
    return 0;
}


