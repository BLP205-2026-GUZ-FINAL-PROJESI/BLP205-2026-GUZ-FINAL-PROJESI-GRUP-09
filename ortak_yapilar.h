#ifndef ORTAK_YAPILAR_H
#define ORTAK_YAPILAR_H

#include <iostream>
#include <string>

using namespace std;

// ============================================================================
// ORTAK SABITLER
// ============================================================================
const string KITAP_DOSYA_ADI = "kitaplar.txt";
const char DOSYA_AYIRAC = '|';
const int KAMPUS_BIRIM_SAYISI = 6;
const int SONSUZ_MESAFE = 999999;

// ============================================================================
// MODUL 1 & MODUL 3 ORTAK YAPILARI (KITAP & DUYURU)
// ============================================================================

// Cift yonlu dogrusal bagli liste dugumu (Modul 1)
struct KitapDugum {
    int kitapId;
    string kitapAdi;
    string yazarAdi;
    int sayfaSayisi;
    KitapDugum* next;
    KitapDugum* prev;
};

// Siralama ve arama algoritmalari icin dizi elemani (Modul 3)
// Not: Bagli listedeki veriler bu yapiya kopyalanarak siralanacaktir.
struct KitapKayit {
    int kitapId;
    string kitapAdi;
    string yazarAdi;
    int sayfaSayisi;
};

// Tek yonlu dairesel bagli liste dugumu (Modul 1 - Duyurular)
struct DuyuruDugum {
    int duyuruId;
    string duyuruMetni;
    DuyuruDugum* next;
};

// ============================================================================
// MODUL 2 YAPILARI (YIGIN / STACK & KUYRUK / QUEUE)
// ============================================================================

// Bagli liste tabanli Yigin (Stack) dugumu (Islem Gecmisi)
struct IslemDugum {
    string islemAciklama;
    IslemDugum* next;
};

// Bagli liste tabanli Kuyruk (Queue) dugumu (Odunc Bekleme Sirasi)
struct OgrenciDugum {
    string ogrenciNo;
    string adSoyad;
    string talepEdilenKitap;
    OgrenciDugum* next;
};

// ============================================================================
// MODULLER ARASI KOPRU VE MENU FONKSIYON PROTOTIPLERI
// (Her ogrenci kendi .cpp dosyasinda bu fonksiyonlari dolduracaktir)
// ============================================================================

// --- MODUL 1 (1. Ogrenci) ---
void modul1Menu();
void modul1OrnekVeriYukle();
void modul1DemoCalistir();
void modul1BellekTemizle();
KitapDugum* kitapListesiBasGetir(); // Modul 3'un listeyi diziye aktarmasi icin

// --- MODUL 2 (2. Ogrenci) ---
void modul2Menu();
void modul2OrnekVeriYukle();
void modul2DemoCalistir();
void modul2BellekTemizle();
void islemGecmisineEkle(string aciklama); // Diger modullerin Stack'e kayit atabilmesi icin

// --- MODUL 3 (3. Ogrenci) ---
void modul3Menu();
void modul3DemoCalistir();

// --- MODUL 4 (4. Ogrenci) ---
void modul4Menu();
void modul4OrnekVeriYukle();
void modul4DemoCalistir();

#endif // ORTAK_YAPILAR_H