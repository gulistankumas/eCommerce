#pragma once

#include <string>
#include <vector>
#include "ETicaretPlatformu.h"
#include "Urun_bilgileri.h"

class UrunKategori {
public:
    UrunKategori(const std::string& adi);
    void urunEkle(const Urun_bilgileri& urun);
    void urunleriListele() const;
    std::vector<Urun_bilgileri> ozelliklereGoreAra(const UrunOzellikleri& arananOzellikler);
    std::string kategoriAdi;

private:
    std::string adi;
    std::vector<Urun_bilgileri> urunler;

};