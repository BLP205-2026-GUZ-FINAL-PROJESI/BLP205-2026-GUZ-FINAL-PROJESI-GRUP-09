#include <iostream>
#include <iomanip>
#include "modul3.h"

using namespace std;

KitapDugum* listedenDiziyeAktar(KitapDugum* head, int& boyut) {  //bagli listedeki dugumleri hizli indeks erişimi icin dinamik diziye kopyalar. orijinal listeyi bozmaz
    boyut = 0;
    KitapDugum* temp = head;
    while (temp != nullptr) { // listede kac kitap oldugunu sayar ve boyut degiskenineyazar
        boyut++;
        temp = temp->next;
    }

    if (boyut == 0) {  //liste bossa bos isaretci dondurulur
        return nullptr;
    }

    KitapDugum* dizi = new KitapDugum[boyut];
    temp = head;
    for (int i = 0; i < boyut; i++) {
        dizi[i] = *temp; //isaretcinin gosterdigi dügümdeki tüm kitap bilgilerini dizinin i. elemanına kopyalar
        dizi[i].next = nullptr; // dizi elemanlarinin baglanti isaretcilerini sifirla
        dizi[i].prev = nullptr; // guvenlik onlemi
        temp = temp->next;
    }

    return dizi;
}

// bubble sort sayfa sayisina gore kucukten buyuge siralar
SiralamaIstatistik bubbleSortSayfa(KitapDugum dizi[], int boyut) {
    SiralamaIstatistik istatistik = {0, 0};

    if (boyut <= 1 || dizi == nullptr) {  // dizi bossa veya tek elemanliysa zaten sirali oldugu icin islem yapmadan doner
        return istatistik;
    }

    for (int i = 0; i < boyut - 1; i++) { // yanyana duran iki kitabi kiyaslar
        bool takasOldu = false;
        for (int j = 0; j < boyut - i - 1; j++) {
            istatistik.karsilastirmaSayisi++;  // her kiyaslamada sayi bir arttirilir
            if (dizi[j].sayfaSayisi > dizi[j + 1].sayfaSayisi) {  //soldaki kitabin sayfa sayisi sagdakinden buyukse
                KitapDugum gecici = dizi[j];  // gecici bir degisken yardımıyla yer degistirirler
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = gecici;
                istatistik.islemSayisi++;
                takasOldu = true;
            }
        }
        //eger ic dongude hic takas olmadiysa dizi zaten siralidir
        if (!takasOldu) {
            break;
        }
    }

    return istatistik;
}

// dizideki kitaplari tablo halinde ekrana yazdirir
void kitapDizisiYazdir(const KitapDugum dizi[], int boyut) {
    if (boyut == 0 || dizi == nullptr) {
        cout << "[!] Listelenecek kitap bulunamadi." << endl;
        return;
    }

    cout << "\n--------------------------------------------------------------------------" << endl;
    cout << left << setw(8) << "ID"  // left metinleri sola hizaliyor
         << setw(30) << "Kitap Adi"  // set width her sutun icin karakter genisligini berlirler
         << setw(25) << "Yazar Adi"
         << setw(10) << "Sayfa" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    for (int i = 0; i < boyut; i++) {
        cout << left << setw(8) << dizi[i].kitapId
             << setw(30) << dizi[i].kitapAdi
             << setw(25) << dizi[i].yazarAdi
             << setw(10) << dizi[i].sayfaSayisi << endl;
    }
    cout << "--------------------------------------------------------------------------" << endl;
}

// Taslak fonksiyonlar (Sonraki asamada doldurulacak)
SiralamaIstatistik insertionSortSayfa(KitapDugum dizi[], int boyut) {
    SiralamaIstatistik istatistik = {0, 0};
    cout << "[Bilgi] Insertion Sort fonksiyonu bir sonraki asamada eklenecektir." << endl;
    return istatistik;
}

SiralamaIstatistik quickSortId(KitapDugum dizi[], int sol, int sag) {
    SiralamaIstatistik istatistik = {0, 0};
    cout << "[Bilgi] Quick Sort fonksiyonu bir sonraki asamada eklenecektir." << endl;
    return istatistik;
}

int binarySearchId(const KitapDugum dizi[], int boyut, int arananId, int& adimSayisi) {
    adimSayisi = 0;
    cout << "[Bilgi] Binary Search fonksiyonu bir sonraki asamada eklenecektir." << endl;
    return -1;
}

// modul 3 etkilesimli menu
void modul3Menu(KitapDugum* head) {
    int secim;
    do {
        cout << "\n[MODUL 3: SIRALAMA VE ARAMA ALGORITMALARI]" << endl;
        cout << "1. Bubble Sort (Sayfa Sayisina Gore Sirala - Aktif)" << endl;
        cout << "2. Insertion Sort (Sayfa Sayisina Gore - Yakinda)" << endl;
        cout << "3. Quick Sort ve Binary Search (ID'ye Gore - Yakinda)" << endl;
        cout << "0. Ana Menuye Don" << endl;
        cout << "Alt Seciminiz: ";

        if (!(cin >> secim)) { //girdi dogrulama. sayi yerine harf girilirse.
            cin.clear(); //hatayi temizler
            cin.ignore(10000, '\n'); // hatali karakterleri siler
            cout << "[Hata] Gecersiz giris! Lutfen bir sayi giriniz." << endl;
            secim = -1;
            continue;
        }

        if (secim == 1) {
            int boyut = 0;
            KitapDugum* dizi = listedenDiziyeAktar(head, boyut); // baglı listedeki veriler yeni bir diziye kopyalanir

            if (dizi == nullptr || boyut == 0) {
                cout << "[!] Katalogda siralanacak kitap bulunmuyor." << endl;
            } else {
                cout << "\n--- Siralama Oncesi Liste ---";
                kitapDizisiYazdir(dizi, boyut);

                SiralamaIstatistik sonuc = bubbleSortSayfa(dizi, boyut); // istatistikler gosterilir

                cout << "\n--- Bubble Sort Sonrasi (Sayfa Sayisina Gore) ---";
                kitapDizisiYazdir(dizi, boyut);
                cout << "[Istatistik] Karsilastirma Sayisi: " << sonuc.karsilastirmaSayisi
                     << " | Takas Sayisi: " << sonuc.islemSayisi << endl;

                delete[] dizi; // dinamik bellek temizligi. memory leaki onlemek icin onemli
            }
        } else if (secim == 2) {
            cout << "[Bilgi] Insertion Sort henuz tamamlanmadi." << endl;
        } else if (secim == 3) {
            cout << "[Bilgi] Quick Sort ve Binary Search henuz tamamlanmadi." << endl;
        } else if (secim != 0) {
            cout << "[Hata] Gecersiz secim! Lutfen 0-3 arasi bir deger giriniz." << endl;
        }

    } while (secim != 0);
}