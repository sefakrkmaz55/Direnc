#include "Direnc.h"
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    Direnc direnc;
    int r, akimDeger, gerilimDeger;

    cout << "R direnc parametresinin deðerini giriniz:";//Kullanýcýdan direnç parametresini alýp DegerAta fonksiyonuna yolluyoruz
    cin >> r;
    direnc.DegerAta(r);
    cout << endl;

    cout << "V gerilim parametresinin deðerini giriniz:";//Kullanýcýdan gerilim parametresini alýp AkimHesapla fonksiyonundaki iþlemleri yaptýrdýk
    cin >> akimDeger;
    cout << endl << "Akým(I):" << direnc.AkimHesapla(akimDeger) << endl;//Hesaplanan deðeri ekrana yazdýrdýk
    cout << endl;

    cout << "I akým parametresinin deðerini giriniz:";//Kullanýcýdan gerilim parametresini alýp GerilimHesapla fonks. iþlemleri yaptýrdýk
    cin >> gerilimDeger;
    cout << endl << "Gerilim(V):" << direnc.GerilimHesapla(gerilimDeger) << endl;//Hesaplanan deðerleri ekrana yazdýrdýk
    cout << "\n";
    system("pause");
    return 0;
}


