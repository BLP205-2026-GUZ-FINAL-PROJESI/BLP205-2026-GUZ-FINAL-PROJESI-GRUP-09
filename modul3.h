#ifndef MODUL3_H
#define MODUL3_H

#include "ortak_yapilar.h"

// Siralama algoritmalarinin karsilastirma ve takas/kaydirma
struct SiralamaIstatistik {
    int karsilastirmaSayisi;
    int islemSayisi; //Elemanların yer değiştirmek için kaç kez takas edildiğini(buble ve quick) kaydırıldığını(insertion) tutar.
};

// birinci bagli listedeki kitaplari dinamik diziye aktarir. modül 1 ile kopru
KitapDugum* listedenDiziyeAktar(KitapDugum* head, int& boyut);

// kitap dizisinisayfa sayisina gore kucukten buyuge bubble sort(kabarcik siralamasi) ile siralar
SiralamaIstatistik bubbleSortSayfa(KitapDugum dizi[], int boyut);

// dizideki kitaplari ekrana listeler
void kitapDizisiYazdir(const KitapDugum dizi[], int boyut); // const verileri sadece okur degistirmez
void modul3Menu(KitapDugum* head); // void geriye deger dondurmez

// 30 kasim 3 aralik da eklenecek diger fonksiyonlar
SiralamaIstatistik insertionSortSayfa(KitapDugum dizi[], int boyut);
SiralamaIstatistik quickSortId(KitapDugum dizi[], int sol, int sag);
int binarySearchId(const KitapDugum dizi[], int boyut, int arananId, int& adimSayisi);

#endif // MODUL3_H