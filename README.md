# BLP205-2026-GUZ-FINAL-PROJESI-GRUP-09
## Kampüs Kütüphanesi ve Öğrenci Hizmetleri Otomasyonu

**Üniversite:** Doğuş Üniversitesi - Bilgisayar Programcılığı  
**Ders:** BLP 205 - Veri Yapıları (2026-2027 Güz Dönemi)  
**Programlama Dili:** C++ (C++11 ve üzeri)  
**Son Teslim Tarihi:** 6 Aralık 2026  

---

### Projenin Amacı
Bu proje, Veri Yapıları dersinde işlenen temel veri yapıları ve algoritmaların (Çift Yönlü Bağlı Liste, Tek Yönlü Dairesel Bağlı Liste, Yığın, Kuyruk, Sıralama/Arama Algoritmaları ve Graf) tek bir C++ konsol uygulamasında birleştirilerek bir kampüs kütüphanesi otomasyonu geliştirilmesini amaçlamaktadır.

### Modüller ve Veri Yapıları
- **Modül 1:** Çift yönlü doğrusal bağlı liste (Kitap kataloğu), tek yönlü dairesel bağlı liste (Duyuru panosu) ve dosya işlemleri (`fstream`).
- **Modül 2:** Bağlı liste tabanlı Yığın / Stack (İşlem geçmişi) ve Kuyruk / Queue (Ödünç kitap sırası).
- **Modül 3:** Dizi üzerinde Bubble Sort, Insertion Sort, Quick Sort ve Binary Search algoritmaları.
- **Modül 4:** 2B Komşuluk Matrisi ile Graf temsili, BFS, DFS ve Dijkstra en kısa kampüs rotası.

### Derleme ve Çalıştırma (Geliştirme Aşamasında)
```bash
g++ -std=c++11 main.cpp modul1.cpp modul2.cpp modul3.cpp modul4.cpp -o kutuphane
./kutuphane
