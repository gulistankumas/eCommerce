#include "UrunKategori.h"
#include <iostream>

UrunKategori::UrunKategori(const std::string& _adi) : adi(_adi) {}

void UrunKategori::urunEkle(const Urun_bilgileri& urun) {
    urunler.push_back(urun);
}
void UrunKategori::urunleriListele() const {
    std::cout << "Urun Kategori: " << adi << std::endl;
    for (const auto& urun : urunler) {
        std::cout << "Urun Adi: " << urun.getAdi() << ", Fiyat: " << urun.getFiyat() << std::endl;
    }
}
std::vector<Urun_bilgileri> UrunKategori::ozelliklereGoreAra(const UrunOzellikleri& arananOzellikler) {
    std::vector<Urun_bilgileri> bulunanUrunler;
    for (const auto& urun : urunler) {
        if (urun.getOzellikler().getRenk() == arananOzellikler.getRenk() &&
            urun.getOzellikler().getMarka() == arananOzellikler.getMarka()) {
            bulunanUrunler.push_back(urun);
        }
    }
    return bulunanUrunler;
}
