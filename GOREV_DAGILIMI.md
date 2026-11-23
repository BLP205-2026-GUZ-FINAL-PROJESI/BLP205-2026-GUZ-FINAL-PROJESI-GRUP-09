# BLP 205 Veri Yapıları Final Projesi - Görev Dağılımı

**Ders:** BLP 205 - Veri Yapıları (2026-2027 Güz Dönemi)  
**Proje:** Kampüs Kütüphanesi ve Öğrenci Hizmetleri Otomasyonu  
**Grup:** Grup 09  
**GitHub Deposu:** BLP205-2026-GUZ-FINAL-PROJESI-GRUP-09  

## Ekip Üyeleri ve Sorumluluk Tablosu

| Öğrenci Adı Soyadı | Öğrenci No | GitHub Kullanıcı Adı | Ana Sorumluluk | Sorumlu Olduğu Dosyalar ve Fonksiyonlar | Test Ettiği Bölümler ve Ortak Çalışmalar |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Edanur Keleş** | `202507012069` | **Modül 1:** Bağlı Listeler ve Dosya İşlemleri | `veri_modelleri.h`, `modul1.h`, `modul1.cpp`<br>• `kitapBasaEkle()`, `kitapSonaEkle()`, `kitapArayaEkle()`, `kitapSil()`<br>• `ileriListele()`, `geriListele()`, `katalogAnaliz()`<br>• `duyuruEkle()`, `duyuruListele()`<br>• `dosyayaYaz()`, `dosyadanOku()` | Boş liste kontrolleri, ilk/orta/son düğüm silme, dairesel liste tam tur testi ve dinamik bellek (`delete`) temizliği. |
| **Azra İrem Kalyoncuoğlu** | `202507012020` | **Modül 2:** Yığın (Stack) ve Kuyruk (Queue) | `modul2.h`, `modul2.cpp`, `main.cpp`<br>• `stackPush()`, `stackPop()`, `stackPeek()`, `stackListele()`<br>• `queueEnqueue()`, `queueDequeue()`, `queueListele()`<br>• Ana menü ve hatalı giriş kontrolleri | Boş yığın ve boş kuyruk sınır durumları, FIFO/LIFO sırası doğrulaması ve `README.md` güncellemeleri. |
| **Zeynep Özdil** | `202507012023` | **Modül 3:** Sıralama ve Arama Algoritmaları | `modul3.h`, `modul3.cpp`<br>• `listedenDiziyeAktar()`<br>• `bubbleSortSayfa()`<br>• `insertionSortSayfa()`<br>• `quickSortID()`<br>• `binarySearchID()`<br>• `ornekVerileriYukle()` | Karşılaştırma ve takas/kaydırma sayaçlarının doğrulanması, bulunan ve bulunamayan ID ile Binary Search testleri. Modül 1 veri yapısıyla entegrasyon. |
| **Berfin Rümeysa Sevgül** | `202507012107` | **Modül 4:** Graf ve Kampüs Rota Analizi | `modul4.h`, `modul4.cpp`<br>• `komsulukMatrisiOlustur()`, `matrisYazdir()`<br>• `bfsGezinme()`, `dfsGezinme()`<br>• `dijkstraEnKisaYol()`<br>• `hizliTamDemo()` | Kampüs birimleri arası en kısa yol rota adımları testi, `TEST_SENARYOLARI.md` ve uygulama ekran görüntüleri. |

## Ortak Çalışma ve Entegrasyon Süreci
- Tüm ekip üyeleri kendi sorumluluk alanlarındaki kodları kendi GitHub hesapları üzerinden anlamlı commit mesajlarıyla depoya yükler.
- Ana menü entegrasyonu, modüller arası veri aktarımı ve teslim öncesi sınır durum testleri ekip olarak birlikte doğrulanır.
